/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_DIRECTORYINFO_H__
#define __SYSTEM_IO_DIRECTORYINFO_H__

#ifndef CN_NO_SYSTEM_IO_DIRECTORYINFO
#include "CrossNetSystem/System/IO/FileSystemInfo.h"

namespace System
{
    namespace IO
    {
        class DirectoryInfo : public ::System::IO::FileSystemInfo
        {
            CN_DYNAMIC_ID()
            public:
            ::System::Array__G< ::System::String * > * demandDir;
            virtual void __Trace__(unsigned char currentMark);
            public:
            void __ctor__(::System::String * path);
            static ::System::IO::DirectoryInfo * __Create__(::System::String * path);
            public:
            void __ctor__(::System::String * fullPath, ::System::Boolean junk);
            static ::System::IO::DirectoryInfo * __Create__(::System::String * fullPath, ::System::Boolean junk);
            public:
            void __ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
            static ::System::IO::DirectoryInfo * __Create__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
            public:
            ::System::String * get_Name();
            public:
            ::System::IO::DirectoryInfo * get_Parent();
            public:
            ::System::IO::DirectoryInfo * CreateSubdirectory(::System::String * path);
            public:
            ::System::IO::DirectoryInfo * CreateSubdirectory(::System::String * path, ::System::Security::AccessControl::DirectorySecurity * directorySecurity);
            public:
            ::System::Void Create();
            public:
            ::System::Void Create(::System::Security::AccessControl::DirectorySecurity * directorySecurity);
            public:
            ::System::Boolean get_Exists();
            public:
            ::System::Security::AccessControl::DirectorySecurity * GetAccessControl();
            public:
            ::System::Security::AccessControl::DirectorySecurity * GetAccessControl(::System::Security::AccessControl::AccessControlSections includeSections);
            public:
            ::System::Void SetAccessControl(::System::Security::AccessControl::DirectorySecurity * directorySecurity);
            public:
            ::System::Array__G< ::System::IO::FileInfo * > * GetFiles(::System::String * searchPattern);
            public:
            ::System::String * FixupFileDirFullPath(::System::String * fileDirUserPath);
            public:
            ::System::Array__G< ::System::IO::FileInfo * > * GetFiles(::System::String * searchPattern, ::System::IO::SearchOption searchOption);
            public:
            ::System::Array__G< ::System::IO::FileInfo * > * GetFiles();
            public:
            ::System::Array__G< ::System::IO::DirectoryInfo * > * GetDirectories();
            public:
            ::System::Array__G< ::System::IO::FileSystemInfo * > * GetFileSystemInfos(::System::String * searchPattern);
            public:
            ::System::Array__G< ::System::IO::FileSystemInfo * > * GetFileSystemInfos(::System::String * searchPattern, ::System::IO::SearchOption searchOption);
            public:
            ::System::Array__G< ::System::IO::FileSystemInfo * > * GetFileSystemInfos();
            public:
            ::System::Array__G< ::System::IO::DirectoryInfo * > * GetDirectories(::System::String * searchPattern);
            public:
            ::System::Array__G< ::System::IO::DirectoryInfo * > * GetDirectories(::System::String * searchPattern, ::System::IO::SearchOption searchOption);
            public:
            ::System::IO::DirectoryInfo * get_Root();
            public:
            ::System::Void MoveTo(::System::String * destDirName);
            public:
            ::System::Void Delete();
            public:
            ::System::Void Delete(::System::Boolean recursive);
            public:
            ::System::String * ToString();
            public:
            static ::System::IO::DirectoryInfo * __Create__();
            public:
            static void __CreateInterfaceMap__();
        };
    }
}
#endif

#endif