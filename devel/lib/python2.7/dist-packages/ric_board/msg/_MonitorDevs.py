"""autogenerated by genpy from ric_board/MonitorDevs.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import ric_board.msg

class MonitorDevs(genpy.Message):
  _md5sum = "e4abe1a9f2ea3d5e4b56e11eaa19a77e"
  _type = "ric_board/MonitorDevs"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """ric_board/DevStatus[] devs

================================================================================
MSG: ric_board/DevStatus
string devName
int8 type
float32[] values


"""
  __slots__ = ['devs']
  _slot_types = ['ric_board/DevStatus[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       devs

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MonitorDevs, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.devs is None:
        self.devs = []
    else:
      self.devs = []

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
      length = len(self.devs)
      buff.write(_struct_I.pack(length))
      for val1 in self.devs:
        _x = val1.devName
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_struct_b.pack(val1.type))
        length = len(val1.values)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(struct.pack(pattern, *val1.values))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.devs is None:
        self.devs = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.devs = []
      for i in range(0, length):
        val1 = ric_board.msg.DevStatus()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.devName = str[start:end].decode('utf-8')
        else:
          val1.devName = str[start:end]
        start = end
        end += 1
        (val1.type,) = _struct_b.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        end += struct.calcsize(pattern)
        val1.values = struct.unpack(pattern, str[start:end])
        self.devs.append(val1)
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
      length = len(self.devs)
      buff.write(_struct_I.pack(length))
      for val1 in self.devs:
        _x = val1.devName
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_struct_b.pack(val1.type))
        length = len(val1.values)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(val1.values.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.devs is None:
        self.devs = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.devs = []
      for i in range(0, length):
        val1 = ric_board.msg.DevStatus()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.devName = str[start:end].decode('utf-8')
        else:
          val1.devName = str[start:end]
        start = end
        end += 1
        (val1.type,) = _struct_b.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        end += struct.calcsize(pattern)
        val1.values = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
        self.devs.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_b = struct.Struct("<b")
