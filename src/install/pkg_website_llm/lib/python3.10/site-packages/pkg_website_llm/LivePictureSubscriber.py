import rclpy
from rclpy.node import Node

from std_msgs.msg import String
import threading


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            String,
            'KAMAERA TOPIC',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):       
        # save it to the hard drive -> Grundlage für die Webseite!
        pass

def main(args=None):
    rclpy.init(args=args)


    def start_node():
        minimal_subscriber = MinimalSubscriber()
        rclpy.spin(minimal_subscriber)
        minimal_subscriber.destroy_node()
        threading.Timer(10, start_node).start()
    
    # Initial start of the node
    start_node()  
        
    rclpy.shutdown()


if __name__ == '__main__':
    main()