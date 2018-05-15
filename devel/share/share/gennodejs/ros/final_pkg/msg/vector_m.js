// Auto-generated. Do not edit!

// (in-package final_pkg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class vector_m {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.avaiable_points = null;
    }
    else {
      if (initObj.hasOwnProperty('avaiable_points')) {
        this.avaiable_points = initObj.avaiable_points
      }
      else {
        this.avaiable_points = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type vector_m
    // Serialize message field [avaiable_points]
    // Serialize the length for message field [avaiable_points]
    bufferOffset = _serializer.uint32(obj.avaiable_points.length, buffer, bufferOffset);
    obj.avaiable_points.forEach((val) => {
      bufferOffset = geometry_msgs.msg.Point.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type vector_m
    let len;
    let data = new vector_m(null);
    // Deserialize message field [avaiable_points]
    // Deserialize array length for message field [avaiable_points]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.avaiable_points = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.avaiable_points[i] = geometry_msgs.msg.Point.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 24 * object.avaiable_points.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'final_pkg/vector_m';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '1e4e4c7924162920dede83839967ccfc';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    geometry_msgs/Point[] avaiable_points
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new vector_m(null);
    if (msg.avaiable_points !== undefined) {
      resolved.avaiable_points = new Array(msg.avaiable_points.length);
      for (let i = 0; i < resolved.avaiable_points.length; ++i) {
        resolved.avaiable_points[i] = geometry_msgs.msg.Point.Resolve(msg.avaiable_points[i]);
      }
    }
    else {
      resolved.avaiable_points = []
    }

    return resolved;
    }
};

module.exports = vector_m;
