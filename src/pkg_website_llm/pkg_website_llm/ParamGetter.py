import subprocess

class ParamGetter:
    
    def __init__(self):
        pass
    
    def get_ros2_param(self,var_name):
                
        # Der genaue Terminalaufruf
        command = ['ros2', 'param', 'get', '/LLM/Parameter_Setter', var_name]
                
        try:
                    # Den Befehl ausführen und das Ergebnis erfassen
            result = subprocess.run(command, capture_output=True, text=True, check=True)
                    
            # Die Ausgabe des Befehls ausgeben
            print(result.stdout)
                    
            # Falls notwendig, können Sie auch das Ergebnis zurückgeben
            return result.stdout
        except subprocess.CalledProcessError as e:
                # Fehlerbehandlung
            print(f"Error executing command: {e}")
            print(f"stderr: {e.stderr}")
                    
    def set_ros2_param(self,var_name, value):
                
        # Der genaue Terminalaufruf
        command = ['ros2', 'param', 'set', '/LLM/Parameter_Setter', var_name, value]
                
        try:
            # Den Befehl ausführen und das Ergebnis erfassen
            result = subprocess.run(command, capture_output=True, text=True, check=True)
                    
            # Die Ausgabe des Befehls ausgeben
            print(result.stdout)
                    
            # Falls notwendig, können Sie auch das Ergebnis zurückgeben
            return result.stdout
                
        except subprocess.CalledProcessError as e:
            # Fehlerbehandlung
            print(f"Error executing command: {e}")
            print(f"stderr: {e.stderr}")

# Funktion aufrufen
#get_ros2_param("MauriceVariable")
#set_ros2_param("MauriceVariable", "TEST_Param_getter")
#set_ros2_param("Liste", "Test Test Test")






# import rclpy
# from rclpy.node import Node
# from rcl_interfaces.srv import GetParameters, SetParameters
# from rcl_interfaces.msg import Parameter, ParameterType

# class ParameterClient(Node):
#     def __init__(self):
#         self.parameter_name = 'USE_SIM_TIME_NAME'
#         super().__init__('parameter_client')

#         #self.get_logger().info('bin in Init')
#         self._time_source = rclpy.time_source.TimeSource(node=self)
#         self.declare_parameter('use_sim_time', False)
#         self.attach_node(self)

#     def attach_node(self, node):
#         use_sim_time_param = node.get_parameter('parameter_client', USE_SIM_TIME_NAME)
#         self.get_logger().info(f'use_sim_time: {use_sim_time_param.value}')
        
    
#     def get_parameter(self, node_name, parameter_name):
#         client = self.create_client(GetParameters, f'/{node_name}/get_parameters')
        
#         while not client.wait_for_service(timeout_sec=1.0):
#             self.get_logger().info('Service not available, waiting again...')

#         request = GetParameters.Request()
#         request.names = [parameter_name]

#         future = client.call_async(request)
#         rclpy.spin_until_future_complete(self, future)
        
#         try:
#             response = future.result()
#             if response:
#                 return response.values[0].string_value
#             else:
#                 return None
            
#         except Exception as e:
#             self.get_logger().error(f'Service call failed {e}')
#             return None
    
#     def set_parameter(self, node_name, parameter_name, parameter_value):
#         client = self.create_client(SetParameters, f'/{node_name}/set_parameters')

#         while not client.wait_for_service(timeout_sec=1.0):
#             self.get_logger().info('Service not available, waiting again...')

#         param = Parameter()
#         param.name = parameter_name
#         param.value.string_value = parameter_value
#         param.type = ParameterType.PARAMETER_STRING

#         request = SetParameters.Request()
#         request.parameters = [param]

#         future = client.call_async(request)
#         rclpy.spin_until_future_complete(self, future)

#         try:
#             response = future.result()
#             if response:
#                 return response.results[0].successful
#             else:
#                 return False
#         except Exception as e:
#             self.get_logger().error(f'Service call failed {e}')
#             return False

# def main(args=None):
#     rclpy.init(args=args)
#     parameter_client = ParameterClient()

#     node_name = 'parameter_server'
#     parameter_name = 'my_param'
#     new_value = 'new_value'

#     parameter_client.get_logger().info('Setting parameter...')
#     # Get parameter
#     #current_value = parameter_client.get_parameter(node_name, parameter_name)
#     print(f'Current parameter value: {current_value}')

#     # Set parameter
#     success = parameter_client.set_parameter(node_name, parameter_name, new_value)
#     if success:
#         print(f'Successfully set parameter to: {new_value}')
#     else:
#         print('Failed to set parameter.')

#     # Verify new parameter value
#     updated_value = parameter_client.get_parameter(node_name, parameter_name)
#     print(f'Updated parameter value: {updated_value}')

#     parameter_client.destroy_node()
#     rclpy.shutdown()

# if __name__ == '__main__':
#     main()
