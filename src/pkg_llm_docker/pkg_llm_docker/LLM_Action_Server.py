import time

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from PreProcessing import PreProcessing

from MainLLM import MainLLM

from pkg_pack_item_server.SelectedItemsToPack import SelectedItems

from pkg_pack_item_server.pack_item_server import PackItemsService

from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

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
        self.get_logger().info('Action Server is ready')

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
        self.get_logger().info('LLM was started')
        goal_handle.publish_feedback(feedback_msg)
        
        # Start the LLM
        result_dict = MainLLM.startLLM(prompt)
        goal_handle.publish_feedback(feedback_msg)
        goal_handle.succeed()

        result = LLM.Result()
        result.llmoutput = str(result_dict)
        
        
        # Send the result to the website
        SelectedItems.clearPackList()
        for i in result_dict:
            print("Result:", i)
            SelectedItems.appendPackList(i)
        
        
        self.get_logger().info('Action sollte fertig sein!')
     
        #######################
        # PackServer #
        #######################

        
        #rclpy.init(args=args)
        pack_server = PackItemsService()
        self.get_logger().info('PackItemsService Node erstellt!')
        #rclpy.create_node(pack_server)
        #rclpy.spin_once(pack_server, timeout_sec=5.0)
        pack_server.spinNode()

        return result


def main(args=None):
    print("[LLM Action Server] MAIN")
    rclpy.init(args=args)

    action_server = LLMActionServer()
    #rclpy.spin(action_server)
    
    executor = MultiThreadedExecutor()
    action_server.get_logger().info('executor erstellt')

    rclpy.spin(action_server, executor=executor)
    action_server.get_logger().info('Spin beginnt')

    action_server.destroy()
    action_server.get_logger().info('Action Server beendet')


    action_server.get_logger().info('ACTION beendet')
    
    action_server.get_logger().info('Nachm Shutdown von ACTION')



if __name__ == '__main__':
    main()