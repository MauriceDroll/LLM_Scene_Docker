import rclpy
from rclpy.node import Node
from llm_interfaces.srv import SceneInterpreation

class PackItemsService(Node):

    def __init__(self):
        super().__init__('pack_items_service')
        self.srv = self.create_service(SceneInterpreation, 'scene_interpretation', self.pack_items_callback)
        self.get_logger().info('Service server is ready.')

    def pack_items_callback(self, request, response):

        response.objects_to_pick = ['Box_Gluehlampe', 'Box_Wischblatt','Keilriemen_gross', 'Box_Bremsbacke', 'Keilriemen_klein', 'Tuete']
        return response

def main(args=None):
    rclpy.init(args=args)
    node = PackItemsService()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
