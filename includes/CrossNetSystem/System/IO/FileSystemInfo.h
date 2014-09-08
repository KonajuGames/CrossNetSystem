/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_FILESYSTEMINFO_H__
#define __SYSTEM_IO_FILESYSTEMINFO_H__

#ifndef CN_NO_SYSTEM_IO_FILESYSTEMINFO
#include "CrossNetRuntime/System/Object.h"

namespace System
{
    namespace IO
    {
        class FileSystemInfo : public ::System::MarshalByRefObject
        {
            CN_DYNAMIC_ID()
            public:
            static ::System::Int32 ERROR_INVALID_PARAMETER;
            public:
            static ::System::Int32 ERROR_ACCESS_DENIED;
            public:
            //::Microsoft::Win32::Win32Native__WIN32_FILE_ATTRIBUTE_DATA _data;
            public:
            ::System::Int32 _dataInitialised;
            public:
            ::System::String * FullPath;
            public:
            ::System::String * OriginalPath;
            virtual void __Trace__(unsigned char currentMark);
            public:
            void __ctor__();
            public:
            void __ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
            public:
            virtual ::System::String * get_FullName();
            public:
            ::System::String * get_Extension();
            public:
            virtual ::System::String * get_Name() = 0;
            public:
            virtual ::System::Boolean get_Exists() = 0;
            public:
            virtual ::System::Void Delete() = 0;
            public:
            ::System::DateTime get_CreationTime();
            public:
            ::System::Void set_CreationTime(::System::DateTime value);
            public:
            ::System::DateTime get_CreationTimeUtc();
            public:
            ::System::Void set_CreationTimeUtc(::System::DateTime value);
            public:
            ::System::DateTime get_LastAccessTime();
            public:
            ::System::Void set_LastAccessTime(::System::DateTime value);
            public:
            ::System::DateTime get_LastAccessTimeUtc();
            public:
            ::System::Void set_LastAccessTimeUtc(::System::DateTime value);
            public:
            ::System::DateTime get_LastWriteTime();
            public:
            ::System::Void set_LastWriteTime(::System::DateTime value);
            public:
            ::System::DateTime get_LastWriteTimeUtc();
            public:
            ::System::Void set_LastWriteTimeUtc(::System::DateTime value);
            public:
            ::System::Void Refresh();
            public:
            ::System::IO::FileAttributes get_Attributes();
            public:
            ::System::IO::FileAttributes set_Attributes(::System::IO::FileAttributes value);
            public:
            virtual ::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
            public:
            static void Static__ctor__();
            class Wrapper__ISerializable : public ::System::Runtime::Serialization::ISerializable
            {
                public:
                public:
                virtual ::System::Void GetObjectData(void * __passed_instance__, ::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
                CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
            };
            public:
            static void __CreateInterfaceMap__();
        };
    }
}
#endif

#endif