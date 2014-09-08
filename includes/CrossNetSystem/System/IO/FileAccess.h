/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_FILEACCESS_H__
#define __SYSTEM_IO_FILEACCESS_H__

#ifndef CN_NO_SYSTEM_IO_FILEACCESS
namespace System
{
    namespace IO
    {
        BEGIN_DECLARE_ENUM(FileAccess, ::System::Int32, 1)
            static const ::System::Int32 Read = 1;
            static const ::System::Int32 Write = 2;
            static const ::System::Int32 ReadWrite = 3;
        END_DECLARE_ENUM
    }
}
#endif

#endif