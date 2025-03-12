#!/bin/bash

cleanup() {
    echo "Cleaning up..."
    sleep 5.0
    pkill -9 -f "ros2|gazebo|gz|nav2|amcl|bt_navigator|rviz2|move_group|moveit|mqtt|autodock|cliff_detection"
}

trap 'cleanup' SIGINT SIGTERM

echo "Launching Gazebo simulation..."
ros2 launch handbot_gazebo handbot.gazebo.launch.py \
    load_controllers:=true world_file:=pick_and_place_demo.world \
    use_camera:=true use_rviz:=false use_robot_state_pub:=true \
    use_sim_time:=true x:=0.0 y:=0.0 z:=0.0 roll:=0.0 pitch:=0.0 yaw:=0.0 &

sleep 15 

echo "Launching the Move Group interface..."
ros2 launch handbot_moveit_config move_group.launch.py \
    rviz_config_file:=mtc_demos.rviz \
    rviz_config_package:=handbot_mtc_pick_place_demo &

echo "Adjusting camera position..."
gz service -s /gui/move_to/pose \
    --reqtype gz.msgs.GUICamera --reptype gz.msgs.Boolean \
    --timeout 2000 --req "pose: {position: {x: 1.36, y: -0.58, z: 0.95}, orientation: {x: -0.26, y: 0.1, z: 0.89, w: 0.35}}" &

sleep 7  

echo "Launching the Pick and Place demo..."
ros2 launch handbot_mtc_pick_place_demo get_planning_scene_server.launch.py execute:=true &

sleep 5  

ros2 launch handbot_mtc_pick_place_demo pick_place_demo.launch.py execute:=true
