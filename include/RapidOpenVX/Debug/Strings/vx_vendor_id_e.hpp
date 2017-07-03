#ifndef RAPIDOPENVX_DEBUG_STRINGS_VX_VENDOR_ID_E_HPP
#define RAPIDOPENVX_DEBUG_STRINGS_VX_VENDOR_ID_E_HPP
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
    inline const char* ToString(const vx_vendor_id_e& value)
    {
      switch(value)
      {
      case VX_ID_KHRONOS:
        return "VX_ID_KHRONOS";
      case VX_ID_TI:
        return "VX_ID_TI";
      case VX_ID_QUALCOMM:
        return "VX_ID_QUALCOMM";
      case VX_ID_NVIDIA:
        return "VX_ID_NVIDIA";
      case VX_ID_ARM:
        return "VX_ID_ARM";
      case VX_ID_BDTI:
        return "VX_ID_BDTI";
      case VX_ID_RENESAS:
        return "VX_ID_RENESAS";
      case VX_ID_VIVANTE:
        return "VX_ID_VIVANTE";
      case VX_ID_XILINX:
        return "VX_ID_XILINX";
      case VX_ID_AXIS:
        return "VX_ID_AXIS";
      case VX_ID_MOVIDIUS:
        return "VX_ID_MOVIDIUS";
      case VX_ID_SAMSUNG:
        return "VX_ID_SAMSUNG";
      case VX_ID_FREESCALE:
        return "VX_ID_FREESCALE";
      case VX_ID_AMD:
        return "VX_ID_AMD";
      case VX_ID_BROADCOM:
        return "VX_ID_BROADCOM";
      case VX_ID_INTEL:
        return "VX_ID_INTEL";
      case VX_ID_MARVELL:
        return "VX_ID_MARVELL";
      case VX_ID_MEDIATEK:
        return "VX_ID_MEDIATEK";
      case VX_ID_ST:
        return "VX_ID_ST";
      case VX_ID_CEVA:
        return "VX_ID_CEVA";
      case VX_ID_ITSEEZ:
        return "VX_ID_ITSEEZ";
      case VX_ID_IMAGINATION:
        return "VX_ID_IMAGINATION";
#if VX_VERSION >= VX_VERSION_1_1
      case VX_ID_NXP:
        return "VX_ID_NXP";
#endif
      case VX_ID_VIDEANTIS:
        return "VX_ID_VIDEANTIS";
      case VX_ID_SYNOPSYS:
        return "VX_ID_SYNOPSYS";
#if VX_VERSION >= VX_VERSION_1_1
      case VX_ID_CADENCE:
        return "VX_ID_CADENCE";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_ID_HUAWEI:
        return "VX_ID_HUAWEI";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_ID_USER:
        return "VX_ID_USER";
#endif
      case VX_ID_MAX:
        return "VX_ID_MAX";
      case VX_ID_DEFAULT:
        return "VX_ID_DEFAULT";
      default:
        return "*Unknown*";
      }
    };
  }
}

#endif
