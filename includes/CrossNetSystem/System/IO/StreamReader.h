/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_STREAMREADER_H__
#define __SYSTEM_IO_STREAMREADER_H__

#ifndef CN_NO_SYSTEM_IO_STREAMREADER
namespace System
{
    namespace IO
    {
        class StreamReader : public System::Object
	    {
	    public:
            CN_DYNAMIC_ID()

            static StreamReader * __Create__(::System::IO::Stream *, System::Text::Encoding *);
            static StreamReader * __Create__(::System::String *);
            static StreamReader * __Create__(::System::String *, System::Text::Encoding *);

            virtual void Flush();
	    };
    }
}
#endif

#endif