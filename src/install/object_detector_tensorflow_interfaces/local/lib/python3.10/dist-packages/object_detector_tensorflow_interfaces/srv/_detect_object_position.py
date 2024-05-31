# generated from rosidl_generator_py/resource/_idl.py.em
# with input from object_detector_tensorflow_interfaces:srv/DetectObjectPosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectObjectPosition_Request(type):
    """Metaclass of message 'DetectObjectPosition_Request'."""

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
                'object_detector_tensorflow_interfaces.srv.DetectObjectPosition_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_object_position__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_object_position__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_object_position__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_object_position__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_object_position__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectObjectPosition_Request(metaclass=Metaclass_DetectObjectPosition_Request):
    """Message class 'DetectObjectPosition_Request'."""

    __slots__ = [
        '_class_name',
        '_base_frame',
        '_camera_type',
    ]

    _fields_and_field_types = {
        'class_name': 'string',
        'base_frame': 'string',
        'camera_type': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.class_name = kwargs.get('class_name', str())
        self.base_frame = kwargs.get('base_frame', str())
        self.camera_type = kwargs.get('camera_type', str())

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
        if self.class_name != other.class_name:
            return False
        if self.base_frame != other.base_frame:
            return False
        if self.camera_type != other.camera_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def class_name(self):
        """Message field 'class_name'."""
        return self._class_name

    @class_name.setter
    def class_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'class_name' field must be of type 'str'"
        self._class_name = value

    @builtins.property
    def base_frame(self):
        """Message field 'base_frame'."""
        return self._base_frame

    @base_frame.setter
    def base_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'base_frame' field must be of type 'str'"
        self._base_frame = value

    @builtins.property
    def camera_type(self):
        """Message field 'camera_type'."""
        return self._camera_type

    @camera_type.setter
    def camera_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'camera_type' field must be of type 'str'"
        self._camera_type = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_DetectObjectPosition_Response(type):
    """Metaclass of message 'DetectObjectPosition_Response'."""

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
                'object_detector_tensorflow_interfaces.srv.DetectObjectPosition_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_object_position__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_object_position__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_object_position__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_object_position__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_object_position__response

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectObjectPosition_Response(metaclass=Metaclass_DetectObjectPosition_Response):
    """Message class 'DetectObjectPosition_Response'."""

    __slots__ = [
        '_point',
        '_probability',
        '_class_name',
    ]

    _fields_and_field_types = {
        'point': 'geometry_msgs/Point',
        'probability': 'float',
        'class_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.point = kwargs.get('point', Point())
        self.probability = kwargs.get('probability', float())
        self.class_name = kwargs.get('class_name', str())

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
        if self.point != other.point:
            return False
        if self.probability != other.probability:
            return False
        if self.class_name != other.class_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def point(self):
        """Message field 'point'."""
        return self._point

    @point.setter
    def point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'point' field must be a sub message of type 'Point'"
        self._point = value

    @builtins.property
    def probability(self):
        """Message field 'probability'."""
        return self._probability

    @probability.setter
    def probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'probability' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'probability' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._probability = value

    @builtins.property
    def class_name(self):
        """Message field 'class_name'."""
        return self._class_name

    @class_name.setter
    def class_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'class_name' field must be of type 'str'"
        self._class_name = value


class Metaclass_DetectObjectPosition(type):
    """Metaclass of service 'DetectObjectPosition'."""

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
                'object_detector_tensorflow_interfaces.srv.DetectObjectPosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__detect_object_position

            from object_detector_tensorflow_interfaces.srv import _detect_object_position
            if _detect_object_position.Metaclass_DetectObjectPosition_Request._TYPE_SUPPORT is None:
                _detect_object_position.Metaclass_DetectObjectPosition_Request.__import_type_support__()
            if _detect_object_position.Metaclass_DetectObjectPosition_Response._TYPE_SUPPORT is None:
                _detect_object_position.Metaclass_DetectObjectPosition_Response.__import_type_support__()


class DetectObjectPosition(metaclass=Metaclass_DetectObjectPosition):
    from object_detector_tensorflow_interfaces.srv._detect_object_position import DetectObjectPosition_Request as Request
    from object_detector_tensorflow_interfaces.srv._detect_object_position import DetectObjectPosition_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
