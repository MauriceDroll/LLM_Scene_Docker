import ollama


class OllamaInteraction:

    def getObjectFromScene(model, role, prompt):
        return ollama.chat(model=model, messages=[
                {
                    'role': role,
                    'content': prompt,
                },
        ])
    
    