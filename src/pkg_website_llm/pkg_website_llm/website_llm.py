from flask import Flask, render_template, request, jsonify


import rclpy
from rclpy.node import Node

import os

# Assuming this script is located in ros_ws/src/pkg_website_llm/pkg_website_llm/website_llm.py
# Get the absolute path to the directory containing this script
#current_dir = os.path.abspath(os.path.dirname(__file__))

# Set the templates folder to the 'templates' directory relative to the current directory
#template_dir = os.path.join(current_dir, 'templates')

# Create the Flask app with the correct template folder
app = Flask(__name__, template_folder='/home/robot/ros_ws/src/pkg_website_llm/pkg_website_llm/templates')
#app = Flask(__name__)

@app.route('/')
def index():
    #   print(template_dir)
    return render_template('index.html')

@app.route('/button_click', methods=['POST'])
def button_click():
    print("Anfrage: ", request.form['request'])
    return jsonify({"message": "Request was sent to LLM!"})

def main():
    print('Hi from LLM_Website. It is starting up.')

    app.run(debug=True, host='127.0.0.1', port=8080)

   

if __name__ == '__main__':
    main()
