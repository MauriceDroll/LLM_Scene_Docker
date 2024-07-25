import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
import UserInput

from llm_action_interfaces.action import LLM


class LLMActionClient(Node):

    def __init__(self):
        super().__init__('llm_action_client')
        self._action_client = ActionClient(self, LLM, 'llm_action_server')
        rclpy.init(args=None)
        print("Action Client initialized")

    def send_goal(self, user_input):
        print("User Input: ", user_input)
        request_msg = LLM.Goal()
        request_msg.userinput = str(user_input)

        self._action_client.wait_for_server()
        print("Server gefunden")
        self._send_goal_future = self._action_client.send_goal_async(request_msg)
        print("Ziel gesendet")

        self._send_goal_future.add_done_callback(self.goal_response_callback)
        print("Ende send_goal")

    
    def goal_response_callback(self, future):
        
        goal_handle = future.result()
        
        if not goal_handle.accepted:
            self.get_logger().info('LLM request rejected :(')
            return

        self.get_logger().info('LLM request accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)
        

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.llmoutput))
        rclpy.shutdown()
    
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: {0}'.format(feedback.progress))

def main(args=None):
    rclpy.init(args=args)  # Ensure that rclpy is initialized before creating a node
    action_client = LLMActionClient()


    userInput = UserInput.getUserInput()
    #userInput = "Wo befindet sich das Box_Wischblatt?"

    future = action_client.send_goal(userInput)
    
   
    print("Goal sent")
    rclpy.spin(action_client)
    #rclpy.spin_until_future_complete(action_client, future)


if __name__ == '__main__':
    main()