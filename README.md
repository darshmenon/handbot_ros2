# Handbot

## Overview

Handbot is a ROS2-based pick-and-place robotic system that utilizes point cloud data for planning and execution. This repository provides scripts and configurations to set up and run the pick-and-place demo.

## Prerequisites

Before running the project, ensure you have the following installed:

- ROS2 jazzy

- Dependencies for MoveIt and point cloud processing

## Installation

Clone this repository and navigate to the workspace:

```bash
cd ~/ros2_ws/src
git clone https://github.com/darshmenon/handbot.git
cd ~/ros2_ws
colcon build --symlink-install
source install/setup.bash
```

## Running the Pick and Place Demo

To generate the point cloud file, execute the following scripts:

```bash
/ros2_ws/src/handbot_ros2/handbot_mtc_pick_place_demo/scripts/pointcloud.sh
/home/darsh/ros2_ws/src/handbot_ros2/handbot_mtc_pick_place_demo/scripts/robot.sh
```

### Updating Default Directory Paths

Before running the demo, update the directory paths in the relevant files:

- **Modify the default PCD file path** in `get_planning_scene_server.cpp`:
  ```cpp
  declare_parameter("debug_pcd_filename", "debug_cloud.pcd", "Filename for debug PCD output");
  ```
  Located at:
  ```
  /ros2_ws/src/handbot_ros2/handbot_mtc_pick_place_demo/src/get_planning_scene_server.cpp
  ```
- **Update the configuration file** at:
  ```
  /handbot_mtc_pick_place_democ_pick_place_demo/config/get_planning_scene_server.yaml
  ```
  Modify these values as needed with your directory:
  ```yaml
  output_directory: "/home/darsh/Downloads/"
  debug_pcd_filename: "debug_cloud.pcd"
  ```

## Launching the Point Cloud Viewer

Run the following ROS2 launch command:

```bash
ros2 launch handbot_mtc_pick_place_demo point_cloud_viewer.launch.py file_name:=/home/darsh/Downloads/5_objects_cloud_debug_cloud.pcd
```

## License

This project is licensed under the MIT License.

## Contact

For issues or contributions, create an issue or a pull request on the [GitHub repository](https://github.com/darshmenon/handbot/).

