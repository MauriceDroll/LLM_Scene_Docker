#response = ollama.chat(model='mistral', messages=[
#  {
#    'role': 'user',
#    'content': 'We have the following scene: We have a box with items in it:1. Box_Wischblatt and center=geometry_msgs.msg.Point(x=543.5, y=608.5, z=0.0) and bounding_box=sensor_msgs.msg.RegionOfInterest(x_offset=321, y_offset=480, height=257, width=4450 2. Keilriemen_gross and center=geometry_msgs.msg.Point(x=629.5, y=405.5, z=0.0) and sensor_msgs.msg.RegionOfInterest(x_offset=336, y_offset=332, height=1473. Box_Messwertgeber and center=geometry_msgs.msg.Point(x=800.0, y=524.0, z=0.0) and bounding_box=sensor_msgs.msg.RegionOfInterest(x_offset=737, y_offset=465, height=118, width=126. What is the biggest item and where is it?',
#  },
#])

#response_much_info = ollama.chat(model='mistral', messages=[
#  {
#    'role': 'user',
#    'content': 'Es liegt die folgende Szene vor: Wir haben eine Box mit Gegenständen darin:1. Box_Wischblatt mit der Eigenschaft x=543.5, y=608.5, z=0.0 und bounding_box=sensor_msgs.msg.RegionOfInterest(x_offset=321, y_offset=480, height=257, width=4450 2. Keilriemen_gross mit der Eigenschaft x=629.5, y=405.5, z=0.0 und der Eigenschaft sensor_msgs.msg.RegionOfInterest(x_offset=336, y_offset=332, height=147 3. Box_Messwertgeber mit der Eigenschaft x=800.0, y=524.0, z=0.0 und der Eigenschaft bounding_box=sensor_msgs.msg.RegionOfInterest(x_offset=737, y_offset=465, height=118, width=126. Wo befindet sich der größte Gegenstand bitte gebe seine entsprechenden x und y Koordinaten an.',
#  },
#])

#response_JSON= ollama.chat(model='mistral', messages=[
#  {
#    'role': 'user',
#    'content': 'Es liegt die folgende Szene vor: Wir haben eine Box mit Gegenständen darin:1. Box_Wischblatt mit der Eigenschaft x=543.5, y=608.5, z=0.0 2. Keilriemen_gross mit der Eigenschaft x=629.5, y=405.5, z=0.0 3. Box_Messwertgeber mit der Eigenschaft x=800.0, y=524.0, z=0.0. Wo befindet sich der größte Gegenstand? Antworte bitte im JSON',
#  },
#])


#response_JSON_Wischblatt= ollama.chat(model='mistral', messages=[
#  {
#    'role': 'user',
#    'content': 'Es liegt die folgende Szene vor: Wir haben eine Box mit Gegenständen darin:1. Box_Wischblatt mit der Eigenschaft x=543.5, y=608.5, z=0.0 2. Keilriemen_gross mit der Eigenschaft x=629.5, y=405.5, z=0.0 3. Box_Messwertgeber mit der Eigenschaft x=800.0, y=524.0, z=0.0. Wo befindet sich der das Wischblatt? Antworte bitte im JSON',
#  },
#])





# response_JSON_Wischblatt_Assistant= ollama.chat(model='mistral', messages=[
#   {
#     'role': 'assistant',
#     'content': '[INST] Es liegt die folgende Szene vor: Wir haben eine Box mit Gegenständen darin:1. Box_Wischblatt mit der Eigenschaft x=543.5, y=608.5, z=0.0 2. Keilriemen_gross mit der Eigenschaft x=629.5, y=405.5, z=0.0 3. Box_Messwertgeber mit der Eigenschaft x=800.0, y=524.0, z=0.0. Wo befindet sich der das Wischblatt? [/INST]  ```json ',
#   },
# ])


#response_YAML= ollama.chat(model='mistral', messages=[
#  {
 #   'role': 'user',
#    'content': 'Es liegt die folgende Szene vor: Wir haben eine Box mit Gegenständen darin:1. Box_Wischblatt mit der Eigenschaft x=543.5, y=608.5, z=0.0 2. Keilriemen_gross mit der Eigenschaft x=629.5, y=405.5, z=0.0 3. Box_Messwertgeber mit der Eigenschaft x=800.0, y=524.0, z=0.0. Wo befindet sich der größte Gegenstand? Antworte bitte im YAML',
#  },
#])

#dict_response = ast.literal_eval(response_JSON_Wischblatt_Assistant['message']['content'])




# # unused prints
# print(response_JSON_Wischblatt_Assistant['message'])

# print("---")
# print(response_JSON_Wischblatt_Assistant['message']['content'])
# print("---")