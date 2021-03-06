#ifndef RAPIDOPENVX_DEBUG_STRINGS_VX_ENUM_E_HPP
#define RAPIDOPENVX_DEBUG_STRINGS_VX_ENUM_E_HPP
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
    inline const char* ToString(const vx_enum_e& value)
    {
      switch(value)
      {
      case VX_ENUM_DIRECTION:
        return "VX_ENUM_DIRECTION";
      case VX_ENUM_ACTION:
        return "VX_ENUM_ACTION";
      case VX_ENUM_HINT:
        return "VX_ENUM_HINT";
      case VX_ENUM_DIRECTIVE:
        return "VX_ENUM_DIRECTIVE";
      case VX_ENUM_INTERPOLATION:
        return "VX_ENUM_INTERPOLATION";
      case VX_ENUM_OVERFLOW:
        return "VX_ENUM_OVERFLOW";
      case VX_ENUM_COLOR_SPACE:
        return "VX_ENUM_COLOR_SPACE";
      case VX_ENUM_COLOR_RANGE:
        return "VX_ENUM_COLOR_RANGE";
      case VX_ENUM_PARAMETER_STATE:
        return "VX_ENUM_PARAMETER_STATE";
      case VX_ENUM_CHANNEL:
        return "VX_ENUM_CHANNEL";
      case VX_ENUM_CONVERT_POLICY:
        return "VX_ENUM_CONVERT_POLICY";
      case VX_ENUM_THRESHOLD_TYPE:
        return "VX_ENUM_THRESHOLD_TYPE";
#if VX_VERSION >= VX_VERSION_1_1
      case VX_ENUM_BORDER:
        return "VX_ENUM_BORDER";
#endif
      case VX_ENUM_COMPARISON:
        return "VX_ENUM_COMPARISON";
#if VX_VERSION >= VX_VERSION_1_1
      case VX_ENUM_MEMORY_TYPE:
        return "VX_ENUM_MEMORY_TYPE";
#endif
      case VX_ENUM_TERM_CRITERIA:
        return "VX_ENUM_TERM_CRITERIA";
      case VX_ENUM_NORM_TYPE:
        return "VX_ENUM_NORM_TYPE";
      case VX_ENUM_ACCESSOR:
        return "VX_ENUM_ACCESSOR";
      case VX_ENUM_ROUND_POLICY:
        return "VX_ENUM_ROUND_POLICY";
#if VX_VERSION >= VX_VERSION_1_1
      case VX_ENUM_TARGET:
        return "VX_ENUM_TARGET";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_ENUM_BORDER_POLICY:
        return "VX_ENUM_BORDER_POLICY";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_ENUM_GRAPH_STATE:
        return "VX_ENUM_GRAPH_STATE";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_ENUM_NONLINEAR:
        return "VX_ENUM_NONLINEAR";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_ENUM_PATTERN:
        return "VX_ENUM_PATTERN";
#endif
      default:
        return "*Unknown*";
      }
    };
  }
}

#endif
