import rclpy
from rclpy.node import Node
from llm_interfaces.srv import SceneInterpretation

class PackItemsService(Node):

    def __init__(self):
        super().__init__('pack_items_service')
        self.srv = self.create_service(SceneInterpretation, 'scene_interpretation', self.pack_items_callback)
        self.get_logger().info('Service server is ready.')

    def pack_items_callback(self, request, response):
        #open and read the file after the appending:
        file_path = "../../Detections_Class_Name.txt"
        #f = open(file_path, "r")

        list= []
        with open(file_path, 'r') as f:
            for line in f:
                print(line.strip()) 
                list.append(str(line.strip()))

        response.objects_to_pick = list
        #response.objects_to_pick = ['Box_Gluehlampe', 'Box_Wischblatt','Keilriemen_gross', 'Box_Bremsbacke', 'Keilriemen_klein', 'Tuete']
        return response

def main(args=None):
    rclpy.init(args=args)
    node = PackItemsService()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
