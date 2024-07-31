import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from UserInput import UserInput

from llm_action_interfaces.action import LLM

class LLMActionClient(Node):

    def __init__(self):
        super().__init__('llm_action_client')
        self._action_client = ActionClient(self, LLM, 'llm_action_server')
        print("Action Client initialized")
        userInput = UserInput.getUserInput()
        self.get_logger().info('UserInput: {0}'.format(userInput))
        self.get_logger().info('ENDE INIT LLMActionClient')

    def send_goal(self, user_input):
        self.get_logger().info('ANFANG send goal')
        
        print("User Input: ", user_input)
        request_msg = LLM.Goal()
        request_msg.userinput = str(user_input)

        self._action_client.wait_for_server()
        print("Server gefunden")
        self._send_goal_future = self._action_client.send_goal_async(request_msg)
        print("Ziel gesendet")
        self.get_logger().info('ENDE send goal')
        

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
#         result_man = LLM.Result()
#         self.get_logger().info('TYPE: {0}'.format(type(future)))

                
#         result = future.result().result
#         self._result = result.result  # Speichern des Resultats in der Instanzvariable
#         self.get_logger().info('Result: {0}'.format(self._result))
# #        result = future.result().result
#         #result = future.result()

#         self.get_logger().info('Result: {0}'.format(result.llmoutput))
#         rclpy.shutdown()
#         #return result.llmoutput
        try:
            result = future.llmoutput()
            self.get_logger().info('TYPE: {0}'.format(type(result)))
            self._result = result.llmoutput  # Speichern des Resultats in der Instanzvariable
            self.get_logger().info('Result: {0}'.format(self._result))
            self.get_logger().info('Result: {0}'.format(result.llmoutput))
        except Exception as e:
            self.get_logger().error('Exception in get_result_callback: {0}'.format(e))
        
        rclpy.shutdown()
        
        

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: {0}'.format(feedback.progress))

def main(args=None):
    rclpy.init(args=args)  # Ensure that rclpy is initialized before creating a node
    action_client = LLMActionClient()

    userInput = UserInput.getUserInput()
    print(userInput)
    action_client.get_logger().info('UserInput: {0}'.format(userInput)) 
    # userInput = "Wo befindet sich das Box_Wischblatt?"

    action_client.send_goal(userInput)

    print("Goal sent")
    rclpy.spin(action_client)
    # rclpy.spin_until_future_complete(action_client, future)


if __name__ == '__main__':
    main()
