/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_TEXTWRITER_H__
#define __SYSTEM_IO_TEXTWRITER_H__

#ifndef CN_NO_SYSTEM_IO_TEXTWRITER

#include "CrossNetRuntime/System/IDisposable.h"

#include "CrossNetSystem/System/MarshalByRefObject.h"

namespace System
{
    namespace IO
    {
        class TextWriter : public ::System::MarshalByRefObject
        {
            CN_DYNAMIC_ID()
            public:
            static ::System::String * InitialNewLine;
            public:
            static ::System::IO::TextWriter * Null;
            public:
            ::System::Array__G< ::System::Char > * CoreNewLine;
            public:
            ::System::IFormatProvider * InternalFormatProvider;
            public:
            void __ctor__();
            public:
            void __ctor__(::System::IFormatProvider * formatProvider);
            public:
            virtual ::System::IFormatProvider * get_FormatProvider();
            public:
            virtual ::System::Void Close();
            public:
            virtual ::System::Void Dispose(::System::Boolean disposing);
            public:
            ::System::Void Dispose();
            public:
            virtual ::System::Void Flush();
            public:
            virtual ::System::Text::Encoding * get_Encoding() = 0;
            public:
            virtual ::System::String * get_NewLine();
            public:
            virtual ::System::String * set_NewLine(::System::String * value);
            public:
            static ::System::IO::TextWriter * Synchronized(::System::IO::TextWriter * writer);
            public:
            virtual ::System::Void Write(::System::Char value);
            public:
            virtual ::System::Void Write(::System::Array__G< ::System::Char > * buffer);
            public:
            virtual ::System::Void Write(::System::Array__G< ::System::Char > * buffer, ::System::Int32 index, ::System::Int32 count);
            public:
            virtual ::System::Void Write(::System::Boolean value);
            public:
            virtual ::System::Void Write(::System::Int32 value);
            public:
            virtual ::System::Void Write(::System::UInt32 value);
            public:
            virtual ::System::Void Write(::System::Int64 value);
            public:
            virtual ::System::Void Write(::System::UInt64 value);
            public:
            virtual ::System::Void Write(::System::Single value);
            public:
            virtual ::System::Void Write(::System::Double value);
            public:
            virtual ::System::Void Write(::System::Decimal value);
            public:
            virtual ::System::Void Write(::System::String * value);
            public:
            virtual ::System::Void Write(::System::Object * value);
            public:
            virtual ::System::Void Write(::System::String * format, ::System::Object * arg0);
            public:
            virtual ::System::Void Write(::System::String * format, ::System::Object * arg0, ::System::Object * arg1);
            public:
            virtual ::System::Void Write(::System::String * format, ::System::Object * arg0, ::System::Object * arg1, ::System::Object * arg2);
            public:
            virtual ::System::Void Write(::System::String * format, ::System::Array__G< ::System::Object * > * arg);
            public:
            virtual ::System::Void WriteLine();
            public:
            virtual ::System::Void WriteLine(::System::Char value);
            public:
            virtual ::System::Void WriteLine(::System::Array__G< ::System::Char > * buffer);
            public:
            virtual ::System::Void WriteLine(::System::Array__G< ::System::Char > * buffer, ::System::Int32 index, ::System::Int32 count);
            public:
            virtual ::System::Void WriteLine(::System::Boolean value);
            public:
            virtual ::System::Void WriteLine(::System::Int32 value);
            public:
            virtual ::System::Void WriteLine(::System::UInt32 value);
            public:
            virtual ::System::Void WriteLine(::System::Int64 value);
            public:
            virtual ::System::Void WriteLine(::System::UInt64 value);
            public:
            virtual ::System::Void WriteLine(::System::Single value);
            public:
            virtual ::System::Void WriteLine(::System::Double value);
            public:
            virtual ::System::Void WriteLine(::System::Decimal value);
            public:
            virtual ::System::Void WriteLine(::System::String * value);
            public:
            virtual ::System::Void WriteLine(::System::Object * value);
            public:
            virtual ::System::Void WriteLine(::System::String * format, ::System::Object * arg0);
            public:
            virtual ::System::Void WriteLine(::System::String * format, ::System::Object * arg0, ::System::Object * arg1);
            public:
            virtual ::System::Void WriteLine(::System::String * format, ::System::Object * arg0, ::System::Object * arg1, ::System::Object * arg2);
            public:
            virtual ::System::Void WriteLine(::System::String * format, ::System::Array__G< ::System::Object * > * arg);
            public:
            static void Static__ctor__();
            class Wrapper__IDisposable : public ::System::IDisposable
            {
                public:
                public:
                virtual ::System::Void Dispose(void * __passed_instance__);
                CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
            };
            public:
            static void __CreateInterfaceMap__();
        };
    }
}
#endif

#endif