import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from object_detector_tensorflow_interfaces.msg import Detections
from Detection import Detection
from MainLLM import MainLLM


class DetectionSubscriber(Node):

    def __init__(self):
        super().__init__('my_subscriber')
        self.subscription = self.create_subscription(
            Detections,
            '/detection_node/detections',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.detections)
        print("Messsage kam an")

        detections = []
        for detection in msg.detections:
            entry = Detection(detection.class_id, detection.class_name, detection.probability, detection.center, detection.bounding_box)
            detections.append(entry)
        MainLLM(detections)
        MainLLM.startLLM()
        print("Habe fertig")
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