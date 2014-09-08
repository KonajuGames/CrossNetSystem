/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_H__
#define __SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_H__

#ifndef CN_NO_SYSTEM_GLOBALIZATION_NUMBERFORMATINFO

#include "CrossNetRuntime/System/Object.h"

#include "CrossNetSystem/System/IFormatProvider.h"

namespace System
{
    namespace Globalization
    {
        class NumberFormatInfo : public ::System::Object
        {
            CN_DYNAMIC_ID()
            public:
            static ::System::Globalization::NumberStyles InvalidNumberStyles;
            public:
            static ::System::Globalization::NumberFormatInfo * invariantInfo;
            public:
            ::System::Array__G< ::System::Int32 > * numberGroupSizes;
            public:
            ::System::Array__G< ::System::Int32 > * currencyGroupSizes;
            public:
            ::System::Array__G< ::System::Int32 > * percentGroupSizes;
            public:
            ::System::String * positiveSign;
            public:
            ::System::String * negativeSign;
            public:
            ::System::String * numberDecimalSeparator;
            public:
            ::System::String * numberGroupSeparator;
            public:
            ::System::String * currencyGroupSeparator;
            public:
            ::System::String * currencyDecimalSeparator;
            public:
            ::System::String * currencySymbol;
            public:
            ::System::String * ansiCurrencySymbol;
            public:
            ::System::String * nanSymbol;
            public:
            ::System::String * positiveInfinitySymbol;
            public:
            ::System::String * negativeInfinitySymbol;
            public:
            ::System::String * percentDecimalSeparator;
            public:
            ::System::String * percentGroupSeparator;
            public:
            ::System::String * percentSymbol;
            public:
            ::System::String * perMilleSymbol;
            public:
            ::System::Array__G< ::System::String * > * nativeDigits;
            public:
            ::System::Int32 m_dataItem;
            public:
            ::System::Int32 numberDecimalDigits;
            public:
            ::System::Int32 currencyDecimalDigits;
            public:
            ::System::Int32 currencyPositivePattern;
            public:
            ::System::Int32 currencyNegativePattern;
            public:
            ::System::Int32 numberNegativePattern;
            public:
            ::System::Int32 percentPositivePattern;
            public:
            ::System::Int32 percentNegativePattern;
            public:
            ::System::Int32 percentDecimalDigits;
            public:
            ::System::Int32 digitSubstitution;
            public:
            ::System::Boolean isReadOnly;
            public:
            ::System::Boolean m_useUserOverride;
            public:
            ::System::Boolean validForParseAsNumber;
            public:
            ::System::Boolean validForParseAsCurrency;
            public:
            void __ctor__();
            static ::System::Globalization::NumberFormatInfo * __Create__();
            public:
            ::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);
            public:
            ::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);
            public:
            ::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);
            public:
            ::System::Void VerifyDecimalSeparator(::System::String * decSep, ::System::String * propertyName);
            public:
            ::System::Void VerifyGroupSeparator(::System::String * groupSep, ::System::String * propertyName);
            public:
            ::System::Void VerifyNativeDigits(::System::Array__G< ::System::String * > * nativeDig, ::System::String * propertyName);
            public:
            ::System::Void VerifyDigitSubstitution(::System::Globalization::DigitShapes digitSub, ::System::String * propertyName);
            public:
            void __ctor__(::System::Globalization::CultureTableRecord * cultureTableRecord);
            static ::System::Globalization::NumberFormatInfo * __Create__(::System::Globalization::CultureTableRecord * cultureTableRecord);
            public:
            ::System::Void VerifyWritable();
            public:
            static ::System::Globalization::NumberFormatInfo * get_InvariantInfo();
            public:
            static ::System::Globalization::NumberFormatInfo * GetInstance(::System::IFormatProvider * formatProvider);
            public:
            ::System::Object * Clone();
            public:
            ::System::Int32 get_CurrencyDecimalDigits();
            public:
            ::System::Int32 set_CurrencyDecimalDigits(::System::Int32 value);
            public:
            ::System::String * get_CurrencyDecimalSeparator();
            public:
            ::System::String * set_CurrencyDecimalSeparator(::System::String * value);
            public:
            ::System::Boolean get_IsReadOnly();
            public:
            ::System::Void CheckGroupSize(::System::String * propName, ::System::Array__G< ::System::Int32 > * groupSize);
            public:
            ::System::Array__G< ::System::Int32 > * get_CurrencyGroupSizes();
            public:
            ::System::Array__G< ::System::Int32 > * set_CurrencyGroupSizes(::System::Array__G< ::System::Int32 > * value);
            public:
            ::System::Array__G< ::System::Int32 > * get_NumberGroupSizes();
            public:
            ::System::Array__G< ::System::Int32 > * set_NumberGroupSizes(::System::Array__G< ::System::Int32 > * value);
            public:
            ::System::Array__G< ::System::Int32 > * get_PercentGroupSizes();
            public:
            ::System::Array__G< ::System::Int32 > * set_PercentGroupSizes(::System::Array__G< ::System::Int32 > * value);
            public:
            ::System::String * get_CurrencyGroupSeparator();
            public:
            ::System::String * set_CurrencyGroupSeparator(::System::String * value);
            public:
            ::System::String * get_CurrencySymbol();
            public:
            ::System::String * set_CurrencySymbol(::System::String * value);
            public:
            static ::System::Globalization::NumberFormatInfo * get_CurrentInfo();
            public:
            ::System::String * get_NaNSymbol();
            public:
            ::System::String * set_NaNSymbol(::System::String * value);
            public:
            ::System::Int32 get_CurrencyNegativePattern();
            public:
            ::System::Int32 set_CurrencyNegativePattern(::System::Int32 value);
            public:
            ::System::Int32 get_NumberNegativePattern();
            public:
            ::System::Int32 set_NumberNegativePattern(::System::Int32 value);
            public:
            ::System::Int32 get_PercentPositivePattern();
            public:
            ::System::Int32 set_PercentPositivePattern(::System::Int32 value);
            public:
            ::System::Int32 get_PercentNegativePattern();
            public:
            ::System::Int32 set_PercentNegativePattern(::System::Int32 value);
            public:
            ::System::String * get_NegativeInfinitySymbol();
            public:
            ::System::String * set_NegativeInfinitySymbol(::System::String * value);
            public:
            ::System::String * get_NegativeSign();
            public:
            ::System::String * set_NegativeSign(::System::String * value);
            public:
            ::System::Int32 get_NumberDecimalDigits();
            public:
            ::System::Int32 set_NumberDecimalDigits(::System::Int32 value);
            public:
            ::System::String * get_NumberDecimalSeparator();
            public:
            ::System::String * set_NumberDecimalSeparator(::System::String * value);
            public:
            ::System::String * get_NumberGroupSeparator();
            public:
            ::System::String * set_NumberGroupSeparator(::System::String * value);
            public:
            ::System::Int32 get_CurrencyPositivePattern();
            public:
            ::System::Int32 set_CurrencyPositivePattern(::System::Int32 value);
            public:
            ::System::String * get_PositiveInfinitySymbol();
            public:
            ::System::String * set_PositiveInfinitySymbol(::System::String * value);
            public:
            ::System::String * get_PositiveSign();
            public:
            ::System::String * set_PositiveSign(::System::String * value);
            public:
            ::System::Int32 get_PercentDecimalDigits();
            public:
            ::System::Int32 set_PercentDecimalDigits(::System::Int32 value);
            public:
            ::System::String * get_PercentDecimalSeparator();
            public:
            ::System::String * set_PercentDecimalSeparator(::System::String * value);
            public:
            ::System::String * get_PercentGroupSeparator();
            public:
            ::System::String * set_PercentGroupSeparator(::System::String * value);
            public:
            ::System::String * get_PercentSymbol();
            public:
            ::System::String * set_PercentSymbol(::System::String * value);
            public:
            ::System::String * get_PerMilleSymbol();
            public:
            ::System::String * set_PerMilleSymbol(::System::String * value);
            public:
            ::System::Array__G< ::System::String * > * get_NativeDigits();
            public:
            ::System::Array__G< ::System::String * > * set_NativeDigits(::System::Array__G< ::System::String * > * value);
            public:
            ::System::Globalization::DigitShapes get_DigitSubstitution();
            public:
            ::System::Globalization::DigitShapes set_DigitSubstitution(::System::Globalization::DigitShapes value);
            public:
            ::System::Object * GetFormat(::System::Type * formatType);
            public:
            static ::System::Globalization::NumberFormatInfo * ReadOnly(::System::Globalization::NumberFormatInfo * nfi);
            public:
            static ::System::Void ValidateParseStyleInteger(::System::Globalization::NumberStyles style);
            public:
            static ::System::Void ValidateParseStyleFloatingPoint(::System::Globalization::NumberStyles style);
            public:
            static void Static__ctor__();
            class Wrapper__ICloneable : public ::System::ICloneable
            {
                public:
                public:
                virtual ::System::Object * Clone(void * __passed_instance__);
                CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
            };
            class Wrapper__IFormatProvider : public ::System::IFormatProvider
            {
                public:
                public:
                virtual ::System::Object * GetFormat(void * __passed_instance__, ::System::Type * formatType);
                CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
            };
            public:
            static void __CreateInterfaceMap__();
        };
    }
}

#endif

#endif