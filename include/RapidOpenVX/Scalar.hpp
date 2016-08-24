#ifndef RAPIDOPENVX_SCALAR_HPP
#define RAPIDOPENVX_SCALAR_HPP
//***************************************************************************************************************************************************
//* BSD 3-Clause License
//*
//* Copyright (c) 2016, Rene Thrane
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

// Auto-generated OpenVX 1.0.1 C++11 RAII classes by RAIIGen (https://github.com/Unarmed1000)

#include <RapidOpenVX/Values.hpp>
#include <RapidOpenVX/Util.hpp>
#include <VX/vx.h>
#include <cassert>

namespace RapidOpenVX
{
  // This object is movable so it can be thought of as behaving in the same was as a unique_ptr and is compatible with std containers
  class Scalar
  {
    vx_scalar m_scalar;
  public:
    Scalar(const Scalar&) = delete;
    Scalar& operator=(const Scalar&) = delete;
  
    //! @brief Move assignment operator
    Scalar& operator=(Scalar&& other)
    {
      if (this != &other)
      {
        // Free existing resources then transfer the content of other to this one and fill other with default values
        if (IsValid())
          Reset();

        // Claim ownership here
        m_scalar = other.m_scalar;

        // Remove the data from other
        other.m_scalar = Values::INVALID_SCALAR;
      }
      return *this;
    }
    
    //! @brief Move constructor
    Scalar(Scalar&& other)
      : m_scalar(other.m_scalar)
    {
      // Remove the data from other
      other.m_scalar = Values::INVALID_SCALAR;
    }

    //! @brief Create a 'invalid' instance (use Reset to populate it)
    Scalar()
      : m_scalar(Values::INVALID_SCALAR)
    {
    }

    //! @brief Assume control of the Scalar (this object becomes responsible for releasing it)
    explicit Scalar(const vx_scalar scalar);
      : Scalar()
    {
      Reset(scalar);
    }
    
    Scalar(const vx_context context, const vx_enum data_type, const void * ptr)
      : Scalar()
    {
      Reset(context, data_type, ptr);
    }
    
    ~Scalar()
    {
      Reset();
    }

    //! @brief returns the managed handle and releases the ownership.
    vx_scalar Release()
    {
      const auto resource = m_scalar;
      m_scalar = Values::INVALID_SCALAR;
      return resource;
    }

    //! @brief Destroys any owned resources and resets the object to its default state.
    void Reset()
    {
      if (! IsValid())
        return;

      assert(m_scalar != Values::INVALID_SCALAR);

      vxReleaseScalar(&m_scalar);
      m_scalar = Values::INVALID_SCALAR;
    }

    //! @brief Destroys any owned resources and assume control of the Scalar (this object becomes responsible for releasing it)
    void Reset(const vx_scalar scalar)
    {
      if (IsValid())
        Reset();

      
      m_scalar = scalar;
    }
    
    //! @brief Destroys any owned resources and then creates the requested one
    void Reset(const vx_context context, const vx_enum data_type, const void * ptr)
    {
      // We do the check here to be user friendly, if it becomes a performance issue switch it to a assert.

      // Free any currently allocated resource
      if (IsValid())
        Reset();

      // Since we want to ensure that the resource is left untouched on error we use a local variable as a intermediary
      const vx_scalar scalar = vxCreateScalar(context, data_type, ptr);
      Util::Check(scalar, "vxCreateScalar", __FILE__, __NAME__);

      // Everything is ready, so assign the members
      m_scalar = scalar;
    }

    //! @brief Get the associated resource handle
    vx_scalar Get() const
    {
      return m_scalar;
    }

    //! @brief Check if this object contains a valid resource
    inline bool IsValid() const
    {
      return m_scalar != Values::INVALID_SCALAR;
    }
  };
}

#endif
