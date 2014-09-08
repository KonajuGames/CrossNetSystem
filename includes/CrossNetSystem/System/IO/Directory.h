/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_DIRECTORY_H__
#define __SYSTEM_IO_DIRECTORY_H__

#ifndef CN_NO_SYSTEM_IO_DIRECTORY
#include "CrossNetRuntime/System/Object.h"

namespace System
{
    namespace IO
    {
        class Directory : public ::System::Object
        {
            CN_DYNAMIC_ID()
            public:
            static ::System::Int32 FILE_ATTRIBUTE_DIRECTORY;
            public:
            static ::System::Int32 GENERIC_WRITE;
            public:
            static ::System::Int32 FILE_SHARE_WRITE;
            public:
            static ::System::Int32 FILE_SHARE_DELETE;
            public:
            static ::System::Int32 OPEN_EXISTING;
            public:
            static ::System::Int32 FILE_FLAG_BACKUP_SEMANTICS;
            virtual void __Trace__(unsigned char currentMark);
            public:
            static ::System::IO::DirectoryInfo * GetParent(::System::String * path);
            public:
            static ::System::IO::DirectoryInfo * CreateDirectory(::System::String * path);
            public:
            static ::System::IO::DirectoryInfo * CreateDirectory(::System::String * path, ::System::Security::AccessControl::DirectorySecurity * directorySecurity);
            public:
            static ::System::String * GetDemandDir(::System::String * fullPath, ::System::Boolean thisDirOnly);
            public:
            static ::System::Void InternalCreateDirectory(::System::String * fullPath, ::System::String * path, ::System::Security::AccessControl::DirectorySecurity * dirSecurity);
            public:
            static ::System::Boolean Exists(::System::String * path);
            public:
            static ::System::Boolean InternalExists(::System::String * path);
            public:
            static ::System::Void SetCreationTime(::System::String * path, ::System::DateTime creationTime);
            public:
            static ::System::Void SetCreationTimeUtc(::System::String * path, ::System::DateTime creationTimeUtc);
            public:
            static ::System::DateTime GetCreationTime(::System::String * path);
            public:
            static ::System::DateTime GetCreationTimeUtc(::System::String * path);
            public:
            static ::System::Void SetLastWriteTime(::System::String * path, ::System::DateTime lastWriteTime);
            public:
            static ::System::Void SetLastWriteTimeUtc(::System::String * path, ::System::DateTime lastWriteTimeUtc);
            public:
            static ::System::DateTime GetLastWriteTime(::System::String * path);
            public:
            static ::System::DateTime GetLastWriteTimeUtc(::System::String * path);
            public:
            static ::System::Void SetLastAccessTime(::System::String * path, ::System::DateTime lastAccessTime);
            public:
            static ::System::Void SetLastAccessTimeUtc(::System::String * path, ::System::DateTime lastAccessTimeUtc);
            public:
            static ::System::DateTime GetLastAccessTime(::System::String * path);
            public:
            static ::System::DateTime GetLastAccessTimeUtc(::System::String * path);
            public:
            static ::System::Security::AccessControl::DirectorySecurity * GetAccessControl(::System::String * path);
            public:
            static ::System::Security::AccessControl::DirectorySecurity * GetAccessControl(::System::String * path, ::System::Security::AccessControl::AccessControlSections includeSections);
            public:
            static ::System::Void SetAccessControl(::System::String * path, ::System::Security::AccessControl::DirectorySecurity * directorySecurity);
            public:
            static ::System::Array__G< ::System::String * > * GetFiles(::System::String * path);
            public:
            static ::System::Array__G< ::System::String * > * GetFiles(::System::String * path, ::System::String * searchPattern);
            public:
            static ::System::Array__G< ::System::String * > * GetFiles(::System::String * path, ::System::String * searchPattern, ::System::IO::SearchOption searchOption);
            public:
            static ::System::Array__G< ::System::String * > * GetDirectories(::System::String * path);
            public:
            static ::System::Array__G< ::System::String * > * GetDirectories(::System::String * path, ::System::String * searchPattern);
            public:
            static ::System::Array__G< ::System::String * > * GetDirectories(::System::String * path, ::System::String * searchPattern, ::System::IO::SearchOption searchOption);
            public:
            static ::System::Array__G< ::System::String * > * GetFileSystemEntries(::System::String * path);
            public:
            static ::System::Array__G< ::System::String * > * GetFileSystemEntries(::System::String * path, ::System::String * searchPattern);
            public:
            static ::System::Array__G< ::System::String * > * GetFileSystemEntries(::System::String * path, ::System::String * searchPattern, ::System::IO::SearchOption searchOption);
            public:
            static ::System::Array__G< ::System::String * > * InternalGetFileDirectoryNames(::System::String * path, ::System::String * userPathOriginal, ::System::String * searchPattern, ::System::Boolean includeFiles, ::System::Boolean includeDirs, ::System::IO::SearchOption searchOption);
            public:
            static ::System::Array__G< ::System::String * > * GetLogicalDrives();
            public:
            static ::System::String * GetDirectoryRoot(::System::String * path);
            public:
            static ::System::String * InternalGetDirectoryRoot(::System::String * path);
            public:
            static ::System::String * GetCurrentDirectory();
            public:
            static ::System::Void SetCurrentDirectory(::System::String * path);
            public:
            static ::System::Void Move(::System::String * sourceDirName, ::System::String * destDirName);
            public:
            static ::System::Void Delete(::System::String * path);
            public:
            static ::System::Void Delete(::System::String * path, ::System::Boolean recursive);
            public:
            static ::System::Void Delete(::System::String * fullPath, ::System::String * userPath, ::System::Boolean recursive);
            public:
            static ::System::Void DeleteHelper(::System::String * fullPath, ::System::String * userPath, ::System::Boolean recursive);
            public:
            static ::Microsoft::Win32::SafeHandles::SafeFileHandle * OpenHandle(::System::String * path);
            public:
            static void Static__ctor__();
            public:
            static void __CreateInterfaceMap__();
        };
    }
}
#endif

#endif