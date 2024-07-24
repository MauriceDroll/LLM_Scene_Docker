from MainLLM import AnswerFormat
#import roslib
#roslib.load_manifest('pkg_website_llm')
#from pkg_website_llm.UserInput import UserInput
#import fakeOdtf
from rclpy.node import Node
import ast

class PreProcessing(Node):
    
    
    def __init__(self):
        pass
    # Abfrage 
    def formatPrompt(self,sceneDescription,userInput):
        #prompt = f'Es liegt die folgende Szene vor: Wir haben eine Box mit Gegenständen darin: 1. {sceneDescription[0].class_name} mit der Eigenschaft x= {sceneDescription[0].center.x} y={sceneDescription[0].center.y} z= {sceneDescription[0].center.z}  2. Keilriemen_gross mit der Eigenschaft x=629.5, y=405.5, z=0.0 3. Box_Messwertgeber mit der Eigenschaft x=800.0, y=524.0, z=0.0. Wo befindet sich der das Wischblatt?: {AnswerFormat.schema_json()} :\n'
        prompt = 'Es folgt eine Scenenbeschreibung.'
        
        #print("FAKEODTF", fakeOdtf.data)
        classname = ["Box_Wischblatt", "Keilriemen_gross", "Box_Messwertgeber"]
        center_x = [543.5, 629.5, 800.0]
        center_y = [608.5, 405.5, 524.0]
        center_z=  [0.0, 0.0, 0.0]
        
        #sceneDescription = fakeOdtf.detection_string
        #sceneDescription =  ast.literal_eval(fakeOdtf.data)
        #for i in range(0, len(sceneDescription)):
        for i in range(0,3):
            #self.get_logger().info(sceneDescription[i].class_name)
            prompt += f'{i+1}. {classname[i]} mit der Eigenschaft x= {center_x[i]} y={center_y[i]} z= {center_z[i]}'

            #prompt += f'{i+1}. {sceneDescription[i].class_name} mit der Eigenschaft x= {sceneDescription[i].center.x} y={sceneDescription[i].center.y} z= {sceneDescription[i].center.z}'

        #userInput = UserInput.getUserInput()
        print("Der ausgelesene User Input ist: ", userInput)
        if userInput !="":
            #prompt += f'{userInput}: {AnswerFormat.schema_json()} :\n'
            prompt += f'{userInput}: "Return the name and position in a short json object":\n'
        else:
            prompt += f'Wo befindet sich die Box mit dem Wischblatt?: {AnswerFormat.schema_json()} :\n'
        
        
        print("----")
        print("prompt",prompt)
        print("----")
        return prompt
    
    # Strings appenden
    # Schleife über die detections und dann jeweils eine Zeile basteln
    # dann die Zeilen zusammenfügen
    # JSON Bedingung am Ende anhängen
    # an LLM_Main schicken
    # Dort LLM laufen lassen