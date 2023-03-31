# -*- coding: utf-8 -*-
import rclpy
import numpy as np
from ros_environment.scene import RobotClient
from ros_environment.transform import Affine

def main(args=None):
    rclpy.init(args=args)
    robot = RobotClient(is_simulation=True)
    
    robot.home()
    robot.ptp(Affine((0.0, -0.2, 1.2), (0.0, np.radians(180+45), 0.0)))
    robot.ptp(Affine((-0.2, 0.3, 1.25), (0.0, 1.0, 0.0, 0.0)))
    robot.lin(Affine((0.1, 0.0, 1.2), (0.0, 1.0, 0.0, 0.0)))
    robot.open_gripper()
    robot.close_gripper()

    robot.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
