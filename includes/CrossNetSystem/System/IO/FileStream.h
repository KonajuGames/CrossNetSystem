/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_FILESTREAM_H__
#define __SYSTEM_IO_FILESTREAM_H__

#ifndef CN_NO_SYSTEM_IO_FILESTREAM
namespace System
{
    namespace IO
    {
        class FileStream : public System::Object
	    {
	    public:
            CN_DYNAMIC_ID()

            static FileStream * __Create__(::System::String *, System::IO::FileMode);
            static FileStream * __Create__(::System::String *, System::IO::FileMode, System::IO::FileAccess);
	    };
    }
}
#endif

#endif