"""autogenerated by genpy from ric_robot/ric_rc.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ric_rc(genpy.Message):
  _md5sum = "141c3eb3d7391c30d945399a5b34b7d1"
  _type = "ric_robot/ric_rc"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint16 RX1
uint16 RX2
uint16 RX3
uint16 RX4
uint16 RX5
uint16 RX6

"""
  __slots__ = ['RX1','RX2','RX3','RX4','RX5','RX6']
  _slot_types = ['uint16','uint16','uint16','uint16','uint16','uint16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       RX1,RX2,RX3,RX4,RX5,RX6

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ric_rc, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.RX1 is None:
        self.RX1 = 0
      if self.RX2 is None:
        self.RX2 = 0
      if self.RX3 is None:
        self.RX3 = 0
      if self.RX4 is None:
        self.RX4 = 0
      if self.RX5 is None:
        self.RX5 = 0
      if self.RX6 is None:
        self.RX6 = 0
    else:
      self.RX1 = 0
      self.RX2 = 0
      self.RX3 = 0
      self.RX4 = 0
      self.RX5 = 0
      self.RX6 = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_6H.pack(_x.RX1, _x.RX2, _x.RX3, _x.RX4, _x.RX5, _x.RX6))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.RX1, _x.RX2, _x.RX3, _x.RX4, _x.RX5, _x.RX6,) = _struct_6H.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_6H.pack(_x.RX1, _x.RX2, _x.RX3, _x.RX4, _x.RX5, _x.RX6))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.RX1, _x.RX2, _x.RX3, _x.RX4, _x.RX5, _x.RX6,) = _struct_6H.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_6H = struct.Struct("<6H")
