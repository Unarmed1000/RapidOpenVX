#ifndef RAPIDOPENVX_DEBUG_STRINGS_VX_NODE_ATTRIBUTE_E_HPP
#define RAPIDOPENVX_DEBUG_STRINGS_VX_NODE_ATTRIBUTE_E_HPP
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
    inline const char* ToString(const vx_node_attribute_e& value)
    {
      switch(value)
      {
#if VX_VERSION >= VX_VERSION_1_1
      case VX_NODE_STATUS:
        return "VX_NODE_STATUS";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_NODE_PERFORMANCE:
        return "VX_NODE_PERFORMANCE";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_NODE_BORDER:
        return "VX_NODE_BORDER";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_NODE_LOCAL_DATA_SIZE:
        return "VX_NODE_LOCAL_DATA_SIZE";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_NODE_LOCAL_DATA_PTR:
        return "VX_NODE_LOCAL_DATA_PTR";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_NODE_PARAMETERS:
        return "VX_NODE_PARAMETERS";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_NODE_IS_REPLICATED:
        return "VX_NODE_IS_REPLICATED";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_NODE_REPLICATE_FLAGS:
        return "VX_NODE_REPLICATE_FLAGS";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_NODE_VALID_RECT_RESET:
        return "VX_NODE_VALID_RECT_RESET";
#endif
      default:
        return "*Unknown*";
      }
    };
  }
}

#endif
