from flask import Flask, render_template, request, jsonify


import rclpy
from rclpy.node import Node
from UserInput import UserInput
from WebsiteFeedbackData import WebsiteFeedbackData
from UserInputServiceSender import UserInputService 
import UserInputServiceSender
from ActionClientToPreProcessing import LLMActionClient

import os


# Assuming this script is located in ros_ws/src/pkg_website_llm/pkg_website_llm/website_llm.py
# Get the absolute path to the directory containing this script
#current_dir = os.path.abspath(os.path.dirname(__file__))

# Set the templates folder to the 'templates' directory relative to the current directory
#template_dir = os.path.join(current_dir, 'templates')

# Create the Flask app with the correct template folder
app = Flask(__name__, template_folder='/home/robot/ros_ws/src/pkg_website_llm/pkg_website_llm/templates', static_url_path='/static')


@app.route('/')
def index():
    return render_template('index.html')

@app.route('/button_click', methods=['POST'])
def button_click():
    
    data = request.json
    user_input = data.get('user_input', '')
    print(f"Anfrage (von webseite_llm): {user_input}")
    
    UserInput.setUserInput(user_input)
    
    if not rclpy.ok():
        rclpy.init(args=None)
    
    # This is to transport the user input to the behavior tree
    
    # if hasattr(None,'server_website_only'):
    #     server_website_only.shutdown_node()
    # else:
    #     #rclpy.init(args=None)
    #     server_website_only = UserInputService()
    #     rclpy.spin(server_website_only)
    
    # This is to call the LLM Action server directly
    
    if hasattr(None,'server'):
        server.shutdown_node()
    else:
        server = LLMActionClient()
        future = server.send_goal(user_input)
        #print("Datenobjekt Typ Future", type(future))


        rclpy.spin(server)

        result = server.get_result()
        print("Ergebnis:", result)
        

    return jsonify({"message": "Button was clicked!", "received": result})

@app.route('/button_approve', methods=['POST'])
def button_approve():

    UserInput.setApproval(True)
    print("Meinung des Users:", UserInput.getApproval())


    return jsonify({"message": "Approved by user!", "received": "Approval"})

@app.route('/button_disapprove', methods=['POST'])
def button_disapprove():

    UserInput.setApproval(False)
    print("Meinung des Users:", UserInput.getApproval())

    return jsonify({"message": "Disapproved by user", "received": "Disapproval"})

@app.route('/get_data')
def get_data():
    # data = {
    #     'package_content': 'New Package Sequence',
    #     'cylinder_ids': 'New Cylinder ID',
    #     'grasp_pose': 'New Grasp Pose',
    #     'place_pose': 'New Place Pose'
    # }
    WebsiteFeedbackData.setPackage("Box_Wischblatt, Keilriemen_groß, Keilriemen_klein")
    WebsiteFeedbackData.setCylinderIds("1 2")
    WebsiteFeedbackData.setGraspPose("Grasp Pose")
    WebsiteFeedbackData.setPlacePose("Place Pose")


    
    data = {
        'package_content': WebsiteFeedbackData.getPackage(),
        'cylinder_ids': WebsiteFeedbackData.getCylinderIds(),
        'grasp_pose': WebsiteFeedbackData.getGraspPose(),
        'place_pose': WebsiteFeedbackData.getPlacePose(),
    }
    print("DATEN WURDEN Abgerufen")
    print(data)
    return jsonify(data)


def main():
    print('Hi from LLM_Website. It is starting up.')

    app.run(debug=True, host='127.0.0.1', port=8080)

   

if __name__ == '__main__':
    main()
