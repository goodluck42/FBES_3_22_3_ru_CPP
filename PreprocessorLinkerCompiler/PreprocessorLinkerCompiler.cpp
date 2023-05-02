// #define _CRT_SECURE_NO_WARNINGS
// iostream standard header

// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#pragma once
#ifndef _IOSTREAM_
#define _IOSTREAM_
#include <yvals_core.h>
#if _STL_COMPILER_PREPROCESSOR
#include <istream>

#pragma pack(push, _CRT_PACKING)
#pragma warning(push, _STL_WARNING_LEVEL)
#pragma warning(disable : _STL_DISABLED_WARNINGS)
_STL_DISABLE_CLANG_WARNINGS
#pragma push_macro("new")
#undef new
_STD_BEGIN
#ifdef _M_CEE_PURE
__PURE_APPDOMAIN_GLOBAL extern istream cin;
__PURE_APPDOMAIN_GLOBAL extern ostream cout;
__PURE_APPDOMAIN_GLOBAL extern ostream cerr;
__PURE_APPDOMAIN_GLOBAL extern ostream clog;
__PURE_APPDOMAIN_GLOBAL extern istream* _Ptr_cin;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_cout;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_cerr;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_clog;

__PURE_APPDOMAIN_GLOBAL extern wistream wcin;
__PURE_APPDOMAIN_GLOBAL extern wostream wcout;
__PURE_APPDOMAIN_GLOBAL extern wostream wcerr;
__PURE_APPDOMAIN_GLOBAL extern wostream wclog;
__PURE_APPDOMAIN_GLOBAL extern wistream* _Ptr_wcin;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wcout;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wcerr;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wclog;
#else // _M_CEE_PURE
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT istream cin;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream cout;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream cerr;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream clog;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT istream * _Ptr_cin;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream * _Ptr_cout;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream * _Ptr_cerr;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream * _Ptr_clog;

_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wistream wcin;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream wcout;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream wcerr;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream wclog;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wistream * _Ptr_wcin;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream * _Ptr_wcout;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream * _Ptr_wcerr;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream * _Ptr_wclog;

#ifdef _CRTBLD // TRANSITION, ABI: _Winit appears to be unused
class _CRTIMP2_PURE_IMPORT _Winit
{
public:
	__thiscall _Winit();
	__thiscall ~_Winit() noexcept;

private:
	__PURE_APPDOMAIN_GLOBAL static int _Init_cnt;
};
#endif // _CRTBLD

#endif // _M_CEE_PURE
_STD_END
#pragma pop_macro("new")
_STL_RESTORE_CLANG_WARNINGS
#pragma warning(pop)
#pragma pack(pop)
#endif // _STL_COMPILER_PREPROCESSOR
#endif // _IOSTREAM_

#include <cstdio>

#include "mymath.h"
#include "engine.h"

#define NUMBER 42
#define SMTH

//
//#define BEGIN {
//#define END }
//#define MAIN int main()
//#define _END ;
//#define PRINT(TEXT) std::cout << TEXT _END
//#define PAUSE system("pause") _END
//
//
//
//
//MAIN
//BEGIN
//PRINT(NUMBER)
//PAUSE
//END

// LINUX
// WIN

#define WINDOWS
void PrintMessage(const char* text)
{
#define LINUX
// &&, ||, !, ==, !=, >, <, >=, <=


#ifdef LINUX
	printf("Message from Linux: ");
	printf(text);
	printf("\n");
#elif defined(WINDOWS)
	std::cout << "Message from Windows: " << text << '\n';
#else
	std::cout << "OS is not supported" << '\n';
#endif
}


#define VALUE 42

int main()
{
#if VALUE == 42
	std::cout << "value is 42\n";
#endif

#undef VALUE

	const int VALUE = 43;

	std::cout << VALUE;

	PrintMessage("Hello");


#ifndef TEST // #if !defined(TEST)
	std::cout << "TEST is not defined" << '\n';
#endif


	std::cout << add(50, 10);
}