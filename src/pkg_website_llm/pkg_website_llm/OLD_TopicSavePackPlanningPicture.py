import rclpy
from rclpy.node import Node

from llm_action_interfaces.msg import SolutionFeedback
from cv_bridge import CvBridge
import cv2


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('pack_planning_pictures')
        self.subscription = self.create_subscription(
            SolutionFeedback,
            'solution_feedback',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        print("wurde initialisiert")

    def listener_callback(self, topic_message):
        #self.get_logger().info('I heard: "%s"' % msg.data)
        print("message kam an")
        container_amount = topic_message.message
        topic_picture = topic_message.image
        
        bridge = CvBridge()
        picture = bridge.imgmsg_to_cv2(topic_picture, "passthrough")  # Konvertiere die ROS 2 Image-Nachricht zurück in ein OpenCV-Bild

        # Speichern Sie das Bild, das sich in der test-Variablen befindet
        save_path = "/static/images/PackPlanning.png"    
        cv2.imwrite(save_path, picture)
        self.get_logger().info(f"Bild wurde gespeichert unter {save_path}")

def main(args=None):
    rclpy.init(args=args)

    picture_subscriber = MinimalSubscriber()

    rclpy.spin(picture_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    picture_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()