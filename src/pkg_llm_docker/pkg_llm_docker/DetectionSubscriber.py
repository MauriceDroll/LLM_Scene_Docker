#import rclpy
#from rclpy.node import Node
from .shared import Node,  rclpy
from std_msgs.msg import String
from object_detector_tensorflow_interfaces.msg import Detections
from .Detection import Detection
from .MainLLM import MainLLM
#from .PreProcessing import PreProcessing


class DetectionSubscriber(Node):

    def __init__(self):
        super().__init__('my_subscriber')
        self.subscription = self.create_subscription(
            Detections,
            '/detection_node/detections',
            self.listener_callback,
            10)
        self.subscription
        self.detections = []# prevent unused variable warning
        self.get_logger().info('Subscriber wurde initalisiert')

    def listener_callback(self, msg):
        #self.get_logger().info('I heard: "%s"' % msg.detections)
        self.get_logger().info('Die Nachricht wurde empfangen')

        #detections = []
        for detection in msg.detections:
            entry = Detection(detection.class_id, detection.class_name, detection.probability, detection.center, detection.bounding_box)
            self.detections.append(entry)
 
        #prompt = PreProcessing.formatPrompt(detections, "")
        #MainLLM.startLLM(prompt)

        pass    

        

        
def main(args=None):
    rclpy.init(args=args)

    my_subscriber = DetectionSubscriber()

    rclpy.spin(my_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    my_subscriber.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()