import rclpy
from rclpy.node import Node
from llm_interfaces.srv import SetGetAllTypes
from std_msgs.msg import String

class ParamSetter(Node):
    
    def __init__(self):
        super().__init__('param_setter')
        self.srv = self.create_service(SetGetAllTypes, 'get_set_all_types', self.userinput_callback)

        # Deklarieren und setzen mehrerer Parameter
        #self.declare_parameter('pack_list', 'TEST')
        self.declare_parameter('user_input', 'No Input')
        self.declare_parameter('user_approval', False)
        

        self.set_parameters([
            #rclpy.parameter.Parameter('pack_list', rclpy.Parameter.Type.STRING_ARRAY, [String.data("Box_Gluehlampe"), String.data("Box_Wischblatt"),String.data("Keilriemen_gross"), String.data("Box_Bremsbacke"), String.data("Keilriemen_klein"),String.data("Box_Messwertgeber")]),
            #rclpy.parameter.Parameter('pack_list', rclpy.Parameter.Type.STRING_ARRAY, ['Box_Gluehlampe', 'Box_Wischblatt', 'Keilriemen_gross', 'Box_Bremsbacke', 'Keilriemen_klein', 'Box_Messwertgeber']),
            rclpy.parameter.Parameter('user_input', rclpy.Parameter.Type.STRING, 'No Input'),
            rclpy.parameter.Parameter('user_approval', rclpy.Parameter.Type.BOOL, False)
        ])
    
    def userinput_callback(self, request, response):
        self.get_logger().info('Incoming request, current Input')
        # Idee: String als Anfrage
        # Switch Case -> String -> variable
        # Wenn z.b. String = 'Packing_List' -> response.packing_list = getPackList()
        #response.pack_list = self.get_parameter('pack_list').value
        response.user_input = self.get_parameter('user_input').value
        response.user_approval = self.get_parameter('user_approval').value

        return response
        
        
        
    @classmethod
    def setPackList(self, packing_list):
        self.set_parameters([
            rclpy.parameter.Parameter('packing_list', rclpy.Parameter.Type.STRING_ARRAY, packing_list)
        ])
        
    @classmethod
    def clearPackList(self):
        self.set_parameters([
            rclpy.parameter.Parameter('packing_list', rclpy.Parameter.Type.STRING_ARRAY, [])
        ])
        
        
    def setUserInput(self, userInput):
        self.set_parameters([
            rclpy.parameter.Parameter('userInput', rclpy.Parameter.Type.STRING, userInput)
        ])
    
    @classmethod
    def setApproval(self, approval):
        self.set_parameters([
            rclpy.parameter.Parameter('UserApproval', rclpy.Parameter.Type.BOOL, approval)
        ])
        
    @classmethod 
    def getPackList(self):
        return self.get_parameter('Packing_List').value


def main(args=None):
    rclpy.init(args=args)
    node = ParamSetter()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()