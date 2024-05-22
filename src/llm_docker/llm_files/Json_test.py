import ollama
import time
import re


from mistralai.client import MistralClient
from mistralai.models.chat_completion import ChatMessage



# client = MistralClient(api_key=api_key)

# messages = [
#     ChatMessage(role="user", content="What is the best French cheese? Return the product and produce location in JSON format")
# ]

# chat_response = client.chat(
#     model=model,
#     response_format={"type": "json_object"},
#     messages=messages,
# )

# """ response_JSON_Wischblatt= ollama.chat(model='mistral', messages=[
#   {
#     'role': 'user',
#     'content': '<s>[INST] What is the capital of Australia? [/INST] ',
#   },
# ]) """

messages = [
    ChatMessage(role="user", content="What is the best French cheese? Return the product and produce location in JSON format",response_format={"type": "json_object"})
]

chat_response = ollama.chat(
    model='mistral',
    messages= [messages],
)

print(chat_response.choices[0].message.content)
