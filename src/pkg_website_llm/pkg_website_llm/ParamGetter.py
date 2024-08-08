import sys

from llm_interfaces.srv import SetGetAllTypes
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(SetGetAllTypes, 'get_set_all_types')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SetGetAllTypes.Request()

    def send_request(self, a, b):
        self.get_logger().info('In Send Request')

    # Check types of a and b
        self.get_logger().info(f'Type of a: {type(a)}, Value: {a}')
        self.get_logger().info(f'Type of b: {type(b)}, Value: {b}')

    # Set request parameters
        self.req.get_or_set = a
        self.req.requested_variable = b

    # Log the request object
        self.get_logger().info(f'Request object: {self.req}')

        try:
        # Make the asynchronous call
            self.future = self.cli.call_async(self.req)

        # Wait for the result
            rclpy.spin_until_future_complete(self, self.future)

        # Return the result
            return self.future.result()
        except TypeError as e:
        # Log the error
            self.get_logger().error(f'TypeError encountered: {e}')
            raise
        except Exception as e:
        # Log any other exceptions
            self.get_logger().error(f'Exception encountered: {e}')
            raise



def main(args=None):
    rclpy.init(args=args)

    minimal_client = MinimalClientAsync()
    response = minimal_client.send_request("test", "UserInput")
    minimal_client.get_logger().info('Response: %s' % response.user_input)
    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()