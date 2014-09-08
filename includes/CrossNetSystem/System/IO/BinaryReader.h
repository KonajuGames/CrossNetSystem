/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IO_BINARYREADER_H__
#define __SYSTEM_IO_BINARYREADER_H__

#ifndef CN_NO_SYSTEM_IO_BINARYREADER
namespace System
{
    namespace IO
    {
        class Stream;

        class BinaryReader : public System::Object
	    {
	    public:
            CN_DYNAMIC_ID()

            static BinaryReader * __Create__(Stream *);

            virtual void Close();
            virtual System::String * ReadLine();
            virtual System::String * ReadToEnd();

            virtual System::Boolean ReadBoolean();
            virtual System::Byte ReadByte();
            virtual System::Char ReadChar();
            virtual System::Decimal ReadDecimal();
            virtual System::Double ReadDouble();
            virtual System::Int16 ReadInt16();
            virtual System::Int32 ReadInt32();
            virtual System::Int64 ReadInt64();
            virtual System::SByte ReadSByte();
            virtual System::Single ReadSingle();
            virtual System::String * ReadString();
            virtual System::UInt16 ReadUInt16();
            virtual System::UInt32 ReadUInt32();
            virtual System::UInt64 ReadUInt64();
	    };
    }
}
#endif

#endif