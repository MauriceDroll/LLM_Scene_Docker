from llm_interfaces.srv import WebsiteFeedback

import rclpy
from rclpy.node import Node
from .WebsiteFeedbackData import WebsiteFeedbackData


class MinimalService(Node):

    def __init__(self):
        super().__init__('website_feedback_server')
        self.srv = self.create_service(WebsiteFeedback, 'get_website_feedback', self.save_data_for_website)

    def save_data_for_website(self, request, response):
        self.get_logger().info('Incoming request received')
        WebsiteFeedbackData.setCylinderIds(str(request.cylinder_ids))
        WebsiteFeedbackData.setPackage(str(request.package))
        WebsiteFeedbackData.setGraspPose(str(request.grasp_pose))
        WebsiteFeedbackData.setPlacePose(str(request.place_pose))
        self.get_logger().info('Set website feedback ')
        return 


def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()