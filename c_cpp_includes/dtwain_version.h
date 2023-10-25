/*
    This file is part of the Dynarithmic TWAIN Library (DTWAIN).
    Copyright (c) 2002-2023 Dynarithmic Software.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

    FOR ANY PART OF THE COVERED WORK IN WHICH THE COPYRIGHT IS OWNED BY
    DYNARITHMIC SOFTWARE. DYNARITHMIC SOFTWARE DISCLAIMS THE WARRANTY OF NON INFRINGEMENT
    OF THIRD PARTY RIGHTS.
 */
#ifndef DTWAIN_VERSION_H
#define DTWAIN_VERSION_H

#define DTWAIN_MAJOR_VERSION           5
#define DTWAIN_MINOR_VERSION           3
#define DTWAIN_SUBMINOR_VERSION        0
#define DTWAIN_PATCHLEVEL_VERSION      7

#define DTWAIN_VERINFO_BASEVERSION          "5.3"
#define DTWAIN_VERINFO_FILEVERSION          "5.3.0.0"
#define DTWAIN_VERINFO_PATCHLEVEL_VERSION   "7"

#ifdef USE_DTWAIN_DEBUG_LIB
    #define DTWAIN_DEVELOP_SUFFIX "d"
#else
    #define DTWAIN_DEVELOP_SUFFIX ""
#endif

#ifdef _WIN32
	#ifdef UNICODE
		#define UNICODE_VERSION "(Unicode)"
		#define UNICODE_SUFFIX  "u"
	#else
		#define UNICODE_VERSION
		#define UNICODE_SUFFIX ""
	#endif

    #ifdef DTWAIN_LEAN_AND_MEAN
        #define DTWAIN_LM_VERSION "_lm"
    #else
        #define DTWAIN_LM_VERSION ""
    #endif

    #define DTWAIN_BASE_NAME "dtwain"
	#if defined (WIN64) || (_WIN64)
		#define DTWAIN_OSPLATFORM "64"
	#else
		#define DTWAIN_OSPLATFORM "32"
	#endif
    #define DTWAIN_BASE_NAME_EX DTWAIN_BASE_NAME DTWAIN_OSPLATFORM
    #define DTWAIN_FILEDESCRIPTION DTWAIN_BASE_NAME_EX UNICODE_SUFFIX DTWAIN_DEVELOP_SUFFIX DTWAIN_LM_VERSION
	#define DTWAIN_DLLNAME      DTWAIN_FILEDESCRIPTION ".dll"
	#define DTWAIN_IMPORTLIBNAME DTWAIN_FILEDESCRIPTION ".lib"
    #define DTWAIN_ININAME DTWAIN_BASE_NAME_EX ".ini"
    #define DTWAIN_ININAME_NATIVE _T(DTWAIN_ININAME)
#endif

#ifndef _WIN32
    #if defined (UNIX64)
        #define DTWAIN_DLLNAME      "libdtwain64" DTWAIN_DEVELOP_SUFFIX ".a"
        #define DTWAIN_FILEDESCRIPTION  "libdtwain64" DTWAIN_DEVELOP_SUFFIX
        #define DTWAIN_OSPLATFORM "64"
    #else
        #define DTWAIN_DLLNAME      "libdtwain32" DTWAIN_DEVELOP_SUFFIX ".a"
        #define DTWAIN_FILEDESCRIPTION  "libdtwain32" DTWAIN_DEVELOP_SUFFIX
        #define DTWAIN_OSPLATFORM "32"
    #endif
#endif
#endif
