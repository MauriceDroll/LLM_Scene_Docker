import time

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from PreProcessing import PreProcessing

from MainLLM import MainLLM

#from pkg_pack_item_server import SelectedItems
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
        
        # Receive user input from the website
        user_input = goal_handle.request.userinput
        self.get_logger().info('Received goal order: {0}'.format(user_input))
        self.get_logger().info('Executing goal...')
        
        # Send Feedback after 0% of the process: PreProcessing started
        feedback_msg = LLM.Feedback()
        feedback_msg.progress = 0
        goal_handle.publish_feedback(feedback_msg)
        
        # Create Prompt for the LLM (PreProcessing done) and send feedback after 50 %
        prompt = PreProcessing.formatPrompt(self,"",user_input)
        self.get_logger().info('Prompt: {0}'.format(prompt))
        
        feedback_msg.progress = 50
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.progress))
        goal_handle.publish_feedback(feedback_msg)
        
        result_dict = MainLLM.startLLM(prompt)
        
        # Start the LLM and send feedback after 100 %
        #result_dict = "Gemockte Antwort des LLM"
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.progress))
        self.get_logger().info('LLM was started')
        goal_handle.publish_feedback(feedback_msg)
        goal_handle.succeed()

        result = LLM.Result()
        result.llmoutput = str(result_dict)
        
        # Set the result of the action as list
        # pack_item_server cań send the files to packing algorithm
        
        # for each class name in the result_dict
        # first clear the list
        # get class name from result_dict       
        # SelectedItems.append(class name)
        

        return result


def main(args=None):
    print("[LLM Action Server] MAIN")
    rclpy.init(args=args)

    fibonacci_action_server = LLMActionServer()

    rclpy.spin(fibonacci_action_server)


if __name__ == '__main__':
    main()