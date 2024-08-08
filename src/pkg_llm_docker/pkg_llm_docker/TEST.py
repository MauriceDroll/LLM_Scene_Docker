
import yaml
import os


        #yaml_data = open('./material_master.yaml', 'r')
yaml_data = open('material_master.yaml', 'r')
        

        
        # YAML-Daten laden
data = yaml.safe_load(yaml_data)
        
        # Array 
object_mass,length_mass,width_mass,height_mass = []
        
        
class_name = ["Box_Wischblatt", "Keilriemen_gross", "Box_Messwertgeber", "Keilriemen_klein"]
        # for each object in the scene description
for object in class_name:
    index_object = data["Label ODTF"].index(object)

    object_mass = data["Gewicht [kg]"][index_object]
    length_mass = data["Länge [mm]"][index_object]
    width_mass = data["Höhe [mm]"][index_object]
    height_mass = data["Gewicht [kg]"][index_object]
            
    object_mass.append(object_mass)
    length_mass.append(length_mass)
    width_mass.append(width_mass)
    object_mass.append(height_mass)

print(object_mass)
print(length_mass)
print(width_mass)
print(height_mass)
        
        #return object_mass,length_mass,width_mass,height_mass