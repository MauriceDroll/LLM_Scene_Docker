import os
from cv_bridge import CvBridge
import cv2

class WebsiteFeedbackData:
    # Data declaration
    cylinder_ids = ""
    package = ""
    grasp_pose = ""
    place_pose = ""
    file_path_image = "/static/images/PackPlan.png"
    
    # Getter and setter methods: Cylinder IDs
    def getCylinderIds():
        return WebsiteFeedbackData.cylinder_ids
    
    def setCylinderIds(cylinder_ids):
        WebsiteFeedbackData.cylinder_ids = cylinder_ids
        
        
    # Getter and setter methods: Package
    def getPackage():
        return WebsiteFeedbackData.package
    
    def setPackage(package): 
        WebsiteFeedbackData.package = package
        
    
    # Getter and setter methods: Grasp Pose
    def getGraspPose():
        return WebsiteFeedbackData.grasp_pose
    
    def setGraspPose(grasp_pose):
        WebsiteFeedbackData.grasp_pose = grasp_pose
        
        
    # Getter and setter methods: Place Pose
    def getPlacePose():
        return WebsiteFeedbackData.place_pose
    
    def setPlacePose(place_pose):
        WebsiteFeedbackData.place_pose = place_pose
        
    # Get and Set the image 
    def getImagePath():
        if os.path.isfile(WebsiteFeedbackData.file_path_image):
            return WebsiteFeedbackData.file_path_image
        else:
            return "/static/images/Platzhalter.png"
        
    def setImagePath(image_array):
        bridge = CvBridge()
        picture = bridge.imgmsg_to_cv2(image_array, "passthrough")  # Konvertiere die ROS 2 Image-Nachricht zurück in ein OpenCV-Bild
        cv2.imwrite(WebsiteFeedbackData.file_path_image, picture)
        
