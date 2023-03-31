# -*- coding: utf-8 -*-
import rclpy
import numpy as np
from ros_environment.scene import RobotClient
from ros_environment.transform import Affine

def main(args=None):
    rclpy.init(args=args)
    robot = RobotClient(is_simulation=True)
    
    robot.home()
    robot.ptp(Affine((-0.075, -0.171, 1.145), (0.000, 0.710, -0.000, 0.704)))
    robot.ptp(Affine((0.043, 0.144, 1.270), (-0.000, -0.092, -0.000, 0.996)))
    robot.lin(Affine((0.000, -0.052, 1.088), (-0.000, 0.704, 0.000, 0.711)))
    robot.open_gripper()
    robot.close_gripper()

    robot.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
