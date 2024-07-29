import rclpy
from rclpy.node import Node
from llm_interfaces.srv import SceneInterpretation

from SelectedItemsToPack import SelectedItems

class PackItemsService(Node):

    def __init__(self):
        super().__init__('pack_items_service')
        self.srv = self.create_service(SceneInterpretation, 'scene_interpretation', self.pack_items_callback)
        self.get_logger().info('Service server is ready.')

    def pack_items_callback(self, request, response):
        
        # Standard list to pack 
        response.objects_to_pick = SelectedItems.getStandardConfig()
        # response.objects_to_pick = ['Box_Gluehlampe', 'Box_Wischblatt','Keilriemen_gross', 'Box_Bremsbacke', 'Keilriemen_klein', 'Tuete']
        
        # Custom list to pack
        # response.objects_to_pick = SelectedItems.getPackList()

        return response

def main(args=None):
    rclpy.init(args=args)
    node = PackItemsService()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
