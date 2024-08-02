import sys

import rclpy
from rclpy.node import Node
from llm_action_interfaces.srv import SolutionImage
from cv_bridge import CvBridge
import cv2


class SavePictureClientAsync(Node):

    def __init__(self):
        super().__init__('save_picture_client_async')
        self.cli = self.create_client(SolutionImage, 'platzhalter')
        while not self.cli.wait_for_service(timeout_sec=10.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SolutionImage.Request()

    def send_request(self, a, b):
        self.req = SolutionImage.Request()
        return self.cli.call_async(self.req)


def main():
    rclpy.init()

    minimal_client = SavePictureClientAsync()
    
    future = minimal_client.send_request(int(sys.argv[1]), int(sys.argv[2]))
    rclpy.spin_until_future_complete(minimal_client, future)
    
    response = future.result()
    
    # Convert Message into Picture
    bridge = CvBridge()
    picture = bridge.imgmsg_to_cv2(response, "passthrough")  # Konvertiere die ROS 2 Image-Nachricht zurück in ein OpenCV-Bild
    
    # Speichern Sie das Bild, das sich in der test-Variablen befindet
    save_path = "/static/images/Hintergrund.png"
    cv2.imwrite(save_path, picture)
    minimal_client.get_logger().info(f"Bild wurde gespeichert unter {save_path}")
    
    minimal_client.get_logger().info('Picture was updated')
    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()