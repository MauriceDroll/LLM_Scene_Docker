from MainLLM import AnswerFormat

class PreProcessing:

    def formatPrompt(sceneDescription):
        #prompt = f'Es liegt die folgende Szene vor: Wir haben eine Box mit Gegenständen darin: 1. {sceneDescription[0].class_name} mit der Eigenschaft x= {sceneDescription[0].center.x} y={sceneDescription[0].center.y} z= {sceneDescription[0].center.z}  2. Keilriemen_gross mit der Eigenschaft x=629.5, y=405.5, z=0.0 3. Box_Messwertgeber mit der Eigenschaft x=800.0, y=524.0, z=0.0. Wo befindet sich der das Wischblatt?: {AnswerFormat.schema_json()} :\n'
        prompt = 'Es folgt eine Scenenbeschreibung.'
        for i in range(0, len(sceneDescription)):
            prompt += f'{i+1}. {sceneDescription[i].class_name} mit der Eigenschaft x= {sceneDescription[i].center.x} y={sceneDescription[i].center.y} z= {sceneDescription[i].center.z}'
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