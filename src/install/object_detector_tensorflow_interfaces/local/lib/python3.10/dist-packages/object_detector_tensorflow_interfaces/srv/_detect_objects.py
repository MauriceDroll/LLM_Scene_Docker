# generated from rosidl_generator_py/resource/_idl.py.em
# with input from object_detector_tensorflow_interfaces:srv/DetectObjects.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectObjects_Request(type):
    """Metaclass of message 'DetectObjects_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('object_detector_tensorflow_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'object_detector_tensorflow_interfaces.srv.DetectObjects_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_objects__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_objects__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_objects__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_objects__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_objects__request

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

            from sensor_msgs.msg import RegionOfInterest
            if RegionOfInterest.__class__._TYPE_SUPPORT is None:
                RegionOfInterest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectObjects_Request(metaclass=Metaclass_DetectObjects_Request):
    """Message class 'DetectObjects_Request'."""

    __slots__ = [
        '_image',
        '_roi',
    ]

    _fields_and_field_types = {
        'image': 'sensor_msgs/Image',
        'roi': 'sensor_msgs/RegionOfInterest',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'RegionOfInterest'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())
        from sensor_msgs.msg import RegionOfInterest
        self.roi = kwargs.get('roi', RegionOfInterest())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.image != other.image:
            return False
        if self.roi != other.roi:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image' field must be a sub message of type 'Image'"
        self._image = value

    @builtins.property
    def roi(self):
        """Message field 'roi'."""
        return self._roi

    @roi.setter
    def roi(self, value):
        if __debug__:
            from sensor_msgs.msg import RegionOfInterest
            assert \
                isinstance(value, RegionOfInterest), \
                "The 'roi' field must be a sub message of type 'RegionOfInterest'"
        self._roi = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DetectObjects_Response(type):
    """Metaclass of message 'DetectObjects_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('object_detector_tensorflow_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'object_detector_tensorflow_interfaces.srv.DetectObjects_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_objects__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_objects__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_objects__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_objects__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_objects__response

            from object_detector_tensorflow_interfaces.msg import Detections
            if Detections.__class__._TYPE_SUPPORT is None:
                Detections.__class__.__import_type_support__()

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectObjects_Response(metaclass=Metaclass_DetectObjects_Response):
    """Message class 'DetectObjects_Response'."""

    __slots__ = [
        '_detections',
        '_result_image',
    ]

    _fields_and_field_types = {
        'detections': 'object_detector_tensorflow_interfaces/Detections',
        'result_image': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['object_detector_tensorflow_interfaces', 'msg'], 'Detections'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from object_detector_tensorflow_interfaces.msg import Detections
        self.detections = kwargs.get('detections', Detections())
        from sensor_msgs.msg import Image
        self.result_image = kwargs.get('result_image', Image())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.detections != other.detections:
            return False
        if self.result_image != other.result_image:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def detections(self):
        """Message field 'detections'."""
        return self._detections

    @detections.setter
    def detections(self, value):
        if __debug__:
            from object_detector_tensorflow_interfaces.msg import Detections
            assert \
                isinstance(value, Detections), \
                "The 'detections' field must be a sub message of type 'Detections'"
        self._detections = value

    @builtins.property
    def result_image(self):
        """Message field 'result_image'."""
        return self._result_image

    @result_image.setter
    def result_image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'result_image' field must be a sub message of type 'Image'"
        self._result_image = value


class Metaclass_DetectObjects(type):
    """Metaclass of service 'DetectObjects'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('object_detector_tensorflow_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'object_detector_tensorflow_interfaces.srv.DetectObjects')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__detect_objects

            from object_detector_tensorflow_interfaces.srv import _detect_objects
            if _detect_objects.Metaclass_DetectObjects_Request._TYPE_SUPPORT is None:
                _detect_objects.Metaclass_DetectObjects_Request.__import_type_support__()
            if _detect_objects.Metaclass_DetectObjects_Response._TYPE_SUPPORT is None:
                _detect_objects.Metaclass_DetectObjects_Response.__import_type_support__()


class DetectObjects(metaclass=Metaclass_DetectObjects):
    from object_detector_tensorflow_interfaces.srv._detect_objects import DetectObjects_Request as Request
    from object_detector_tensorflow_interfaces.srv._detect_objects import DetectObjects_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
