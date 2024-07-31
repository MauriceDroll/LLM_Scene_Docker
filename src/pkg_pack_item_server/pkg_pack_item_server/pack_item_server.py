import rclpy
from rclpy.node import Node
from llm_interfaces.srv import SceneInterpretation

from pkg_pack_item_server.SelectedItemsToPack import SelectedItems

class PackItemsService(Node):

    def __init__(self):
        super().__init__('pack_items_service')
        self.srv = self.create_service(SceneInterpretation, 'scene_interpretation', self.pack_items_callback)
        self.get_logger().info('Service server is ready.')

    def pack_items_callback(self, request,response):
        self.get_logger().info('bin im Callback')
        
        # Standard list to pack 
        #response.objects_to_pick = SelectedItems.getStandardConfig()

        response.objects_to_pick = SelectedItems.getPackList()
        
        # Custom list to pack
        # response.objects_to_pick = SelectedItems.getPackList()
            
        self.get_logger().info('Service has been called.') 

        return response

    
    def stop_spin(self):
        rclpy.shutdown()
        self.get_logger().info('Node has been stopped.')
    
    def spinNode(self):

        self.get_logger().info('Bin in der Hilfsmethode!')
        rclpy.spin_once(self, timeout_sec=15.0)

        self.get_logger().info('FERTIG mit Hilfsmethode!')
    


def main(args=None):
    rclpy.init(args=args)
    node = PackItemsService()
    rclpy.spin(node)  

if __name__ == '__main__':
    main()
