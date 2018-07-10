// ----------------------------------------------------------------------------
// @file    target_specs.hpp
// @brief   Core level target configuration header file.
// @date    6 July 2018
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

#ifndef __XARMLIB_CORE_TARGET_SPECS_HPP
#define __XARMLIB_CORE_TARGET_SPECS_HPP




// LPC84x
#if defined (LPC845M301JBD64)
#   define __LPC845__
#   define __LPC84X__
#   define __LPC84X_PINS__                  (64)
#   define __LPC84X_GPIOS__                 (54)
#elif defined (LPC845M301JBD48) || defined (LPC845M301JHI48)
#   define __LPC845__
#   define __LPC84X__
#   define __LPC84X_PINS__                  (48)
#   define __LPC84X_GPIOS__                 (42)
#elif defined (LPC845M301JHI33)
#   define __LPC845__
#   define __LPC84X__
#   define __LPC84X_PINS__                  (33)
#   define __LPC84X_GPIOS__                 (29)
#elif defined (LPC844M201JBD64)
#   define __LPC844__
#   define __LPC84X__
#   define __LPC84X_PINS__                  (64)
#   define __LPC84X_GPIOS__                 (54)
#elif defined (LPC844M201JBD48) || defined (LPC844M201JHI48)
#   define __LPC844__
#   define __LPC84X__
#   define __LPC84X_PINS__                  (48)
#   define __LPC84X_GPIOS__                 (42)
#elif defined (LPC844M201JHI33)
#   define __LPC844__
#   define __LPC84X__
#   define __LPC84X_PINS__                  (33)
#   define __LPC84X_GPIOS__                 (29)

// LPC81x
#elif defined (LPC812M101JDH20)
#   define __LPC812__
#   define __LPC81X__
#   define __LPC81X_PINS__                  (20)
#   define __LPC81X_GPIOS__                 (18)
#   define __LPC81X_USARTS__                (3)
#   define __LPC81X_SPIS__                  (2)
#elif defined (LPC812M101JD20)
#   define __LPC812__
#   define __LPC81X__
#   define __LPC81X_PINS__                  (20)
#   define __LPC81X_GPIOS__                 (18)
#   define __LPC81X_USARTS__                (2)
#   define __LPC81X_SPIS__                  (1)
#elif defined (LPC812M101JDH16) || defined (LPC812M101JTB16)
#   define __LPC812__
#   define __LPC81X__
#   define __LPC81X_PINS__                  (16)
#   define __LPC81X_GPIOS__                 (14)
#   define __LPC81X_USARTS__                (3)
#   define __LPC81X_SPIS__                  (2)
#elif defined (LPC811M001JDH16)
#   define __LPC811__
#   define __LPC81X__
#   define __LPC81X_PINS__                  (16)
#   define __LPC81X_GPIOS__                 (14)
#   define __LPC81X_USARTS__                (2)
#   define __LPC81X_SPIS__                  (1)
#elif defined (LPC810M021FN8)
#   define __LPC810__
#   define __LPC81X__
#   define __LPC81X_PINS__                  (8)
#   define __LPC81X_GPIOS__                 (6)
#   define __LPC81X_USARTS__                (2)
#   define __LPC81X_SPIS__                  (1)
#else
#   error "Target MCU not defined!"
#endif




#if defined __LPC84X__
#   define __TARGET_TIMER_TYPE_IS_MRT__
#   define __TARGET_GPIOS__                 (__LPC84X_GPIOS__)
#elif defined __LPC81X__
#   define __TARGET_TIMER_TYPE_IS_MRT__
#   define __TARGET_GPIOS__                 (__LPC81X_GPIOS__)
//#   define __TARGET_USARTS__                (__LPC81X_USARTS__)
//#   define __TARGET_SPIS__                  (__LPC81X_SPIS__)
#endif




#endif // __XARMLIB_CORE_TARGET_SPECS_HPP