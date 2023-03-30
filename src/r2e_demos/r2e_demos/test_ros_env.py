# -*- coding: utf-8 -*-
import rclpy
import numpy as np
from ros_environment.scene import RosScene
from ros_environment.transform import Affine

def main(args=None):
    rclpy.init(args=args)
    scene = RosScene(is_simulation=True)
    
    scene.robot.home()
    scene.robot.ptp(Affine((0.0, -0.2, 1.2), (0.0, np.radians(180+45), 0.0)))
    scene.robot.ptp(Affine((-0.2, 0.3, 1.25), (0.0, 1.0, 0.0, 0.0)))
    scene.robot.lin(Affine((0.1, 0.0, 1.2), (0.0, 1.0, 0.0, 0.0)))
    scene.robot.open_gripper()
    scene.robot.close_gripper()
    
    scene.shutdown()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
