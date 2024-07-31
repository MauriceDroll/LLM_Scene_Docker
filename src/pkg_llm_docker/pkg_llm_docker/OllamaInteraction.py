import ollama
from ollama_python.endpoints import GenerateAPI
from ollama_python.endpoints import EmbeddingAPI




class OllamaInteraction:

    def getObjectFromScene(model, role, prompt):
        return ollama.chat(model=model, messages=[
                {
                    'role': role,
                    'content': prompt,
                    'options': {"seed": 123},
                    "context": [],
                },
        ])
        
    def getGeneratedObjectFromScene(prompt):
        response = ollama.generate(model='mistral-nemo', prompt=prompt)
        print("RESPONSE", response["response"])
        return response["response"]
    
    def getOLLAMAEndpoint(prompt):
        api = GenerateAPI(base_url="http://127.0.0.1:11434", model="mistral-nemo")
        result = api.get_embedding(prompt=prompt, options=dict(seed=10))
        print("Result:", result)    