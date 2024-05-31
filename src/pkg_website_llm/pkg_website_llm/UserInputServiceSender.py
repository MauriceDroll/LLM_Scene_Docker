from llm_interfaces.srv import UserInput
import rclpy
from rclpy.node import Node
from UserInput import UserInput
from threading import Timer


class UserInputService(Node):

    def __init__(self):
        rclpy.init(args=None)
        super().__init__('UserInputServiceSender')
        self.srv = self.create_service(UserInput, 'user_input', self.userinput_callback)
        print("Node wurde initialisiert")

    def userinput_callback(self, request, response):
        response.user_input = UserInput.userInput_str
        print("Service wurde aufgerufen")
        return response
    
    def shutdown_node(self):
        rclpy.shutdown()
        print("Service zerstört")
        UserInput.UserInput_str = 'No Input'


    def main(args=None):
        #rclpy.init(args=args)

        print("Service erzeugt")

        rclpy.spin('user_input')


    

if __name__ == '__main__':
    main()