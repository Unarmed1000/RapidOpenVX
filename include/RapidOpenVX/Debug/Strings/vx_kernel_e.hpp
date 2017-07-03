#ifndef RAPIDOPENVX_DEBUG_STRINGS_VX_KERNEL_E_HPP
#define RAPIDOPENVX_DEBUG_STRINGS_VX_KERNEL_E_HPP
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
    inline const char* ToString(const vx_kernel_e& value)
    {
      switch(value)
      {
      case VX_KERNEL_COLOR_CONVERT:
        return "VX_KERNEL_COLOR_CONVERT";
      case VX_KERNEL_CHANNEL_EXTRACT:
        return "VX_KERNEL_CHANNEL_EXTRACT";
      case VX_KERNEL_CHANNEL_COMBINE:
        return "VX_KERNEL_CHANNEL_COMBINE";
      case VX_KERNEL_SOBEL_3x3:
        return "VX_KERNEL_SOBEL_3x3";
      case VX_KERNEL_MAGNITUDE:
        return "VX_KERNEL_MAGNITUDE";
      case VX_KERNEL_PHASE:
        return "VX_KERNEL_PHASE";
      case VX_KERNEL_SCALE_IMAGE:
        return "VX_KERNEL_SCALE_IMAGE";
      case VX_KERNEL_TABLE_LOOKUP:
        return "VX_KERNEL_TABLE_LOOKUP";
      case VX_KERNEL_HISTOGRAM:
        return "VX_KERNEL_HISTOGRAM";
      case VX_KERNEL_EQUALIZE_HISTOGRAM:
        return "VX_KERNEL_EQUALIZE_HISTOGRAM";
      case VX_KERNEL_ABSDIFF:
        return "VX_KERNEL_ABSDIFF";
      case VX_KERNEL_MEAN_STDDEV:
        return "VX_KERNEL_MEAN_STDDEV";
      case VX_KERNEL_THRESHOLD:
        return "VX_KERNEL_THRESHOLD";
      case VX_KERNEL_INTEGRAL_IMAGE:
        return "VX_KERNEL_INTEGRAL_IMAGE";
      case VX_KERNEL_DILATE_3x3:
        return "VX_KERNEL_DILATE_3x3";
      case VX_KERNEL_ERODE_3x3:
        return "VX_KERNEL_ERODE_3x3";
      case VX_KERNEL_MEDIAN_3x3:
        return "VX_KERNEL_MEDIAN_3x3";
      case VX_KERNEL_BOX_3x3:
        return "VX_KERNEL_BOX_3x3";
      case VX_KERNEL_GAUSSIAN_3x3:
        return "VX_KERNEL_GAUSSIAN_3x3";
      case VX_KERNEL_CUSTOM_CONVOLUTION:
        return "VX_KERNEL_CUSTOM_CONVOLUTION";
      case VX_KERNEL_GAUSSIAN_PYRAMID:
        return "VX_KERNEL_GAUSSIAN_PYRAMID";
      case VX_KERNEL_ACCUMULATE:
        return "VX_KERNEL_ACCUMULATE";
      case VX_KERNEL_ACCUMULATE_WEIGHTED:
        return "VX_KERNEL_ACCUMULATE_WEIGHTED";
      case VX_KERNEL_ACCUMULATE_SQUARE:
        return "VX_KERNEL_ACCUMULATE_SQUARE";
      case VX_KERNEL_MINMAXLOC:
        return "VX_KERNEL_MINMAXLOC";
      case VX_KERNEL_CONVERTDEPTH:
        return "VX_KERNEL_CONVERTDEPTH";
      case VX_KERNEL_CANNY_EDGE_DETECTOR:
        return "VX_KERNEL_CANNY_EDGE_DETECTOR";
      case VX_KERNEL_AND:
        return "VX_KERNEL_AND";
      case VX_KERNEL_OR:
        return "VX_KERNEL_OR";
      case VX_KERNEL_XOR:
        return "VX_KERNEL_XOR";
      case VX_KERNEL_NOT:
        return "VX_KERNEL_NOT";
      case VX_KERNEL_MULTIPLY:
        return "VX_KERNEL_MULTIPLY";
      case VX_KERNEL_ADD:
        return "VX_KERNEL_ADD";
      case VX_KERNEL_SUBTRACT:
        return "VX_KERNEL_SUBTRACT";
      case VX_KERNEL_WARP_AFFINE:
        return "VX_KERNEL_WARP_AFFINE";
      case VX_KERNEL_WARP_PERSPECTIVE:
        return "VX_KERNEL_WARP_PERSPECTIVE";
      case VX_KERNEL_HARRIS_CORNERS:
        return "VX_KERNEL_HARRIS_CORNERS";
      case VX_KERNEL_FAST_CORNERS:
        return "VX_KERNEL_FAST_CORNERS";
      case VX_KERNEL_OPTICAL_FLOW_PYR_LK:
        return "VX_KERNEL_OPTICAL_FLOW_PYR_LK";
      case VX_KERNEL_REMAP:
        return "VX_KERNEL_REMAP";
      case VX_KERNEL_HALFSCALE_GAUSSIAN:
        return "VX_KERNEL_HALFSCALE_GAUSSIAN";
#if VX_VERSION >= VX_VERSION_1_1
      case VX_KERNEL_LAPLACIAN_PYRAMID:
        return "VX_KERNEL_LAPLACIAN_PYRAMID";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_KERNEL_LAPLACIAN_RECONSTRUCT:
        return "VX_KERNEL_LAPLACIAN_RECONSTRUCT";
#endif
#if VX_VERSION >= VX_VERSION_1_1
      case VX_KERNEL_NON_LINEAR_FILTER:
        return "VX_KERNEL_NON_LINEAR_FILTER";
#endif
      case VX_KERNEL_MAX_1_0:
        return "VX_KERNEL_MAX_1_0";
      default:
        return "*Unknown*";
      }
    };
  }
}

#endif
