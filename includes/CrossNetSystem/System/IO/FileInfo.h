/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_FILEINFO_H__
#define __SYSTEM_IO_FILEINFO_H__

#ifndef CN_NO_SYSTEM_IO_FILEINFO
#include "CrossNetSystem/System/IO/FileSystemInfo.h"

namespace System
{
    namespace IO
    {
        class FileStream;
        struct FileMode;

        class FileInfo : public ::System::IO::FileSystemInfo
        {
            CN_DYNAMIC_ID()
            public:
            ::System::String * _name;
            virtual void __Trace__(unsigned char currentMark);
            public:
            void __ctor__(::System::String * fileName);
            static ::System::IO::FileInfo * __Create__(::System::String * fileName);
            public:
            void __ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
            static ::System::IO::FileInfo * __Create__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
            public:
            void __ctor__(::System::String * fullPath, ::System::Boolean ignoreThis);
            static ::System::IO::FileInfo * __Create__(::System::String * fullPath, ::System::Boolean ignoreThis);
            public:
            ::System::String * get_Name();
            public:
            ::System::Int64 get_Length();
            public:
            ::System::String * get_DirectoryName();
            public:
            ::System::IO::DirectoryInfo * get_Directory();
            public:
            ::System::Boolean get_IsReadOnly();
            public:
            ::System::Boolean set_IsReadOnly(::System::Boolean value);
            public:
            ::System::Security::AccessControl::FileSecurity * GetAccessControl();
            public:
            ::System::Security::AccessControl::FileSecurity * GetAccessControl(::System::Security::AccessControl::AccessControlSections includeSections);
            public:
            ::System::Void SetAccessControl(::System::Security::AccessControl::FileSecurity * fileSecurity);
            public:
            ::System::IO::StreamReader * OpenText();
            public:
            ::System::IO::StreamWriter * CreateText();
            public:
            ::System::IO::StreamWriter * AppendText();
            public:
            ::System::IO::FileInfo * CopyTo(::System::String * destFileName);
            public:
            ::System::IO::FileInfo * CopyTo(::System::String * destFileName, ::System::Boolean overwrite);
            public:
            ::System::IO::FileStream * Create();
            public:
            ::System::Void Delete();
            public:
            ::System::Void Decrypt();
            public:
            ::System::Void Encrypt();
            public:
            ::System::Boolean get_Exists();
            public:
            ::System::IO::FileStream * Open(::System::IO::FileMode mode);
            public:
            ::System::IO::FileStream * Open(::System::IO::FileMode mode, ::System::IO::FileAccess access);
            public:
            ::System::IO::FileStream * Open(::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share);
            public:
            ::System::IO::FileStream * OpenRead();
            public:
            ::System::IO::FileStream * OpenWrite();
            public:
            ::System::Void MoveTo(::System::String * destFileName);
            public:
            ::System::IO::FileInfo * Replace(::System::String * destinationFileName, ::System::String * destinationBackupFileName);
            public:
            ::System::IO::FileInfo * Replace(::System::String * destinationFileName, ::System::String * destinationBackupFileName, ::System::Boolean ignoreMetadataErrors);
            public:
            ::System::String * ToString();
            public:
            static ::System::IO::FileInfo * __Create__();
            public:
            static void __CreateInterfaceMap__();
        };
    }
}
#endif

#endif