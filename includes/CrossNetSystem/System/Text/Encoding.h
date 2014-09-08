/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_TEXT_ENCODING_H__
#define __SYSTEM_TEXT_ENCODING_H__

#ifndef CN_NO_SYSTEM_TEXT_ENCODING
namespace System
{
    namespace Text
    {
        class DecoderNLS;
        class EncoderNLS;

        class Encoding : public ::System::Object
        {
            CN_DYNAMIC_ID()
            public:
            static ::System::Int32 MIMECONTF_MAILNEWS;
            public:
            static ::System::Int32 MIMECONTF_BROWSER;
            public:
            static ::System::Int32 MIMECONTF_SAVABLE_MAILNEWS;
            public:
            static ::System::Int32 MIMECONTF_SAVABLE_BROWSER;
            public:
            static ::System::Int32 CodePageDefault;
            public:
            static ::System::Int32 CodePageNoOEM;
            public:
            static ::System::Int32 CodePageNoMac;
            public:
            static ::System::Int32 CodePageNoThread;
            public:
            static ::System::Int32 CodePageNoSymbol;
            public:
            static ::System::Int32 CodePageUnicode;
            public:
            static ::System::Int32 CodePageBigEndian;
            public:
            static ::System::Int32 CodePageWindows1252;
            public:
            static ::System::Int32 CodePageMacGB2312;
            public:
            static ::System::Int32 CodePageGB2312;
            public:
            static ::System::Int32 CodePageMacKorean;
            public:
            static ::System::Int32 CodePageDLLKorean;
            public:
            static ::System::Int32 ISO2022JP;
            public:
            static ::System::Int32 ISO2022JPESC;
            public:
            static ::System::Int32 ISO2022JPSISO;
            public:
            static ::System::Int32 ISOKorean;
            public:
            static ::System::Int32 ISOSimplifiedCN;
            public:
            static ::System::Int32 EUCJP;
            public:
            static ::System::Int32 ChineseHZ;
            public:
            static ::System::Int32 DuplicateEUCCN;
            public:
            static ::System::Int32 EUCCN;
            public:
            static ::System::Int32 EUCKR;
            public:
            static ::System::Int32 CodePageASCII;
            public:
            static ::System::Int32 ISO_8859_1;
            public:
            static ::System::Int32 ISCIIAssemese;
            public:
            static ::System::Int32 ISCIIBengali;
            public:
            static ::System::Int32 ISCIIDevanagari;
            public:
            static ::System::Int32 ISCIIGujarathi;
            public:
            static ::System::Int32 ISCIIKannada;
            public:
            static ::System::Int32 ISCIIMalayalam;
            public:
            static ::System::Int32 ISCIIOriya;
            public:
            static ::System::Int32 ISCIIPanjabi;
            public:
            static ::System::Int32 ISCIITamil;
            public:
            static ::System::Int32 ISCIITelugu;
            public:
            static ::System::Int32 GB18030;
            public:
            static ::System::Int32 ISO_8859_8I;
            public:
            static ::System::Int32 ISO_8859_8_Visual;
            public:
            static ::System::Int32 ENC50229;
            public:
            static ::System::Int32 CodePageUTF7;
            public:
            static ::System::Int32 CodePageUTF8;
            public:
            static ::System::Int32 CodePageUTF32;
            public:
            static ::System::Int32 CodePageUTF32BE;
            public:
            static ::System::Text::Encoding * defaultEncoding;
            public:
            static ::System::Text::Encoding * unicodeEncoding;
            public:
            static ::System::Text::Encoding * bigEndianUnicode;
            public:
            static ::System::Text::Encoding * utf7Encoding;
            public:
            static ::System::Text::Encoding * utf8Encoding;
            public:
            static ::System::Text::Encoding * utf32Encoding;
            public:
            static ::System::Text::Encoding * asciiEncoding;
            public:
            static ::System::Text::Encoding * latin1Encoding;
            public:
            static ::System::Collections::Hashtable * encodings;
            public:
            ::System::Int32 m_codePage;
            public:
            ::System::Globalization::CodePageDataItem * dataItem;
            public:
            ::System::Boolean m_deserializedFromEverett;
            public:
            ::System::Boolean m_isReadOnly;
            public:
            ::System::Text::EncoderFallback * encoderFallback;
            public:
            ::System::Text::DecoderFallback * decoderFallback;
            public:
            static ::System::Array__G< ::System::Byte > * emptyByteArray;
            public:
            static ::System::Object * s_InternalSyncObject;
            public:
            void __ctor__();
            public:
            void __ctor__(::System::Int32 codePage);
            public:
            virtual ::System::Void SetDefaultFallbacks();
            public:
            ::System::Void OnDeserializing();
            public:
            ::System::Void OnDeserialized();
            public:
            ::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);
            public:
            ::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);
            public:
            ::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);
            public:
            ::System::Void DeserializeEncoding(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
            public:
            ::System::Void SerializeEncoding(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
            public:
            static ::System::Array__G< ::System::Byte > * Convert(::System::Text::Encoding * srcEncoding, ::System::Text::Encoding * dstEncoding, ::System::Array__G< ::System::Byte > * bytes);
            public:
            static ::System::Array__G< ::System::Byte > * Convert(::System::Text::Encoding * srcEncoding, ::System::Text::Encoding * dstEncoding, ::System::Array__G< ::System::Byte > * bytes, ::System::Int32 index, ::System::Int32 count);
            public:
            static ::System::Object * get_InternalSyncObject();
            public:
            static ::System::Text::Encoding * GetEncoding(::System::Int32 codepage);
            public:
            static ::System::Text::Encoding * GetEncoding(::System::Int32 codepage, ::System::Text::EncoderFallback * encoderFallback, ::System::Text::DecoderFallback * decoderFallback);
            public:
            static ::System::Text::Encoding * GetEncodingRare(::System::Int32 codepage);
            public:
            static ::System::Text::Encoding * GetEncodingCodePage(::System::Int32 CodePage);
            public:
            static ::System::Text::Encoding * GetEncoding(::System::String * name);
            public:
            static ::System::Text::Encoding * GetEncoding(::System::String * name, ::System::Text::EncoderFallback * encoderFallback, ::System::Text::DecoderFallback * decoderFallback);
            public:
            static ::System::Array__G< ::System::Text::EncodingInfo * > * GetEncodings();
            public:
            virtual ::System::Array__G< ::System::Byte > * GetPreamble();
            public:
            ::System::Void GetDataItem();
            public:
            virtual ::System::String * get_BodyName();
            public:
            virtual ::System::String * get_EncodingName();
            public:
            virtual ::System::String * get_HeaderName();
            public:
            virtual ::System::String * get_WebName();
            public:
            virtual ::System::Int32 get_WindowsCodePage();
            public:
            virtual ::System::Boolean get_IsBrowserDisplay();
            public:
            virtual ::System::Boolean get_IsBrowserSave();
            public:
            virtual ::System::Boolean get_IsMailNewsDisplay();
            public:
            virtual ::System::Boolean get_IsMailNewsSave();
            public:
            virtual ::System::Boolean get_IsSingleByte();
            public:
            ::System::Text::EncoderFallback * get_EncoderFallback();
            public:
            ::System::Text::EncoderFallback * set_EncoderFallback(::System::Text::EncoderFallback * value);
            public:
            ::System::Text::DecoderFallback * get_DecoderFallback();
            public:
            ::System::Text::DecoderFallback * set_DecoderFallback(::System::Text::DecoderFallback * value);
            public:
            virtual ::System::Object * Clone();
            public:
            ::System::Boolean get_IsReadOnly();
            public:
            static ::System::Text::Encoding * get_ASCII();
            public:
            static ::System::Text::Encoding * get_Latin1();
            public:
            virtual ::System::Int32 GetByteCount(::System::Array__G< ::System::Char > * chars);
            public:
            virtual ::System::Int32 GetByteCount(::System::String * s);
            public:
            virtual ::System::Int32 GetByteCount(::System::Array__G< ::System::Char > * chars, ::System::Int32 index, ::System::Int32 count) = 0;
            public:
            virtual ::System::Int32 GetByteCount(CrossNetRuntime::PointerWrapper<::System::Char *> chars, ::System::Int32 count);
            public:
            virtual ::System::Int32 GetByteCount(CrossNetRuntime::PointerWrapper<::System::Char *> chars, ::System::Int32 count, ::System::Text::EncoderNLS * encoder);
            public:
            virtual ::System::Array__G< ::System::Byte > * GetBytes(::System::Array__G< ::System::Char > * chars);
            public:
            virtual ::System::Array__G< ::System::Byte > * GetBytes(::System::Array__G< ::System::Char > * chars, ::System::Int32 index, ::System::Int32 count);
            public:
            virtual ::System::Int32 GetBytes(::System::Array__G< ::System::Char > * chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::System::Array__G< ::System::Byte > * bytes, ::System::Int32 byteIndex) = 0;
            public:
            virtual ::System::Array__G< ::System::Byte > * GetBytes(::System::String * s);
            public:
            virtual ::System::Int32 GetBytes(::System::String * s, ::System::Int32 charIndex, ::System::Int32 charCount, ::System::Array__G< ::System::Byte > * bytes, ::System::Int32 byteIndex);
            public:
            virtual ::System::Int32 GetBytes(CrossNetRuntime::PointerWrapper<::System::Char *> chars, ::System::Int32 charCount, CrossNetRuntime::PointerWrapper<::System::Byte *> bytes, ::System::Int32 byteCount, ::System::Text::EncoderNLS * encoder);
            public:
            virtual ::System::Int32 GetBytes(CrossNetRuntime::PointerWrapper<::System::Char *> chars, ::System::Int32 charCount, CrossNetRuntime::PointerWrapper<::System::Byte *> bytes, ::System::Int32 byteCount);
            public:
            virtual ::System::Int32 GetCharCount(::System::Array__G< ::System::Byte > * bytes);
            public:
            virtual ::System::Int32 GetCharCount(::System::Array__G< ::System::Byte > * bytes, ::System::Int32 index, ::System::Int32 count) = 0;
            public:
            virtual ::System::Int32 GetCharCount(CrossNetRuntime::PointerWrapper<::System::Byte *> bytes, ::System::Int32 count);
            public:
            virtual ::System::Int32 GetCharCount(CrossNetRuntime::PointerWrapper<::System::Byte *> bytes, ::System::Int32 count, ::System::Text::DecoderNLS * decoder);
            public:
            virtual ::System::Array__G< ::System::Char > * GetChars(::System::Array__G< ::System::Byte > * bytes);
            public:
            virtual ::System::Array__G< ::System::Char > * GetChars(::System::Array__G< ::System::Byte > * bytes, ::System::Int32 index, ::System::Int32 count);
            public:
            virtual ::System::Int32 GetChars(::System::Array__G< ::System::Byte > * bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::System::Array__G< ::System::Char > * chars, ::System::Int32 charIndex) = 0;
            public:
            virtual ::System::Int32 GetChars(CrossNetRuntime::PointerWrapper<::System::Byte *> bytes, ::System::Int32 byteCount, CrossNetRuntime::PointerWrapper<::System::Char *> chars, ::System::Int32 charCount);
            public:
            virtual ::System::Int32 GetChars(CrossNetRuntime::PointerWrapper<::System::Byte *> bytes, ::System::Int32 byteCount, CrossNetRuntime::PointerWrapper<::System::Char *> chars, ::System::Int32 charCount, ::System::Text::DecoderNLS * decoder);
            public:
            virtual ::System::Int32 get_CodePage();
            public:
            ::System::Boolean IsAlwaysNormalized();
            public:
            virtual ::System::Boolean IsAlwaysNormalized(::System::Text::NormalizationForm form);
            public:
            virtual ::System::Text::Decoder * GetDecoder();
            public:
            static ::System::Text::Encoding * CreateDefaultEncoding();
            public:
            static ::System::Text::Encoding * get_Default();
            public:
            virtual ::System::Text::Encoder * GetEncoder();
            public:
            virtual ::System::Int32 GetMaxByteCount(::System::Int32 charCount) = 0;
            public:
            virtual ::System::Int32 GetMaxCharCount(::System::Int32 byteCount) = 0;
            public:
            virtual ::System::String * GetString(::System::Array__G< ::System::Byte > * bytes);
            public:
            virtual ::System::String * GetString(::System::Array__G< ::System::Byte > * bytes, ::System::Int32 index, ::System::Int32 count);
            public:
            static ::System::Text::Encoding * get_Unicode();
            public:
            static ::System::Text::Encoding * get_BigEndianUnicode();
            public:
            static ::System::Text::Encoding * get_UTF7();
            public:
            static ::System::Text::Encoding * get_UTF8();
            public:
            static ::System::Text::Encoding * get_UTF32();
            public:
            ::System::Boolean Equals(::System::Object * value);
            public:
            ::System::Int32 GetHashCode();
            public:
            virtual ::System::Array__G< ::System::Char > * GetBestFitUnicodeToBytesData();
            public:
            virtual ::System::Array__G< ::System::Char > * GetBestFitBytesToUnicodeData();
            public:
            ::System::Void ThrowBytesOverflow();
            public:
            ::System::Void ThrowBytesOverflow(::System::Text::EncoderNLS * encoder, ::System::Boolean nothingEncoded);
            public:
            ::System::Void ThrowCharsOverflow();
            public:
            ::System::Void ThrowCharsOverflow(::System::Text::DecoderNLS * decoder, ::System::Boolean nothingDecoded);
            public:
            static void Static__ctor__();
            class Wrapper__ICloneable : public ::System::ICloneable
            {
                public:
                public:
                virtual ::System::Object * Clone(void * __passed_instance__);
                CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
            };
            public:
            static void __CreateInterfaceMap__();
        };
    }
}
#endif

#endif