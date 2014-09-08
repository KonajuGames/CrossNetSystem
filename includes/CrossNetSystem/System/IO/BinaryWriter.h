/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_BINARYWRITER_H__
#define __SYSTEM_IO_BINARYWRITER_H__

#ifndef CN_NO_SYSTEM_IO_BINARYWRITER
namespace System
{
    namespace IO
    {
        class Stream;

        class BinaryWriter : public System::Object
	    {
	    public:
            CN_DYNAMIC_ID()

            static BinaryWriter * __Create__(Stream *);

            virtual void Flush();
            virtual void Close();
            virtual System::String * ReadLine();
            virtual System::String * ReadToEnd();

            virtual void Write(System::Boolean);
            virtual void Write(System::Byte);
            virtual void Write(System::Char);
            virtual void Write(System::Decimal);
            virtual void Write(System::Double);
            virtual void Write(System::Int16);
            virtual void Write(System::Int32);
            virtual void Write(System::Int64);
            virtual void Write(System::SByte);
            virtual void Write(System::Single);
            virtual void Write(System::String *);
            virtual void Write(System::UInt16);
            virtual void Write(System::UInt32);
            virtual void Write(System::UInt64);
	    };
    }
}
#endif

#endif