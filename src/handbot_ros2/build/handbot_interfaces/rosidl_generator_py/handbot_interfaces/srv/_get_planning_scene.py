# generated from rosidl_generator_py/resource/_idl.py.em
# with input from handbot_interfaces:srv/GetPlanningScene.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'target_dimensions'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPlanningScene_Request(type):
    """Metaclass of message 'GetPlanningScene_Request'."""

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
            module = import_type_support('handbot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'handbot_interfaces.srv.GetPlanningScene_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_planning_scene__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_planning_scene__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_planning_scene__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_planning_scene__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_planning_scene__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPlanningScene_Request(metaclass=Metaclass_GetPlanningScene_Request):
    """Message class 'GetPlanningScene_Request'."""

    __slots__ = [
        '_target_shape',
        '_target_dimensions',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'target_shape': 'string',
        'target_dimensions': 'sequence<double>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_shape = kwargs.get('target_shape', str())
        self.target_dimensions = array.array('d', kwargs.get('target_dimensions', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.target_shape != other.target_shape:
            return False
        if self.target_dimensions != other.target_dimensions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_shape(self):
        """Message field 'target_shape'."""
        return self._target_shape

    @target_shape.setter
    def target_shape(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'target_shape' field must be of type 'str'"
        self._target_shape = value

    @builtins.property
    def target_dimensions(self):
        """Message field 'target_dimensions'."""
        return self._target_dimensions

    @target_dimensions.setter
    def target_dimensions(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'target_dimensions' array.array() must have the type code of 'd'"
                self._target_dimensions = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'target_dimensions' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._target_dimensions = array.array('d', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPlanningScene_Response(type):
    """Metaclass of message 'GetPlanningScene_Response'."""

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
            module = import_type_support('handbot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'handbot_interfaces.srv.GetPlanningScene_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_planning_scene__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_planning_scene__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_planning_scene__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_planning_scene__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_planning_scene__response

            from moveit_msgs.msg import PlanningSceneWorld
            if PlanningSceneWorld.__class__._TYPE_SUPPORT is None:
                PlanningSceneWorld.__class__.__import_type_support__()

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPlanningScene_Response(metaclass=Metaclass_GetPlanningScene_Response):
    """Message class 'GetPlanningScene_Response'."""

    __slots__ = [
        '_scene_world',
        '_full_cloud',
        '_rgb_image',
        '_target_object_id',
        '_support_surface_id',
        '_success',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'scene_world': 'moveit_msgs/PlanningSceneWorld',
        'full_cloud': 'sensor_msgs/PointCloud2',
        'rgb_image': 'sensor_msgs/Image',
        'target_object_id': 'string',
        'support_surface_id': 'string',
        'success': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'PlanningSceneWorld'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import PlanningSceneWorld
        self.scene_world = kwargs.get('scene_world', PlanningSceneWorld())
        from sensor_msgs.msg import PointCloud2
        self.full_cloud = kwargs.get('full_cloud', PointCloud2())
        from sensor_msgs.msg import Image
        self.rgb_image = kwargs.get('rgb_image', Image())
        self.target_object_id = kwargs.get('target_object_id', str())
        self.support_surface_id = kwargs.get('support_surface_id', str())
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.scene_world != other.scene_world:
            return False
        if self.full_cloud != other.full_cloud:
            return False
        if self.rgb_image != other.rgb_image:
            return False
        if self.target_object_id != other.target_object_id:
            return False
        if self.support_surface_id != other.support_surface_id:
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def scene_world(self):
        """Message field 'scene_world'."""
        return self._scene_world

    @scene_world.setter
    def scene_world(self, value):
        if self._check_fields:
            from moveit_msgs.msg import PlanningSceneWorld
            assert \
                isinstance(value, PlanningSceneWorld), \
                "The 'scene_world' field must be a sub message of type 'PlanningSceneWorld'"
        self._scene_world = value

    @builtins.property
    def full_cloud(self):
        """Message field 'full_cloud'."""
        return self._full_cloud

    @full_cloud.setter
    def full_cloud(self, value):
        if self._check_fields:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'full_cloud' field must be a sub message of type 'PointCloud2'"
        self._full_cloud = value

    @builtins.property
    def rgb_image(self):
        """Message field 'rgb_image'."""
        return self._rgb_image

    @rgb_image.setter
    def rgb_image(self, value):
        if self._check_fields:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'rgb_image' field must be a sub message of type 'Image'"
        self._rgb_image = value

    @builtins.property
    def target_object_id(self):
        """Message field 'target_object_id'."""
        return self._target_object_id

    @target_object_id.setter
    def target_object_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'target_object_id' field must be of type 'str'"
        self._target_object_id = value

    @builtins.property
    def support_surface_id(self):
        """Message field 'support_surface_id'."""
        return self._support_surface_id

    @support_surface_id.setter
    def support_surface_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'support_surface_id' field must be of type 'str'"
        self._support_surface_id = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPlanningScene_Event(type):
    """Metaclass of message 'GetPlanningScene_Event'."""

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
            module = import_type_support('handbot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'handbot_interfaces.srv.GetPlanningScene_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_planning_scene__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_planning_scene__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_planning_scene__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_planning_scene__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_planning_scene__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPlanningScene_Event(metaclass=Metaclass_GetPlanningScene_Event):
    """Message class 'GetPlanningScene_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<handbot_interfaces/GetPlanningScene_Request, 1>',
        'response': 'sequence<handbot_interfaces/GetPlanningScene_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['handbot_interfaces', 'srv'], 'GetPlanningScene_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['handbot_interfaces', 'srv'], 'GetPlanningScene_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from handbot_interfaces.srv import GetPlanningScene_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, GetPlanningScene_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'GetPlanningScene_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from handbot_interfaces.srv import GetPlanningScene_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, GetPlanningScene_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'GetPlanningScene_Response'"
        self._response = value


class Metaclass_GetPlanningScene(type):
    """Metaclass of service 'GetPlanningScene'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('handbot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'handbot_interfaces.srv.GetPlanningScene')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_planning_scene

            from handbot_interfaces.srv import _get_planning_scene
            if _get_planning_scene.Metaclass_GetPlanningScene_Request._TYPE_SUPPORT is None:
                _get_planning_scene.Metaclass_GetPlanningScene_Request.__import_type_support__()
            if _get_planning_scene.Metaclass_GetPlanningScene_Response._TYPE_SUPPORT is None:
                _get_planning_scene.Metaclass_GetPlanningScene_Response.__import_type_support__()
            if _get_planning_scene.Metaclass_GetPlanningScene_Event._TYPE_SUPPORT is None:
                _get_planning_scene.Metaclass_GetPlanningScene_Event.__import_type_support__()


class GetPlanningScene(metaclass=Metaclass_GetPlanningScene):
    from handbot_interfaces.srv._get_planning_scene import GetPlanningScene_Request as Request
    from handbot_interfaces.srv._get_planning_scene import GetPlanningScene_Response as Response
    from handbot_interfaces.srv._get_planning_scene import GetPlanningScene_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
