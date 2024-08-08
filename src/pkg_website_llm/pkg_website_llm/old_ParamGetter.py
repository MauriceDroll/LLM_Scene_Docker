import rclpy
from rclpy.node import Node
from rcl_interfaces.srv import GetParameters, SetParameters
from rcl_interfaces.msg import Parameter, ParameterType

from llm_interfaces.srv import SetGetAllTypes
from std_msgs.msg import String

class ParameterClient(Node):
    def __init__(self):
        super().__init__('parameter_client')
    

    def get_parameter(self, parameter_name):
        client = self.create_client(SetGetAllTypes, 'get_set_all_types')

        while not client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')

        request = SetGetAllTypes.Request()
        request.get_or_set = 'get'
        request.requested_variable = parameter_name

        future = client.call_async(request)
        rclpy.spin_until_future_complete(self, future)

        try:
            response = future.result()
            return response.values[0].string_value
        except Exception as e:
            self.get_logger().error(f'Service call failed {e}')
            return None
    
    def set_parameter(self, parameter_name, parameter_value):
        client = self.create_client(SetGetAllTypes, 'get_set_all_types')

        while not client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')

        request = SetGetAllTypes.Request()
        request.get_or_set = 'set'
        request.requested_variable = parameter_name
        request.value = parameter_value

        future = client.call_async(request)
        rclpy.spin_until_future_complete(self, future)

        try:
            response = future.result()
            return response.success
        except Exception as e:
            self.get_logger().error(f'Service call failed {e}')
            return False

def main(args=None):
    rclpy.init(args=args)
    parameter_client = ParameterClient()

    #node_name = 'parameter_server'
    parameter_name = 'user_input'
    new_value = 'BI_t_CH'

    # Get parameter
    current_value = parameter_client.get_parameter(parameter_name)
    print(f'Current parameter value: {current_value}')

    # Set parameter
    success = parameter_client.set_parameter(parameter_name, new_value)
    if success:
        print(f'Successfully set parameter to: {new_value}')
    else:
        print('Failed to set parameter.')

    # Verify new parameter value
    updated_value = parameter_client.get_parameter(node_name, parameter_name)
    print(f'Updated parameter value: {updated_value}')

    parameter_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    success = parameter_client.set_parameter(node_name, parameter_name, new_value)