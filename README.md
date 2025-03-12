
# **Handbot**

## **Overview**

Handbot is a **ROS2-based pick-and-place robotic system** that utilizes **point cloud data** for planning and execution. This repository provides **scripts and configurations** to set up and run the pick-and-place demo.

For a detailed workflow and project overview, refer to the tutorial:  
📌 **[Handbot Project Workflow](https://docs.google.com/presentation/d/1_IrrrFWcnsJyO7S9RAhfpcaALf2ykr9DR3WG7Q5xyDs/edit?usp=sharing)**  

---

## **Prerequisites**

Before running the project, ensure you have the following installed:  

✅ **ROS2 Jazzy**  
✅ **Dependencies for MoveIt and Point Cloud Processing**  

---

## **Installation**

Clone this repository and navigate to the workspace:

```bash
cd ~/ros2_ws/src
git clone https://github.com/darshmenon/handbot.git
cd ~/ros2_ws
colcon build --symlink-install
source install/setup.bash
```

---

## **1. Running the Point Cloud Processing Script**  

📂 **Path to script:**  
`~/ros2_ws/src/handbot_ros2/handbot_mtc_pick_place_demo/scripts/pointcloud.sh`  

This script handles:  

✅ **Point cloud filtering and segmentation**  
✅ **Feature extraction**  
✅ **Object clustering for pick-and-place**  

**To execute:**  

```bash
bash pointcloud.sh
```

---

## **2. Running the Robot Simulation & Pick-and-Place Task**  

📂 **Path to script:**  
`~/ros2_ws/src/handbot_ros2/handbot_mtc_pick_place_demo/scripts/robot.sh`  

This script automates:  

✅ **Launching Gazebo with the MyCobot model**  
✅ **Starting the MoveIt motion planning interface**  
✅ **Setting up the camera view**  
✅ **Executing the Pick-and-Place demo**  

**To execute:**  

```bash
bash robot.sh
```

---

## **3. Ensuring Execution Permissions**  

Before running the scripts, grant execution permissions if needed:

```bash
chmod +x ~/ros2_ws/src/handbot_ros2/handbot_mtc_pick_place_demo/scripts/pointcloud.sh
chmod +x ~/ros2_ws/src/handbot_ros2/handbot_mtc_pick_place_demo/scripts/robot.sh
```

---

## **4. Updating Default Directory Paths**  

Before running the demo, update the directory paths in the relevant files:

### **Modify the default PCD file path in `get_planning_scene_server.cpp`**  

```cpp
declare_parameter("output_directory", "/your/custom/path/", "Directory to save output PCD files");
```
📂 **Located at:**  
`~/ros2_ws/src/handbot_ros2/handbot_mtc_pick_place_demo/src/get_planning_scene_server.cpp`

---

### **Update the configuration file**  

📂 **File path:**  
`~/ros2_ws/src/handbot_ros2/handbot_mtc_pick_place_demo/config/get_planning_scene_server.yaml`

Modify these values with your directory:

```yaml
output_directory: "/your/custom/path/"
debug_pcd_filename: "debug_cloud.pcd"
```

---

## **5. Launching the Point Cloud Viewer**  

Run the following **ROS2 launch command**, adjusting the file path as needed:

```bash
ros2 launch handbot_mtc_pick_place_demo point_cloud_viewer.launch.py file_name:=/your/custom/path/5_objects_cloud_debug_cloud.pcd
```

---


## **Contact**  

For issues or contributions, create an **issue** or a **pull request** on the **[GitHub repository](https://github.com/darshmenon/handbot/)**.  

---
