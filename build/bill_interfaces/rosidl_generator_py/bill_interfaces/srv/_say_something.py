# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bill_interfaces:srv/SaySomething.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaySomething_Request(type):
    """Metaclass of message 'SaySomething_Request'."""

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
            module = import_type_support('bill_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'bill_interfaces.srv.SaySomething_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__say_something__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__say_something__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__say_something__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__say_something__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__say_something__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaySomething_Request(metaclass=Metaclass_SaySomething_Request):
    """Message class 'SaySomething_Request'."""

    __slots__ = [
        '_something',
    ]

    _fields_and_field_types = {
        'something': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.something = kwargs.get('something', str())

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
        if self.something != other.something:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def something(self):
        """Message field 'something'."""
        return self._something

    @something.setter
    def something(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'something' field must be of type 'str'"
        self._something = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SaySomething_Response(type):
    """Metaclass of message 'SaySomething_Response'."""

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
            module = import_type_support('bill_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'bill_interfaces.srv.SaySomething_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__say_something__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__say_something__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__say_something__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__say_something__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__say_something__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaySomething_Response(metaclass=Metaclass_SaySomething_Response):
    """Message class 'SaySomething_Response'."""

    __slots__ = [
        '_said',
    ]

    _fields_and_field_types = {
        'said': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.said = kwargs.get('said', bool())

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
        if self.said != other.said:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def said(self):
        """Message field 'said'."""
        return self._said

    @said.setter
    def said(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'said' field must be of type 'bool'"
        self._said = value


class Metaclass_SaySomething(type):
    """Metaclass of service 'SaySomething'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('bill_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'bill_interfaces.srv.SaySomething')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__say_something

            from bill_interfaces.srv import _say_something
            if _say_something.Metaclass_SaySomething_Request._TYPE_SUPPORT is None:
                _say_something.Metaclass_SaySomething_Request.__import_type_support__()
            if _say_something.Metaclass_SaySomething_Response._TYPE_SUPPORT is None:
                _say_something.Metaclass_SaySomething_Response.__import_type_support__()


class SaySomething(metaclass=Metaclass_SaySomething):
    from bill_interfaces.srv._say_something import SaySomething_Request as Request
    from bill_interfaces.srv._say_something import SaySomething_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
