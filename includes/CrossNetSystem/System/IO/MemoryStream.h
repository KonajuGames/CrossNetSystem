/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_MEMORYSTREAM_H__
#define __SYSTEM_IO_MEMORYSTREAM_H__

#ifndef CN_NO_SYSTEM_IO_MEMORYSTREAM
#include "CrossNetSystem/System/IO/Stream.h"
namespace System
{
    namespace IO
    {
        class MemoryStream : public ::System::IO::Stream
        {
            CN_DYNAMIC_ID()
            public:
            static ::System::Int32 MemStreamMaxLength;
            public:
            ::System::Array__G< ::System::Byte > * _buffer;
            public:
            ::System::Int32 _origin;
            public:
            ::System::Int32 _position;
            public:
            ::System::Int32 _length;
            public:
            ::System::Int32 _capacity;
            public:
            ::System::Boolean _expandable;
            public:
            ::System::Boolean _writable;
            public:
            ::System::Boolean _exposable;
            public:
            ::System::Boolean _isOpen;
            virtual void __Trace__(unsigned char currentMark);
            public:
            void __ctor__();
            static ::System::IO::MemoryStream * __Create__();
            public:
            void __ctor__(::System::Int32 capacity);
            static ::System::IO::MemoryStream * __Create__(::System::Int32 capacity);
            public:
            void __ctor__(::System::Array__G< ::System::Byte > * buffer);
            static ::System::IO::MemoryStream * __Create__(::System::Array__G< ::System::Byte > * buffer);
            public:
            void __ctor__(::System::Array__G< ::System::Byte > * buffer, ::System::Boolean writable);
            static ::System::IO::MemoryStream * __Create__(::System::Array__G< ::System::Byte > * buffer, ::System::Boolean writable);
            public:
            void __ctor__(::System::Array__G< ::System::Byte > * buffer, ::System::Int32 index, ::System::Int32 count);
            static ::System::IO::MemoryStream * __Create__(::System::Array__G< ::System::Byte > * buffer, ::System::Int32 index, ::System::Int32 count);
            public:
            void __ctor__(::System::Array__G< ::System::Byte > * buffer, ::System::Int32 index, ::System::Int32 count, ::System::Boolean writable);
            static ::System::IO::MemoryStream * __Create__(::System::Array__G< ::System::Byte > * buffer, ::System::Int32 index, ::System::Int32 count, ::System::Boolean writable);
            public:
            void __ctor__(::System::Array__G< ::System::Byte > * buffer, ::System::Int32 index, ::System::Int32 count, ::System::Boolean writable, ::System::Boolean publiclyVisible);
            static ::System::IO::MemoryStream * __Create__(::System::Array__G< ::System::Byte > * buffer, ::System::Int32 index, ::System::Int32 count, ::System::Boolean writable, ::System::Boolean publiclyVisible);
            public:
            ::System::Boolean get_CanRead();
            public:
            ::System::Boolean get_CanSeek();
            public:
            ::System::Boolean get_CanWrite();
            public:
            ::System::Void Dispose(::System::Boolean disposing);
            public:
            ::System::Boolean EnsureCapacity(::System::Int32 value);
            public:
            ::System::Void Flush();
            public:
            virtual ::System::Array__G< ::System::Byte > * GetBuffer();
            public:
            ::System::Array__G< ::System::Byte > * InternalGetBuffer();
            public:
            ::System::Void InternalGetOriginAndLength(::System::Int32 * origin, ::System::Int32 * length);
            public:
            ::System::Int32 InternalGetPosition();
            public:
            ::System::Int32 InternalReadInt32();
            public:
            ::System::Int32 InternalEmulateRead(::System::Int32 count);
            public:
            virtual ::System::Int32 get_Capacity();
            public:
            virtual ::System::Int32 set_Capacity(::System::Int32 value);
            public:
            ::System::Int64 get_Length();
            public:
            ::System::Int64 get_Position();
            public:
            ::System::Int64 set_Position(::System::Int64 value);
            public:
            ::System::Int32 Read(::System::Array__G< ::System::Byte > * buffer, ::System::Int32 offset, ::System::Int32 count);
            public:
            ::System::Int32 ReadByte();
            public:
            ::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin loc);
            public:
            ::System::Void SetLength(::System::Int64 value);
            public:
            virtual ::System::Array__G< ::System::Byte > * ToArray();
            public:
            ::System::Void Write(::System::Array__G< ::System::Byte > * buffer, ::System::Int32 offset, ::System::Int32 count);
            public:
            ::System::Void WriteByte(::System::Byte value);
            public:
            virtual ::System::Void WriteTo(::System::IO::Stream * stream);
            public:
            static void Static__ctor__();
            public:
            static void __CreateInterfaceMap__();
        };
    }
}
#endif

#endif