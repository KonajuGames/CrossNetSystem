/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_GLOBALIZATION_UNICODECATEGORY_H__
#define __SYSTEM_GLOBALIZATION_UNICODECATEGORY_H__

#ifndef CN_NO_SYSTEM_GLOBALIZATION_UNICODECATEGORY

namespace System
{
    namespace Globalization
    {
        BEGIN_DECLARE_ENUM(UnicodeCategory, ::System::Int32, 0)
            static const ::System::Int32 UppercaseLetter = 0;
            static const ::System::Int32 LowercaseLetter = 1;
            static const ::System::Int32 TitlecaseLetter = 2;
            static const ::System::Int32 ModifierLetter = 3;
            static const ::System::Int32 OtherLetter = 4;
            static const ::System::Int32 NonSpacingMark = 5;
            static const ::System::Int32 SpacingCombiningMark = 6;
            static const ::System::Int32 EnclosingMark = 7;
            static const ::System::Int32 DecimalDigitNumber = 8;
            static const ::System::Int32 LetterNumber = 9;
            static const ::System::Int32 OtherNumber = 10;
            static const ::System::Int32 SpaceSeparator = 11;
            static const ::System::Int32 LineSeparator = 12;
            static const ::System::Int32 ParagraphSeparator = 13;
            static const ::System::Int32 Control = 14;
            static const ::System::Int32 Format = 15;
            static const ::System::Int32 Surrogate = 16;
            static const ::System::Int32 PrivateUse = 17;
            static const ::System::Int32 ConnectorPunctuation = 18;
            static const ::System::Int32 DashPunctuation = 19;
            static const ::System::Int32 OpenPunctuation = 20;
            static const ::System::Int32 ClosePunctuation = 21;
            static const ::System::Int32 InitialQuotePunctuation = 22;
            static const ::System::Int32 FinalQuotePunctuation = 23;
            static const ::System::Int32 OtherPunctuation = 24;
            static const ::System::Int32 MathSymbol = 25;
            static const ::System::Int32 CurrencySymbol = 26;
            static const ::System::Int32 ModifierSymbol = 27;
            static const ::System::Int32 OtherSymbol = 28;
            static const ::System::Int32 OtherNotAssigned = 29;
        END_DECLARE_ENUM
    }
}

#endif

#endif