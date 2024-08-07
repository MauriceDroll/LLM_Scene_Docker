from llm_interfaces.srv import UserInteraction
import rclpy
from rclpy.node import Node
from .UserInput import UserInput
from threading import Timer


class UserInputService(Node):

    def __init__(self):
        #rclpy.init(args=None)
        super().__init__('UserInputServiceSender')
        self.srv = self.create_service(UserInteraction, 'user_interaction', self.userinput_callback)

        print("Node wurde initialisiert")

    def userinput_callback(self, request, response):
        
        response.user_input = UserInput.getUserInput()
        self.get_logger().info('Incoming request, current Input: %s' % UserInput.getUserInput())

        return response
    
    def shutdown_node(self):
        rclpy.shutdown()
        self.get_logger().info('Service destroyed: %s' % UserInput.getUserInput())
        UserInput.UserInput_str = 'No Input'


def main(args=None):
    rclpy.init(args=args)

    service = UserInputService()
    service.get_logger().info('Service was started and spins now')
    rclpy.spin(service)
    #print("Service erzeugt")

    #rclpy.spin('user_input')
    #rclpy.spin(self.srv)

    

if __name__ == '__main__':
    main()