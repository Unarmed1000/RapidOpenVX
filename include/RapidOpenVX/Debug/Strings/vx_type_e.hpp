#ifndef RAPIDOPENVX_DEBUG_STRINGS_VX_TYPE_E_HPP
#define RAPIDOPENVX_DEBUG_STRINGS_VX_TYPE_E_HPP
//***************************************************************************************************************************************************
//* BSD 3-Clause License
//*
//* Copyright (c) 2017, Rene Thrane
//* All rights reserved.
//*
//* Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
//*
//* 1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
//* 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the
//*    documentation and/or other materials provided with the distribution.
//* 3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this
//*    software without specific prior written permission.
//*
//* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
//* THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
//* CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
//* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
//* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
//* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//***************************************************************************************************************************************************

// If you use the functionality in this file its recommended to 'WRAP' it in a hpp/cpp file combo so its only included in one file!

// Auto-generated OpenVX 1.1 C++11 RAII classes by RAIIGen (https://github.com/Unarmed1000/RAIIGen)

#include <VX/vx.h>

namespace RapidOpenVX
{
  namespace Debug
  {
    inline const char* ToString(const vx_type_e& value)
    {
      switch(value)
      {
      case VX_TYPE_INVALID:
        return "VX_TYPE_INVALID";
      case VX_TYPE_CHAR:
        return "VX_TYPE_CHAR";
      case VX_TYPE_INT8:
        return "VX_TYPE_INT8";
      case VX_TYPE_UINT8:
        return "VX_TYPE_UINT8";
      case VX_TYPE_INT16:
        return "VX_TYPE_INT16";
      case VX_TYPE_UINT16:
        return "VX_TYPE_UINT16";
      case VX_TYPE_INT32:
        return "VX_TYPE_INT32";
      case VX_TYPE_UINT32:
        return "VX_TYPE_UINT32";
      case VX_TYPE_INT64:
        return "VX_TYPE_INT64";
      case VX_TYPE_UINT64:
        return "VX_TYPE_UINT64";
      case VX_TYPE_FLOAT32:
        return "VX_TYPE_FLOAT32";
      case VX_TYPE_FLOAT64:
        return "VX_TYPE_FLOAT64";
      case VX_TYPE_ENUM:
        return "VX_TYPE_ENUM";
      case VX_TYPE_SIZE:
        return "VX_TYPE_SIZE";
      case VX_TYPE_DF_IMAGE:
        return "VX_TYPE_DF_IMAGE";
      case VX_TYPE_BOOL:
        return "VX_TYPE_BOOL";
      case VX_TYPE_SCALAR_MAX:
        return "VX_TYPE_SCALAR_MAX";
      case VX_TYPE_RECTANGLE:
        return "VX_TYPE_RECTANGLE";
      case VX_TYPE_KEYPOINT:
        return "VX_TYPE_KEYPOINT";
      case VX_TYPE_COORDINATES2D:
        return "VX_TYPE_COORDINATES2D";
      case VX_TYPE_COORDINATES3D:
        return "VX_TYPE_COORDINATES3D";
      case VX_TYPE_USER_STRUCT_START:
        return "VX_TYPE_USER_STRUCT_START";
      case VX_TYPE_VENDOR_STRUCT_START:
        return "VX_TYPE_VENDOR_STRUCT_START";
#if VX_VERSION >= VX_VERSION_1_1
      case VX_TYPE_KHRONOS_OBJECT_START:
        return "VX_TYPE_KHRONOS_OBJECT_START";
#endif
      case VX_TYPE_VENDOR_OBJECT_START:
        return "VX_TYPE_VENDOR_OBJECT_START";
#if VX_VERSION >= VX_VERSION_1_1
      case VX_TYPE_KHRONOS_STRUCT_MAX:
        return "VX_TYPE_KHRONOS_STRUCT_MAX";
#endif
      case VX_TYPE_USER_STRUCT_END:
        return "VX_TYPE_USER_STRUCT_END";
      case VX_TYPE_VENDOR_STRUCT_END:
        return "VX_TYPE_VENDOR_STRUCT_END";
#if VX_VERSION >= VX_VERSION_1_1
      case VX_TYPE_KHRONOS_OBJECT_END:
        return "VX_TYPE_KHRONOS_OBJECT_END";
#endif
      case VX_TYPE_VENDOR_OBJECT_END:
        return "VX_TYPE_VENDOR_OBJECT_END";
      case VX_TYPE_REFERENCE:
        return "VX_TYPE_REFERENCE";
      case VX_TYPE_CONTEXT:
        return "VX_TYPE_CONTEXT";
      case VX_TYPE_GRAPH:
        return "VX_TYPE_GRAPH";
      case VX_TYPE_NODE:
        return "VX_TYPE_NODE";
      case VX_TYPE_KERNEL:
        return "VX_TYPE_KERNEL";
      case VX_TYPE_PARAMETER:
        return "VX_TYPE_PARAMETER";
      case VX_TYPE_DELAY:
        return "VX_TYPE_DELAY";
      case VX_TYPE_LUT:
        return "VX_TYPE_LUT";
      case VX_TYPE_DISTRIBUTION:
        return "VX_TYPE_DISTRIBUTION";
      case VX_TYPE_PYRAMID:
        return "VX_TYPE_PYRAMID";
      case VX_TYPE_THRESHOLD:
        return "VX_TYPE_THRESHOLD";
      case VX_TYPE_MATRIX:
        return "VX_TYPE_MATRIX";
      case VX_TYPE_CONVOLUTION:
        return "VX_TYPE_CONVOLUTION";
      case VX_TYPE_SCALAR:
        return "VX_TYPE_SCALAR";
      case VX_TYPE_ARRAY:
        return "VX_TYPE_ARRAY";
      case VX_TYPE_IMAGE:
        return "VX_TYPE_IMAGE";
      case VX_TYPE_REMAP:
        return "VX_TYPE_REMAP";
      case VX_TYPE_ERROR:
        return "VX_TYPE_ERROR";
      case VX_TYPE_META_FORMAT:
        return "VX_TYPE_META_FORMAT";
#if VX_VERSION >= VX_VERSION_1_1
      case VX_TYPE_OBJECT_ARRAY:
        return "VX_TYPE_OBJECT_ARRAY";
#endif
      default:
        return "*Unknown*";
      }
    };
  }
}

#endif
