import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from llm_action_interfaces.msg import SolutionFeedback

import cv2
from cv_bridge import CvBridge



class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('solution_feedback_node')
        self.publisher_ = self.create_publisher(SolutionFeedback, 'solution_feedback', 10)
        timer_period = 5.0  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        print("wurde aufgerufen")
        cv_image = cv2.imread("solution_screenshot.png")

        # Überprüfen, ob das Bild erfolgreich geladen wurde
        if cv_image is None:
            raise IOError("Bild konnte nicht geladen werden")

        # Konvertiere das OpenCV-Bild in eine ROS2 Image-Nachricht
        bridge = CvBridge()
        image_msg = bridge.cv2_to_imgmsg(cv_image, "passthrough")     
        
        feedback = SolutionFeedback()
        feedback.image = image_msg
        feedback.message = "TESTESTT"
        
        self.publisher_.publish(feedback)   
        self.get_logger().info('Publishing: "%s"' % feedback.message)
        
        print("Feedback sent")

        


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()