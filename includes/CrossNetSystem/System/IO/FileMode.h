/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_FILEMODE_H__
#define __SYSTEM_IO_FILEMODE_H__

#ifndef CN_NO_SYSTEM_IO_FILEMODE
namespace System
{
    namespace IO
    {
        BEGIN_DECLARE_ENUM(FileMode, ::System::Int32, 1)
            static const ::System::Int32 CreateNew = 1;
            static const ::System::Int32 Create = 2;
            static const ::System::Int32 Open = 3;
            static const ::System::Int32 OpenOrCreate = 4;
            static const ::System::Int32 Truncate = 5;
            static const ::System::Int32 Append = 6;
        END_DECLARE_ENUM
    }
}
#endif

#endif