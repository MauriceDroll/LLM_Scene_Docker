# relevant für die String to Dict Konvertierung
import ast

class PostProcessing:

    def formatToDict(content):
        return ast.literal_eval(content['message']['content'])
    
    def getWantedObject(dict_response):
        return dict_response['answer']['object']
    
    def getWantedPositon(dict_response):
        return dict_response['answer']['Position']
    
    # makes sense for handeling timeouts
    def getUsedTime(start, end):
        return end-start

