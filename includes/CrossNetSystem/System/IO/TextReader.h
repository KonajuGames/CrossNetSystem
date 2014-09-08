/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_TEXTREADER_H__
#define __SYSTEM_IO_TEXTREADER_H__

#ifndef CN_NO_SYSTEM_IO_TEXTREADER
namespace System
{
    namespace IO
    {
        class TextReader : public System::Object
	    {
	    public:
            CN_DYNAMIC_ID()

            virtual void Close();
            virtual System::String * ReadLine();
            virtual System::String * ReadToEnd();
	    };
    }
}
#endif

#endif