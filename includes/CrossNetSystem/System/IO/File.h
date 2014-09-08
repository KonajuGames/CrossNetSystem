/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_FILE_H__
#define __SYSTEM_IO_FILE_H__

#ifndef CN_NO_SYSTEM_IO_FILE
namespace System
{
    namespace IO
    {
        class File
	    {
	    public:
            CN_DYNAMIC_ID()

            static System::Boolean Exists(System::String * fileName);
            static System::Boolean Delete(System::String * fileName);
	    };
    }
}
#endif

#endif