import ollama
import time
import re
from PostProcessing import PostProcessing
from OllamaInteraction import OllamaInteraction
# relevant für die String to Dict Konvertierung
import ast

from pydantic import BaseModel
from lmformatenforcer import JsonSchemaParser



class AnswerFormat(BaseModel):
  object: str
  Position: str

class MainLLM:
   
  #def __init__(self,sceneDescriptionUnsorted):
  #  self.sceneDescriptionUnsorted = sceneDescriptionUnsorted
  #  pass
  
  def combinePrompt():
    # get User Question -> Flask (parameter)
    # get Scene Description
    # combine both
    
    # call the LLM
    
    # return result
    pass
   
  def startLLM(prompt):
    #prompt = f'Es liegt die folgende Szene vor: Wir haben eine Box mit Gegenständen darin: 1. Box_Wischblatt mit der Eigenschaft x=543.5, y=608.5, z=0.0 2. Keilriemen_gross mit der Eigenschaft x=629.5, y=405.5, z=0.0 3. Box_Messwertgeber mit der Eigenschaft x=800.0, y=524.0, z=0.0. Wo befindet sich der das Wischblatt?: {AnswerFormat.schema_json()} :\n'

      # Chat with Mistral by including the prompt
      # response_JSON_Wischblatt_Assistant= ollama.chat(model='mistral', messages=[
      #     {
      #       'role': 'assistant',
      #       'content': prompt,
      #     },
      #   ])

    start = time.time()

    while True:
      try:
        response_JSON_Wischblatt_Assistant= OllamaInteraction.getObjectFromScene('mistral','assistant', prompt)
        print(response_JSON_Wischblatt_Assistant)
        print("-----")
        dict_response = PostProcessing.formatToDict(response_JSON_Wischblatt_Assistant)
        print("-----")
        print("response_JSON_Wischblatt_Assistant", response_JSON_Wischblatt_Assistant)
        print("----")
        print("dict_response", dict_response)
        print("----")
        break
      except:
        print("Error in the Ollama Interaction, Retry...")

      break

    end = time.time()

    print("Dauer", PostProcessing.getUsedTime(start,end))
    print("-Ab hier kommt die Response-")

    print("----")
    print("dict_response_object", PostProcessing.getWantedObject(dict_response))

    print("dict_response_object_pos", PostProcessing.getWantedPositon(dict_response)) 

    return dict_response
    
    
  def createAnswerForUser(objects):
    for i in objects:
      llm_input="Please formulate a sentence that the following objects are packed into a shipping box:" + str(i) + ""

    return OllamaInteraction.getObjectFromScene('mistral','assistant', llm_input)
      

        













