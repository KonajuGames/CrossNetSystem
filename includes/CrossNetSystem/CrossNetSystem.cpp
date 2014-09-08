/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/CrossNetSystem.h"

void CrossNetSystem__Setup()
{
#ifndef CN_NO_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE
    System::Runtime::Serialization::ISerializable::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_RUNTIME_INTEROPSERVICES__EXCEPTION
    System::Runtime::InteropServices::_Exception::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_RUNTIME_INTEROPSERVICES__ATTRIBUTE
    System::Runtime::InteropServices::_Attribute::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_IFORMATPROVIDER
    System::IFormatProvider::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_IDICTIONARY
    System::Collections::IDictionary::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR
    System::Collections::IDictionaryEnumerator::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION
    System::Collections::Specialized::StringCollection::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR
    System::Collections::Specialized::StringEnumerator::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_DICTIONARYENTRY
    System::Collections::DictionaryEntry::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_HASHTABLE
    System::Collections::Hashtable::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_HASHTABLE
    System::Collections::Hashtable::__RegisterId__();
    System::Collections::Hashtable::DictionaryEnumerator::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_GLOBALIZATION_CULTUREINFO
    System::Globalization::CultureInfo::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_EXCEPTION
    System::Exception::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_INTPTR
    System::IntPtr::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_ARRAYLIST
    System::Collections::ArrayList::__RegisterId__();
    System::Collections::ArrayList::ArrayListEnumerator::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_NOTSUPPORTEDEXCEPTION
    System::NotSupportedException::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_NOTIMPLEMENTEDEXCEPTION
    System::NotImplementedException::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_ARGUMENTEXCEPTION
    System::ArgumentException::__RegisterId__();
#endif

#ifndef CN_NO_SYSTEM_URI
    System::Uri::__RegisterId__();
#endif
}

void CrossNetSystem__Teardown()
{
}

