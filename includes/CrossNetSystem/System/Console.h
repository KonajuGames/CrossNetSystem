/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_CONSOLE_H__
#define __SYSTEM_CONSOLE_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_CONSOLE

namespace System
{
    namespace IO
    {
        class TestWriter;
    }

	class Console
	{
	public:
        CN_DYNAMIC_ID()

        static System::Int32 get_BufferWidth()
        {
            return (1000);
        }

        static void Write(System::String * s1)
        {
            const System::Char * text = s1->__ToCString__();
            wprintf(text);
        }

        static void Write(System::Char c1)
        {
            System::Char  text[16];
            _snwprintf_s(text, CN_ARRAY_SIZE(text), CN_ARRAY_SIZE(text), L"%c", c1);
            wprintf(text);
        }

        static void Write(System::Int32 i1)
        {
            System::Char  text[16];
            _snwprintf_s(text, CN_ARRAY_SIZE(text), CN_ARRAY_SIZE(text), L"%d", i1);
            wprintf(text);
        }

        static void WriteLine()
        {
            wprintf(L"\n");
        }

        static void WriteLine(System::String * s1)
        {
            const System::Char * text = s1->__ToCString__();
            wprintf(text);
            wprintf(L"\n");
        }

        static void WriteLine(System::Char c1)
        {
            System::Char  text[16];
            _snwprintf_s(text, CN_ARRAY_SIZE(text), CN_ARRAY_SIZE(text), L"%c\n", c1);
            wprintf(text);
        }

        static void WriteLine(System::Int32 i1)
        {
            System::Char  text[16];
            _snwprintf_s(text, CN_ARRAY_SIZE(text), CN_ARRAY_SIZE(text), L"%d\n", i1);
            wprintf(text);
        }

        static void WriteLine(System::UInt32 i1)
        {
            System::Char  text[16];
            _snwprintf_s(text, CN_ARRAY_SIZE(text), CN_ARRAY_SIZE(text), L"%d\n", i1);
            wprintf(text);
        }

        static void WriteLine(System::Single s1)
        {
            System::Char    text[32];
            _snwprintf_s(text, CN_ARRAY_SIZE(text), CN_ARRAY_SIZE(text), L"%f\n", s1);
            wprintf(text);
        }

        static void WriteLine(System::Int64 i1)
        {
            System::Char  text[32];
            _snwprintf_s(text, CN_ARRAY_SIZE(text), CN_ARRAY_SIZE(text), L"%ld\n", i1);
            wprintf(text);
        }

        static void WriteLine(System::UInt64 i1)
        {
            System::Char  text[32];
            _snwprintf_s(text, CN_ARRAY_SIZE(text), CN_ARRAY_SIZE(text), L"%ld\n", i1);
            wprintf(text);
        }

        static void WriteLine(System::Object * o1)
        {
            System::String * s1 = o1->ToString();
            WriteLine(s1);
        }

        static void WriteLine(System::String * s1, System::String * s2)
        {
            Write(s1);
            WriteLine(s2);
        }

        static void WriteLine(System::Object * o1, System::Object * o2)
        {
            System::String * s1 = o1->ToString();
            System::String * s2 = o2->ToString();
            WriteLine(s1, s2);
        }

        static void WriteLine(System::String * s1, System::String * s2, System::String * s3)
        {
            Write(s1);
            Write(s2);
            WriteLine(s3);
        }

        static void WriteLine(System::Object * o1, System::Object * o2, System::Object * o3)
        {
            System::String * s1 = o1->ToString();
            System::String * s2 = o2->ToString();
            System::String * s3 = o3->ToString();
            WriteLine(s1, s2, s3);
        }

        static void WriteLine(System::String * s1, System::String * s2, System::String * s3, System::String * s4)
        {
            Write(s1);
            Write(s2);
            Write(s3);
            WriteLine(s4);
        }

        static void WriteLine(System::Object * o1, System::Object * o2, System::Object * o3, System::Object * o4)
        {
            System::String * s1 = o1->ToString();
            System::String * s2 = o2->ToString();
            System::String * s3 = o3->ToString();
            System::String * s4 = o4->ToString();
            WriteLine(s1, s2, s3, s4);
        }

        static System::String * ReadLine()
        {
            System::Char    text[2048];
            wscanf_s(L"%2047s", text, CN_ARRAY_SIZE(text));
            return (System::String::__Create__(text));
        }

        // Incorrect interface / implementation
        //  TODO:   Implement this correctly...
        static void ReadKey(System::Boolean /*b*/)
        {
            System::Char    c;
            wscanf_s(L"%c", &c);
        }

        static System::IO::TextWriter * get_Error();
        static System::IO::TextWriter * get_Out();
	};
}

#endif

#endif