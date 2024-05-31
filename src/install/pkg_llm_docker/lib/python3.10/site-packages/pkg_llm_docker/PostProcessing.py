# relevant für die String to Dict Konvertierung
import ast
import json

class PostProcessing:

    def formatToDict(content):
        print("content",content)
        try:
            data_dict = json.loads(content["message"]["content"])
            print("data_dict",data_dict)
            return data_dict
            #return ast.literal_eval(content['message']['content'])
        except Exception as e:
            print("Conversion to dictionary failed")
            print("Fehler:",e)
            return "No content found"
    
    def getWantedObject(dict_response):
        return dict_response['answer']['object']
    
    def getWantedPositon(dict_response):
        return dict_response['answer']['Position']
    
    # makes sense for handeling timeouts
    def getUsedTime(start, end):
        return end-start

