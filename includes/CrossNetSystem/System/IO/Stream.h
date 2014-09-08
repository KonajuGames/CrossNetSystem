/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_STREAM_H__
#define __SYSTEM_IO_STREAM_H__

#ifndef CN_NO_SYSTEM_IO_STREAM
#include "CrossNetSystem/System/MarshalByRefObject.h"
namespace System
{
    namespace IO
    {
        class Stream : public ::System::MarshalByRefObject
        {
            CN_DYNAMIC_ID()
            public:
            static ::System::IO::Stream * Null;
            public:
            ::System::IO::Stream__ReadDelegate * _readDelegate;
            public:
            ::System::IO::Stream__WriteDelegate * _writeDelegate;
            public:
            ::System::Threading::AutoResetEvent * _asyncActiveEvent;
            public:
            ::System::Int32 _asyncActiveCount;
            virtual void __Trace__(unsigned char currentMark);
            public:
            virtual ::System::Boolean get_CanRead() = 0;
            public:
            virtual ::System::Boolean get_CanSeek() = 0;
            public:
            virtual ::System::Boolean get_CanTimeout();
            public:
            virtual ::System::Boolean get_CanWrite() = 0;
            public:
            virtual ::System::Int64 get_Length() = 0;
            public:
            virtual ::System::Int64 get_Position() = 0;
            public:
            virtual ::System::Int64 set_Position(::System::Int64 value) = 0;
            public:
            virtual ::System::Int32 get_ReadTimeout();
            public:
            virtual ::System::Int32 set_ReadTimeout(::System::Int32 value);
            public:
            virtual ::System::Int32 get_WriteTimeout();
            public:
            virtual ::System::Int32 set_WriteTimeout(::System::Int32 value);
            public:
            virtual ::System::Void Close();
            public:
            ::System::Void Dispose();
            public:
            virtual ::System::Void Dispose(::System::Boolean disposing);
            public:
            ::System::Void _CloseAsyncActiveEvent(::System::Int32 asyncActiveCount);
            public:
            virtual ::System::Void Flush() = 0;
            public:
            virtual ::System::Threading::WaitHandle * CreateWaitHandle();
            public:
            virtual ::System::IAsyncResult * BeginRead(::System::Array__G< ::System::Byte > * buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback * callback, ::System::Object * state);
            public:
            virtual ::System::Int32 EndRead(::System::IAsyncResult * asyncResult);
            public:
            virtual ::System::IAsyncResult * BeginWrite(::System::Array__G< ::System::Byte > * buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback * callback, ::System::Object * state);
            public:
            virtual ::System::Void EndWrite(::System::IAsyncResult * asyncResult);
            public:
            virtual ::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin) = 0;
            public:
            virtual ::System::Void SetLength(::System::Int64 value) = 0;
            public:
            virtual ::System::Int32 Read(::System::Array__G< ::System::Byte > * buffer, ::System::Int32 offset, ::System::Int32 count) = 0;
            public:
            virtual ::System::Int32 ReadByte();
            public:
            virtual ::System::Void Write(::System::Array__G< ::System::Byte > * buffer, ::System::Int32 offset, ::System::Int32 count) = 0;
            public:
            virtual ::System::Void WriteByte(::System::Byte value);
            public:
            static ::System::IO::Stream * Synchronized(::System::IO::Stream * stream);
            public:
            void __ctor__();
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