import rclpy
from typing import List
from ros_environment.robot import RobotClient
from ros_environment.transform import Affine


class CubesDemo():
    """ Class to demonstrate the KUKA ready2_educate cubes example with ros2.
    """
    def __init__(
            self,
            is_simulation: bool = False,
            home_pose: Affine = Affine(
                (-0.046, -0.413, 1.070), 
                (0.000, 0.907, -0.000, 0.420)),
            ramp_top: Affine = Affine(
                (-0.189, -0.413, 1.179), 
                (0.000, 0.706, -0.001, 0.708)),
            ramp_bottom: Affine = Affine(
                (-0.046, -0.413, 1.070), 
                (0.000, 0.907, -0.000, 0.420))) -> None:
        """ Initialize the cubes demo class.

        Parameters
        ----------
        is_simulation : bool, default=False
            Defines if the demo runs on the real robot or in simulation.
        home_pose : Affine, default=Affine((0.015, -0.053, 1.458), (0.006, 0.707, 0.006, 0.707))
            The robot's cartesian home pose.
        ramp_top : Affine, default=Affine((-0.204, -0.483, 1.287), (0.009, 0.994, -0.001, -0.112))
            The robot's cartesian pose to reach the top of the cubes ramp. The default pose
            is correct if the ramp is positioned as follows: the mounting holes that are
            nearer to the ramp respectively are used. The mounting holes are at positions
            B13 (further away from ramp) and B9 (directly next to ramp).
            ramp-side (hole B9) (unused hole) space (hole B13) (unused hole) vertical-column-side
        ramp_bottom : Affine, default=Affine((-0.062, -0.483, 1.149), (0.009, 0.0994, -0.001, -0.112))
            The robots' cartesian pose to reach the cubes at the bottom of the ramp.
            The default pose is correct if the ramp is positioned as described in "ramp_top"
            parameter description.

        """
        # TODO change all 3 default poses
        # TODO set home_pose in RobotClient after changed in ros_env robot
        self.robot = RobotClient(is_simulation=is_simulation)
        self.robot.home_pose=home_pose
        self.ramp_top = ramp_top
        self.ramp_bottom = ramp_bottom
        
    def run_demo(
            self, 
            matrix_center: Affine = Affine(
                (0.114, -0.152, 1.137), 
                (0.008, 0.966, 0.002, 0.259)),
            matrix_distance: float = 0.074) -> None:
        """ Run the cubes demo: build a 3x3 matrix of cubes and tidy up afterwards.
        
        Parameters
        ----------
        matrix_center : Affine, default=Affine((0.1, -0.052, 1.15), (0.0, 1.0, 0.0, 0.0))
            The pose to position the central cube of the matrix.
        distance : float, default=0.074
            The distance (in meters) between the cube centers in the matrix. Be careful 
            to choose a value that leaves enough space for the opened gripper.

        """
        # TODO change matrix center default pose
        self.robot.home()
        matrix = self.get_matrix_poses(matrix_center, matrix_distance)
        self.set_up_cubes(matrix)
        self.robot.home()
        self.tidy_up_cubes(matrix)
        self.robot.home()
        self.shutdown_demo()
    
    def shutdown_demo(self) -> None:
        """ Finish up the demo by destroying the RobotClient node.
            
        """
        self.robot.destroy_node()
        
    @staticmethod
    def get_matrix_poses(center_pose: Affine, distance: float) -> List[Affine]:
        """ Get each pose for the 3x3 cube matrix.

        Parameters
        ----------
        center_pose : Affine
            The pose to position the central cube of the matrix.
        distance : float
            The distance (in meters) between the cube centers in the matrix.

        Returns
        -------
        List[Affine]
            List of the cube matrix poses.

        """

        poses = list()
        for x_direction in [-1, 0, 1]:
            for y_direction in [-1, 0, 1]:
                copy_pose = Affine(center_pose.translation, center_pose.quat)
                copy_pose.translation[0] = copy_pose.translation[0] + x_direction * distance
                copy_pose.translation[1] = copy_pose.translation[1] + y_direction * distance
                poses.append(copy_pose)
        return poses
    
    def get_pre_pose(self, pose: Affine, distance: float = 0.05) -> Affine:
        """ Calculate the pre-pick and pre-place pose with the given distance 
        to the given pose.

        Parameters
        ----------
        pose : Affine
            The final pick/place pose.
        distance : float, default=0.05
            Distance between pre-pose and final pose.

        Returns
        -------
        pre_pose : TYPE
            The pre-pose (pre-pick/pre-place pose).

        """
        # TODO change to correct offsets
        translation = (pose.translation[0], pose.translation[1], pose.translation[2]+distance)
        pre_pose = Affine(translation, (pose.quat))
        return pre_pose
    
    def pick(self, pick_pose: Affine) -> None:
        """ Pick process: open the gripper, move to pre-pick pose (ptp),
        move to pick pose (lin), close the gripper, move back to pre-pick pose 
        (lin).
        
        Parameters
        ----------
        pick_pose : Affine
            The pick pose.

        """
        self.robot.open_gripper()
        pre_pick = self.get_pre_pose(pick_pose, distance=0.05)
        self.robot.ptp(pre_pick)
        self.robot.lin(pick_pose)
        self.robot.close_gripper()
        self.robot.lin(pre_pick)
        
    def place(self, place_pose: Affine) -> None:
        """ Place process: move to pre-place pose (ptp), move to place pose 
        (lin), open gripper, move to pre-pace (lin).

        Parameters
        ----------
        place_pose : Affine
            The place pose.

        """
        pre_place = self.get_pre_pose(place_pose, distance=0.05)
        self.robot.ptp(pre_place)
        self.robot.lin(place_pose)
        self.robot.open_gripper()
        self.robot.lin(pre_place)
        
    def set_up_cubes(self, pose_matrix: List[Affine]) -> None:
        """ Set up cubes from the ramp in a 3x3 matrix in front of the robot.

        Parameters
        ----------
        pose_matrix : List[Affine]
            The place poses for the cubes in the matrix.

        """
        for place_pose in pose_matrix:
            self.pick(self.ramp_bottom)
            self.place(place_pose)
            
    def tidy_up_cubes(self, pose_matrix: List[Affine]) -> None:
        """ Tidy up the cubes from a 3x3 matrix and put them back on the ramp.

        Parameters
        ----------
        pose_matrix : List[Affine]
            The pick poses for the cubes in the matrix.

        """
        for pick_pose in pose_matrix:
            self.pick(pick_pose)
            self.place(self.ramp_top)        

        
def main(args=None):
    # initialize ros communications for a given context
    rclpy.init(args=args)
    
    """ 
    The example only works correctly if the ramp with the cubes is positioned
     as follows: The mounting holes that are nearer to the ramp respectively 
     are used. The mounting holes are fixed at positions B9 (directly next to 
     ramp) and B13 (further away from ramp).
    --> ramp-side (hole B9) (unused hole) space (hole B13) (unused hole) vertical-column-side
    
    To use the ramp at another position, please change the ramp_top and 
     ramp_bottom parameters when initialising the CubesDemo object.
      
    The cube matrix position can be changed as well if desired by setting the
     matrix_center and matrix_distance parameters of the run_demo function as
     described in its docstring.
    """
    # initialise the cubes demo
    # TODO remove incorrect poses / change to new default poses
    cubes = CubesDemo(
        is_simulation=True,
        home_pose=Affine((0.206, -0.049, 1.340), (0.000, 0.407, -0.000, 0.914)),
        ramp_bottom=Affine((-0.046, -0.413, 1.070), (0.000, 0.907, -0.000, 0.420)),
        ramp_top=Affine((-0.189, -0.413, 1.179), (0.000, 0.706, -0.001, 0.708)))
    # run the cubes demo; the position of the cube matrix can be changed by
    #  setting the matrix_center and matrix_distance parameters as described
    #  in the rund_demo function's docstring
    # TODO remove matrix center and distance / change to new default
    cubes.run_demo(
        matrix_center=Affine((0.136, -0.049, 1.033), (0.000, 0.706, -0.000, 0.708)),
        matrix_distance=0.074)
    
    # shutdown previously initialized context
    rclpy.shutdown()


if __name__ == '__main__':
    main()
