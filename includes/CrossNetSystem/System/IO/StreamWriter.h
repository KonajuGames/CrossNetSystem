/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_STREAMWRITER_H__
#define __SYSTEM_IO_STREAMWRITER_H__

#ifndef CN_NO_SYSTEM_IO_STREAMWRITER
#include "CrossNetSystem/System/IO/StreamWriter.h"
namespace System
{
    namespace IO
    {
        class StreamWriter : public System::IO::TextWriter
	    {
	    public:
            CN_DYNAMIC_ID()

            static StreamWriter * __Create__(::System::IO::Stream *, System::Text::Encoding *);
            static StreamWriter * __Create__(::System::String *, System::Boolean);

            System::IO::Stream * get_BaseStream();
	    };
    }
}
#endif

#endif