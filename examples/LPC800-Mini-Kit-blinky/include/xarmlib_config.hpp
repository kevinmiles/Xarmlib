// ----------------------------------------------------------------------------
// @file    xarmlib_config.hpp
// @brief   Xarmlib configuration file for LPC800-Mini-Kit-blinky example.
// @date    10 July 2018
// ----------------------------------------------------------------------------
//
// Xarmlib 0.1.0 - https://github.com/hparracho/Xarmlib
// Copyright (c) 2018 Helder Parracho (hparracho@gmail.com)
//
// See README.md file for additional credits and acknowledgments.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//
// ----------------------------------------------------------------------------

#ifndef __XARMLIB_CONFIG_HPP
#define __XARMLIB_CONFIG_HPP

#include "xarmlib.hpp"

namespace xarmlib
{




// ----------------------------------------------------------------------------
// SYSTEM AND MCU SPECIFIC DEFINITIONS
// ----------------------------------------------------------------------------

// CRP (Code Read Protect) word definition
#define XARMLIB_CONFIG_CRP_SETTING_NO_CRP                       (1)

// Buffer for Micro Trace Buffer (MTB) instruction trace on Cortex-M0+ parts
#ifndef NDEBUG
#define XARMLIB_ENABLE_MTB                                      (1)
#define XARMLIB_CONFIG_MTB_BUFFER_SIZE                          (256)
#endif

// Disable heap memory allocation support if not needed
#define CPP_NO_HEAP

// -------- SYSTEM CLOCK ------------------------------------------------------
constexpr System::Clock XARMLIB_CONFIG_SYSTEM_CLOCK { System::Clock::OSC_24MHZ };




// ----------------------------------------------------------------------------
//XARMLIB LIBRARY DEFINITIONS
// ----------------------------------------------------------------------------

// -------- INPUT SCANNER / DEBOUNCER -----------------------------------------
#define XARMLIB_ENABLE_INPUT_DEBOUNCER                          (0)     // Enable / disable input debouncer functionality

constexpr std::size_t XARMLIB_CONFIG_PIN_DEBOUNCER_PIN_COUNT    { 0 }; // Maximum possible number of debounced pins
constexpr std::size_t XARMLIB_CONFIG_INPUT_SCANNER_SOURCE_COUNT { 0 }; // Maximum possible number of input scanner sources




} // namespace xarmlib

#endif // __XARMLIB_CONFIG_HPP
