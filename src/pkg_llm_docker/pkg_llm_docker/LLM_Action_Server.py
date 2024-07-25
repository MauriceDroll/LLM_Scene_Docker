import time

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from PreProcessing import PreProcessing

from MainLLM import MainLLM


from llm_action_interfaces.action import LLM


class LLMActionServer(Node):

    def __init__(self):
        super().__init__('llm_action_server')
        self._action_server = ActionServer(
            self,
            LLM,
            'llm_action_server',
            self.execute_callback)

    def execute_callback(self, goal_handle):
        user_input = goal_handle.request.userinput
        self.get_logger().info('Received goal order: {0}'.format(user_input))
        self.get_logger().info('Executing goal...')

        feedback_msg = LLM.Feedback()
        feedback_msg.progress = 0
        goal_handle.publish_feedback(feedback_msg)
        
        # Create Prompt for the LLM
        prompt = PreProcessing.formatPrompt(self,"",user_input)
        self.get_logger().info('Prompt: {0}'.format(prompt))
        
        # Feedback 
        feedback_msg.progress = 50
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.progress))
        goal_handle.publish_feedback(feedback_msg)
        
        result_dict = MainLLM.startLLM(prompt)
        
        #result_dict = "Gemockte Antwort des LLM"
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.progress))
        self.get_logger().info('LLM was started')
        goal_handle.publish_feedback(feedback_msg)
        goal_handle.succeed()

        result = LLM.Result()
        result.llmoutput = str(result_dict)

        return result


def main(args=None):
    print("LLM Action Server MAIN")
    rclpy.init(args=args)

    fibonacci_action_server = LLMActionServer()

    rclpy.spin(fibonacci_action_server)


if __name__ == '__main__':
    main()