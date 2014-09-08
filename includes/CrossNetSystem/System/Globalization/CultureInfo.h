/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_GLOBALIZATION_CULTUREINFO_H__
#define __SYSTEM_GLOBALIZATION_CULTUREINFO_H__

#ifndef CN_NO_SYSTEM_GLOBALIZATION_CULTUREINFO

#include "CrossNetRuntime/System/Object.h"
#include "CrossNetRuntime/System/ICloneable.h"
#include "CrossNetRuntime/Internal/PointerWrapper.h"

#include "CrossNetSystem/System/IFormatProvider.h"

namespace System
{
    template <typename T>
    class Array__G;

    namespace Collections
    {
        class Hashtable;
    }

    namespace Runtime
    {
        namespace Serialization
        {
            struct StreamingContext;
        }
    }

    namespace Globalization
    {
        class CompareInfo;
        class TextInfo;
        class NumberFormatInfo;
        class DateTimeFormatInfo;
        class Calendar;
        class CultureTableRecord;
        struct DTFIUserOverrideValues;
        struct CultureData;
        struct CultureTypes;

/*
        class CultureInfo : public System::Object  // Implements interfaces ICloneable, IFormatProvider
        {
        public:
            CN_DYNAMIC_ID()

            static CultureInfo * get_InvariantCulture()
            {
                return (sInvariantCulture);
            }

            static CultureInfo * get_CurrentCulture()
            {
                return (sInvariantCulture);
            }

            static CultureInfo * __Create__()
            {
                CultureInfo * culture = new CultureInfo();
                culture->m__InterfaceMap__ = s__InterfaceMap__;
                return (culture);
            }

            CultureInfo * Clone()
            {
                CultureInfo * culture = new CultureInfo(*this);
                culture->m__InterfaceMap__ = s__InterfaceMap__;
                return (culture);
            }

        protected:
            class Wrapper__ICloneable : public System::ICloneable
            {
            public:
                virtual System::Object * Clone(void * instance)
                {
                    CultureInfo * temp = static_cast<CultureInfo *>(instance);
                    return (temp->Clone());
                }
            };

            class Wrapper__IFormatProvider : public System::IFormatProvider
            {
            };

        private:
            CultureInfo()
            {
                // Do nothing...
            }

            CultureInfo(const CultureInfo & )
            {
                // Update copy constructor here...
            }

            static CultureInfo * sInvariantCulture;
        };
*/

        class CultureInfo : public ::System::Object
        {
            CN_DYNAMIC_ID()
            public:
            static ::System::Int32 zh_CHT_CultureID;
            public:
            static ::System::Int32 zh_CHS_CultureID;
            public:
            static ::System::Int32 sr_CultureID;
            public:
            static ::System::Int32 sr_SP_Latn_CultureID;
            public:
            static ::System::Int32 LOCALE_INVARIANT;
            public:
            static ::System::Int32 LOCALE_NEUTRAL;
            public:
            static ::System::Int32 LOCALE_USER_DEFAULT;
            public:
            static ::System::Int32 LOCALE_SYSTEM_DEFAULT;
            public:
            static ::System::Int32 LOCALE_CUSTOM_DEFAULT;
            public:
            static ::System::Int32 LOCALE_CUSTOM_UNSPECIFIED;
            public:
            static ::System::Int32 LOCALE_TRADITIONAL_SPANISH;
            public:
            static ::System::Int32 LCID_INSTALLED;
            public:
            static ::System::Int32 LCID_SUPPORTED;
            public:
            ::System::Int32 cultureID;
            public:
            ::System::Boolean m_isReadOnly;
            public:
            ::System::Globalization::CompareInfo * compareInfo;
            public:
            ::System::Globalization::TextInfo * textInfo;
            public:
            ::System::Globalization::NumberFormatInfo * numInfo;
            public:
            ::System::Globalization::DateTimeFormatInfo * dateTimeInfo;
            public:
            ::System::Globalization::Calendar * calendar;
            public:
            ::System::Globalization::CultureTableRecord * m_cultureTableRecord;
            public:
            ::System::Boolean m_isInherited;
            public:
            ::System::Boolean m_isSafeCrossDomain;
            public:
            ::System::Int32 m_createdDomainID;
            public:
            ::System::Globalization::CultureInfo * m_consoleFallbackCulture;
            public:
            ::System::String * m_name;
            public:
            ::System::String * m_nonSortName;
            public:
            ::System::String * m_sortName;
            public:
            static ::System::Globalization::CultureInfo * m_userDefaultCulture;
            public:
            static ::System::Globalization::CultureInfo * m_InvariantCultureInfo;
            public:
            static ::System::Globalization::CultureInfo * m_userDefaultUICulture;
            public:
            static ::System::Globalization::CultureInfo * m_InstalledUICultureInfo;
            public:
            static ::System::Collections::Hashtable * m_LcidCachedCultures;
            public:
            static ::System::Collections::Hashtable * m_NameCachedCultures;
            public:
            ::System::Globalization::CultureInfo * m_parent;
            public:
            ::System::Int32 m_dataItem;
            public:
            ::System::Boolean m_useUserOverride;
            public:
            static ::System::Boolean IsValidLCID(::System::Int32 LCID, ::System::Int32 flag);
            public:
            static ::System::Boolean IsWin9xInstalledCulture(::System::String * cultureKey, ::System::Int32 LCID);
            public:
            static ::System::String * nativeGetUserDefaultLCID(CrossNetRuntime::PointerWrapper<::System::Int32 *> LCID, ::System::Int32 lcidType);
            public:
            static ::System::String * nativeGetUserDefaultUILanguage(CrossNetRuntime::PointerWrapper<::System::Int32 *> LCID);
            public:
            static ::System::String * nativeGetSystemDefaultUILanguage(CrossNetRuntime::PointerWrapper<::System::Int32 *> LCID);
            public:
            static ::System::Boolean nativeSetThreadLocale(::System::Int32 LCID);
            public:
            static ::System::String * nativeGetLocaleInfo(::System::Int32 LCID, ::System::Int32 field);
            public:
            static ::System::Int32 nativeGetCurrentCalendar();
            public:
            static ::System::Boolean nativeGetDTFIUserValues(::System::Int32 lcid, ::System::Globalization::DTFIUserOverrideValues * values);
            public:
            static ::System::Boolean nativeGetNFIUserValues(::System::Int32 lcid, ::System::Globalization::NumberFormatInfo * nfi);
            public:
            static ::System::Boolean nativeGetCultureData(::System::Int32 lcid, ::System::Globalization::CultureData * cultureData);
            public:
            static ::System::Boolean nativeEnumSystemLocales(::System::Array__G< ::System::Int32 > * * localesArray);
            public:
            static ::System::String * nativeGetCultureName(::System::Int32 lcid, ::System::Boolean useSNameLCType, ::System::Boolean getMonthName);
            public:
            static ::System::String * nativeGetWindowsDirectory();
            public:
            static ::System::Boolean nativeFileExists(::System::String * fileName);
            public:
            static ::System::Int32 * nativeGetStaticInt32DataTable(::System::Int32 type, ::System::Int32 * tableSize);
            public:
            static ::System::Int32 GetNativeSortKey(::System::Int32 lcid, ::System::Int32 flags, ::System::String * source, ::System::Int32 cchSrc, ::System::Array__G< ::System::Byte > * * sortKey);
            public:
            static void Static__ctor__();
            public:
            static ::System::Globalization::CultureInfo * InitUserDefaultCulture();
            public:
            static ::System::Globalization::CultureInfo * InitUserDefaultUICulture();
            public:
            void __ctor__(::System::String * name);
            static ::System::Globalization::CultureInfo * __Create__(::System::String * name);
            public:
            void __ctor__(::System::String * name, ::System::Boolean useUserOverride);
            static ::System::Globalization::CultureInfo * __Create__(::System::String * name, ::System::Boolean useUserOverride);
            public:
            void __ctor__(::System::Int32 culture);
            static ::System::Globalization::CultureInfo * __Create__(::System::Int32 culture);
            public:
            void __ctor__(::System::Int32 culture, ::System::Boolean useUserOverride);
            static ::System::Globalization::CultureInfo * __Create__(::System::Int32 culture, ::System::Boolean useUserOverride);
            public:
            static ::System::Void CheckDomainSafetyObject(::System::Object * obj, ::System::Object * container);
            public:
            ::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);
            public:
            ::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);
            public:
            ::System::Boolean get_IsSafeCrossDomain();
            public:
            ::System::Int32 get_CreatedDomainID();
            public:
            ::System::Void StartCrossDomainTracking();
            public:
            void __ctor__(::System::String * cultureName, ::System::String * textAndCompareCultureName);
            static ::System::Globalization::CultureInfo * __Create__(::System::String * cultureName, ::System::String * textAndCompareCultureName);
            public:
            static ::System::Globalization::CultureInfo * GetCultureByLCIDOrName(::System::Int32 preferLCID, ::System::String * fallbackToString);
            public:
            static ::System::Globalization::CultureInfo * CreateSpecificCulture(::System::String * name);
            public:
            static ::System::Boolean VerifyCultureName(::System::Globalization::CultureInfo * culture, ::System::Boolean throwException);
            public:
            static ::System::Int32 GetSubLangID(::System::Int32 culture);
            public:
            static ::System::Int32 GetLangID(::System::Int32 culture);
            public:
            static ::System::Int32 GetSortID(::System::Int32 lcid);
            public:
            static ::System::Globalization::CultureInfo * get_CurrentCulture();
            public:
            static ::System::Globalization::CultureInfo * get_UserDefaultCulture();
            public:
            static ::System::Globalization::CultureInfo * get_UserDefaultUICulture();
            public:
            static ::System::Globalization::CultureInfo * get_CurrentUICulture();
            public:
            static ::System::Globalization::CultureInfo * get_InstalledUICulture();
            public:
            static ::System::Globalization::CultureInfo * get_InvariantCulture()
            {
                return (sInvariantCulture);
            }
            public:
            virtual ::System::Globalization::CultureInfo * get_Parent();
            public:
            virtual ::System::Int32 get_LCID();
            public:
            virtual ::System::Int32 get_KeyboardLayoutId();
            public:
            static ::System::Array__G< ::System::Globalization::CultureInfo * > * GetCultures(::System::Globalization::CultureTypes types);
            public:
            virtual ::System::String * get_Name();
            public:
            ::System::String * get_SortName();
            public:
            ::System::String * get_IetfLanguageTag();
            public:
            virtual ::System::String * get_DisplayName();
            public:
            virtual ::System::String * get_NativeName();
            public:
            virtual ::System::String * get_EnglishName();
            public:
            virtual ::System::String * get_TwoLetterISOLanguageName();
            public:
            virtual ::System::String * get_ThreeLetterISOLanguageName();
            public:
            virtual ::System::String * get_ThreeLetterWindowsLanguageName();
            public:
            virtual ::System::Globalization::CompareInfo * get_CompareInfo();
            public:
            ::System::Int32 get_CompareInfoId();
            public:
            virtual ::System::Globalization::TextInfo * get_TextInfo();
            public:
            ::System::Boolean Equals(::System::Object * value);
            public:
            ::System::Int32 GetHashCode();
            public:
            ::System::String * ToString();
            public:
            virtual ::System::Object * GetFormat(::System::Type * formatType);
            public:
            static ::System::Void CheckNeutral(::System::Globalization::CultureInfo * culture);
            public:
            virtual ::System::Boolean get_IsNeutralCulture();
            public:
            ::System::Globalization::CultureTypes get_CultureTypes();
            public:
            virtual ::System::Globalization::NumberFormatInfo * get_NumberFormat();
            public:
            virtual ::System::Globalization::NumberFormatInfo * set_NumberFormat(::System::Globalization::NumberFormatInfo * value);
            public:
            virtual ::System::Globalization::DateTimeFormatInfo * get_DateTimeFormat();
            public:
            virtual ::System::Globalization::DateTimeFormatInfo * set_DateTimeFormat(::System::Globalization::DateTimeFormatInfo * value);
            public:
            ::System::Void ClearCachedData();
            public:
            static ::System::Globalization::Calendar * GetCalendarInstance(::System::Int32 calType);
            public:
            static ::System::Globalization::Calendar * GetCalendarInstanceRare(::System::Int32 calType);
            public:
            virtual ::System::Globalization::Calendar * get_Calendar();
            public:
            virtual ::System::Array__G< ::System::Globalization::Calendar * > * get_OptionalCalendars();
            public:
            ::System::Boolean get_UseUserOverride();
            public:
            ::System::Globalization::CultureInfo * GetConsoleFallbackUICulture();
            public:
            virtual ::System::Object * Clone();
            public:
            static ::System::Globalization::CultureInfo * ReadOnly(::System::Globalization::CultureInfo * ci);
            public:
            ::System::Boolean get_IsReadOnly();
            public:
            ::System::Void VerifyWritable();
            public:
            static ::System::Globalization::CultureInfo * GetCultureInfoHelper(::System::Int32 lcid, ::System::String * name, ::System::String * altName);
            public:
            static ::System::Globalization::CultureInfo * GetCultureInfo(::System::Int32 culture);
            public:
            static ::System::Globalization::CultureInfo * GetCultureInfo(::System::String * name);
            public:
            static ::System::Globalization::CultureInfo * GetCultureInfo(::System::String * name, ::System::String * altName);
            public:
            static ::System::Globalization::CultureInfo * GetCultureInfoByIetfLanguageTag(::System::String * name);
            public:
            static ::System::Globalization::CultureInfo * __Create__();
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

            private:
            static CultureInfo * sInvariantCulture;
        };
    }
}

#endif

#endif