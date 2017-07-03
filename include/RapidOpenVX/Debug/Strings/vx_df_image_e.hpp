#ifndef RAPIDOPENVX_DEBUG_STRINGS_VX_DF_IMAGE_E_HPP
#define RAPIDOPENVX_DEBUG_STRINGS_VX_DF_IMAGE_E_HPP
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
    inline const char* ToString(const vx_df_image_e& value)
    {
      switch(value)
      {
      case VX_DF_IMAGE_VIRT:
        return "VX_DF_IMAGE_VIRT";
      case VX_DF_IMAGE_RGB:
        return "VX_DF_IMAGE_RGB";
      case VX_DF_IMAGE_RGBX:
        return "VX_DF_IMAGE_RGBX";
      case VX_DF_IMAGE_NV12:
        return "VX_DF_IMAGE_NV12";
      case VX_DF_IMAGE_NV21:
        return "VX_DF_IMAGE_NV21";
      case VX_DF_IMAGE_UYVY:
        return "VX_DF_IMAGE_UYVY";
      case VX_DF_IMAGE_YUYV:
        return "VX_DF_IMAGE_YUYV";
      case VX_DF_IMAGE_IYUV:
        return "VX_DF_IMAGE_IYUV";
      case VX_DF_IMAGE_YUV4:
        return "VX_DF_IMAGE_YUV4";
      case VX_DF_IMAGE_U8:
        return "VX_DF_IMAGE_U8";
      case VX_DF_IMAGE_U16:
        return "VX_DF_IMAGE_U16";
      case VX_DF_IMAGE_S16:
        return "VX_DF_IMAGE_S16";
      case VX_DF_IMAGE_U32:
        return "VX_DF_IMAGE_U32";
      case VX_DF_IMAGE_S32:
        return "VX_DF_IMAGE_S32";
      default:
        return "*Unknown*";
      }
    };
  }
}

#endif
