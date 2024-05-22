class Detection:

    def __init__(self,class_id, class_name, probability, center, bounding_box):
        self.class_id = class_id
        self.class_name = class_name
        self.probability = probability
        self.center = center
        self.bounding_box = bounding_box
        pass

