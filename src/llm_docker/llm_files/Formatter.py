
from pydantic import BaseModel
from lmformatenforcer import JsonSchemaParser
from lmformatenforcer.integrations.transformers import build_transformers_prefix_allowed_tokens_fn
from transformers import pipeline

class AnswerFormat(BaseModel):
    first_name: str
    last_name: str
    year_of_birth: int
    num_seasons_in_nba: int

# Create a transformers pipeline
hf_pipeline = pipeline('text-generation', model='TheBloke/Llama-2-7b-Chat-GPTQ', device_map='auto')
prompt = f'Here is information about Michael Jordan in the following json schema: {AnswerFormat.schema_json()} :\n'

# Create a character level parser and build a transformers prefix function from it
parser = JsonSchemaParser(AnswerFormat.schema())
prefix_function = build_transformers_prefix_allowed_tokens_fn(hf_pipeline.tokenizer, parser)

# Call the pipeline with the prefix function
output_dict = hf_pipeline(prompt, prefix_allowed_tokens_fn=prefix_function)

# Extract the results
result = output_dict[0]['generated_text'][len(prompt):]
print(result)
# {'first_name': 'Michael', 'last_name': 'Jordan', 'year_of_birth': 1963, 'num_seasons_in_nba': 15}