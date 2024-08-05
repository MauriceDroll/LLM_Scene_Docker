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
   
  def startLLM(prompt,user_input):


    start = time.time()
    
    if "BEFEHL" in user_input:
      response_JSON_Wischblatt_Assistant= OllamaInteraction.getGeneratedObjectFromScene(prompt)
    else :
      response_JSON_Wischblatt_Assistant= OllamaInteraction.getObjectFromScene('user',prompt)
    
    if "BEFEHL" in user_input:
      dict_response = PostProcessing.formatToDict(response_JSON_Wischblatt_Assistant)
    else:   
      dict_response = PostProcessing.formatToString(response_JSON_Wischblatt_Assistant)

    while True:
      try:
        #response_JSON_Wischblatt_Assistant= OllamaInteraction.getObjectFromScene('mistral-nemo','assistant', prompt)
        #response_JSON_Wischblatt_Assistant= OllamaInteraction.getGeneratedObjectFromScene(prompt)
        
        #print(response_JSON_Wischblatt_Assistant)
        print("-----")
        #dict_response = response_JSON_Wischblatt_Assistant
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


    print("----")

    return dict_response
    
    
  def createAnswerForUser(objects):
    for i in objects:
      llm_input="Please formulate one sentence that the following objects are packed into a shipping box:" + str(i) + ""

    return OllamaInteraction.getObjectFromScene('mistral','assistant', llm_input)
      

        













