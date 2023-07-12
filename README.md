# Learning-based Articulated Object Mapping with the HoloLens

## Abstract

This work uses Ditto: Building Digital Twins of Articulated Objects from Interaction to create a segmented mesh reconstruction of articulated objects, along with axis parameters for prismatic or rotational joints. Ditto needs two distinct inputs as point clouds from the object, where one input is at rest state and the other 
after interacting with the mobile part of the object. The scanning is performed using the HoloLens 2, joint axis result from Ditto can be seen in the HoloLens for a double check and correction. Finally, a URDF model of the object is saved.

## Installation (Ubuntu 18.04)
There are different packages that need to be installed.

1. Clone this repository in your computer
2. Install ROS melodic
3. Create a catkin workspace and add the content of the catkin_src folder of this repo into the src folder of your catkin workspace.
4. Compile the catkin workspace using catkin_make.


The unity project is located in the QRCodeXRSDX folder, the following packages were used in this project:
1. hl2ss: follow the instructions on the folder hl2ss_test on this repository to correctly install. This folder already contains everything you need from Ditto
2. Unity-Robotics-Hub: follow the instructions of the [Unity-Robotics-Hub](https://github.com/Unity-Technologies/Unity-Robotics-Hub/tree/main/tutorials/ros_unity_integration) to setup the ROS connection and to create the ROS messages.
3. QR tracking with HoloLens: the tutorial is [here](https://codeholo.com/2021/03/27/qrcode-tracking-with-hololens-2-xr-sdk-and-mrtk-v2-5/).


## Instructions
1. Follow these [instructions](https://github.com/DiegoMachain/ArticulatedObjectMapping/blob/main/hl2ss_test/instructions.md) from hl2ss to create the necessary calibration folders for the HoloLens camera.

### Running Ground Truth
The ground truth used is from the work “Active articulation model estimation through interactive perception”, where we follow the reading of a QR code placed on the 
mobile part of the object using the HoloLens. 
![My Image](images/QR_setup.png)