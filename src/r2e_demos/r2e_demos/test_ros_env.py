import rclpy
from ros_environment.scene import RobotClient
from ros_environment.transform import Affine

def main(args=None):
    # initialize ros communications for a given context
    rclpy.init(args=args)
    
    # initialize robot client node; to open or close the gripper of the real 
    #  robot set is_simulation=False
    robot = RobotClient(is_simulation=True)
    
    # move robot to home pose
    robot.home()
    # robot ptp movement to given pose
    #  first tuple represents cartesian coordinates (x, y, z), the second tuple 
    #  represents rotation in quaternions (x, y, z, w)
    robot.ptp(Affine((-0.075, -0.171, 1.145), (0.000, 0.710, -0.000, 0.704)))
    # open gripper (does nothing when only in simulation)
    robot.open_gripper()
    # robot ptp movement again
    robot.ptp(Affine((0.043, 0.144, 1.270), (-0.000, -0.092, -0.000, 0.996)))
    # robot lin movement to given pose
    robot.lin(Affine((0.000, -0.052, 1.088), (-0.000, 0.704, 0.000, 0.711)))
    # close gripper (does nothing when only in simulation)
    robot.close_gripper()
    # back to home pose
    robot.home()

    # destroy the robot node
    robot.destroy_node()
    # shutdown previously initialized context
    rclpy.shutdown()
