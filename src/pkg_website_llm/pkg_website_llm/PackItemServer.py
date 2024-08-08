import rclpy
import time
from rclpy.node import Node
from llm_interfaces.srv import SceneInterpretation
from .SelectedItemsToPack import SelectedItems
from .UserInput import UserInput

class PackItemsService(Node):

    def __init__(self):
        super().__init__('pack_items_service')
        self.srv = self.create_service(SceneInterpretation, 'scene_interpretation', self.pack_items_callback)
        self.get_logger().info('Service server is ready.')

    def pack_items_callback(self, request, response):
        self.get_logger().info('Packlist:'.format(SelectedItems.getPackList()))
        
        while (True):
            if (SelectedItems.getPackList() != [] and UserInput.getApproval() == True):
                self.get_logger().info('Data available yet.')
                # response.objects_to_pick = SelectedItems.getPackList()
                # response.objects_to_pick = ['Box_Gluehlampe', 'Box_Wischblatt','Keilriemen_gross', 'Box_Bremsbacke', 'Keilriemen_klein','Box_Messwertgeber']
                response.objects_to_pick = ['Box_Wischblatt']
                
                self.get_logger().info("RESPONSE objects_to_pick: {}".format(response.objects_to_pick))
                # response.objects_to_pick = SelectedItems.getStandardConfig()                
                
                self.get_logger().info('Packlist:'.format(SelectedItems.getPackList()))
                #response.objects_to_pick = ['Box_Gluehlampe', 'Box_Wischblatt','Keilriemen_gross', 'Box_Bremsbacke', 'Keilriemen_klein', 'Tuete']
                return response
            else:
                time.sleep(5)
                self.get_logger().info('Data not available yet. Waiting for data...')
                self.get_logger().info('Packlist:'.format(SelectedItems.getPackList()))
                self.get_logger().info('Approval USer'.format(UserInput.getApproval()))


                
    def stop_spin(self):
        rclpy.shutdown()
        self.get_logger().info('Node has been stopped.')
    
    def spinNode(self):

        self.get_logger().info('Bin in der Hilfsmethode!')
        #rclpy.spin_once(self, timeout_sec=15.0)
        rclpy.spin(self)
        self.get_logger().info('FERTIG mit Hilfsmethode!')
    




def main(args=None):
    rclpy.init(args=args)
    node = PackItemsService()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()