# Xarmlib - (It will) work like a charm!
Experimental C++ library for bare-metal ARM Cortex-M platforms

## Warning:
***This library is mainly a personal project. For now, it is nothing more than a testbed for experiments and knowledge development. It is in a very immature and early state and contains most certainly lots of bugs and issues that need to be fixed. You can use it freely in any way you like but it comes with absolutely no warranty at all! - You have been warned! :-)***

---
## Supported targets:
- NXP LPC84x *(first supported target - work in progress...)*

## Supported Toolchains:
- [GNU Arm Embedded Toolchain](https://developer.arm.com/open-source/gnu-toolchain/gnu-rm) - developed with version "6-2017-q2-update" on NXP MCUXpresso IDE v10.1.1

## External dependencies:
- [CMSIS-Core(M)](https://github.com/ARM-software/CMSIS_5) - currently using v5.1.1

---
## Credit where it is due:

***Alone we don't go far...*** This library uses some code and ideias taken from other persons and projects:  

- The startup code is *heavily* based on the [Cortex-M Startup](https://github.com/micro-os-plus/cortexm-startup-DEPRECATED) project, part of the [µOS++ IIIe](https://github.com/micro-os-plus) project. Copyright (c) 2016 [Liviu Ionescu](mailto:ilg@livius.net). *<- Great project, check it out!*  
- The low level peripheral drivers for the LPC84x family of MCUs are based on the [LPC845 Example Code Bundle MCUXpresso](https://www.nxp.com/downloads/en/software/LPC845-Example-Code-Bundle-MCUXpresso.zip) supplied by NXP. All rights reserved. (c) 2017 NXP B.V.  

## Additional Contributors:
- [Emanuel Pinto](mailto:emanuelangelopinto@gmail.com) is an official contributor of this library and some of the code is based on his original work.  
