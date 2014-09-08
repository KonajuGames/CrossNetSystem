/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __CROSSNETSYSTEM_H__
#define __CROSSNETSYSTEM_H__

// System by default include Runtime, so the user doesn't have to include it...
#include "CrossNetRuntime/CrossNetRuntime.h"
#include "CrossNetSystem/SystemForward.h"
#include "CrossNetSystem/DisabledTypes.h"

void CrossNetSystem__Setup();
void CrossNetSystem__Teardown();

#ifndef CN_NO_SYSTEM_ATTRIBUTE
#include "CrossNetSystem/System/Attribute.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION
#include "CrossNetSystem/System/Collections/Specialized/StringCollection.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR
#include "CrossNetSystem/System/Collections/Specialized/StringEnumerator.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32
#include "CrossNetSystem/System/Collections/Specialized/BitVector32.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY
#include "CrossNetSystem/System/Collections/Specialized/ListDictionary.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_ARRAYLIST
#include "CrossNetSystem/System/Collections/ArrayList.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_QUEUE
#include "CrossNetSystem/System/Collections/Queue.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_DICTIONARYENTRY
#include "CrossNetSystem/System/Collections/DictionaryEntry.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR
#include "CrossNetSystem/System/Collections/IDictionaryEnumerator.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_IDICTIONARY
#include "CrossNetSystem/System/Collections/IDictionary.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_HASHTABLE
#include "CrossNetSystem/System/Collections/Hashtable.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY__G2
#include "CrossNetSystem/System/Collections/Generic/IDictionary__G2.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_GENERIC_LIST__G1
#include "CrossNetSystem/System/Collections/Generic/List__G1.h"
#endif

#ifndef CN_NO_SYSTEM_INTPTR
#include "CrossNetSystem/System/IntPtr.h"
#endif

#ifndef CN_NO_SYSTEM_UINTPTR
#include "CrossNetSystem/System/UIntPtr.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_COLLECTIONBASE
#include "CrossNetSystem/System/Collections/CollectionBase.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE
#include "CrossNetSystem/System/Collections/ReadOnlyCollectionBase.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_DICTIONARYBASE
#include "CrossNetSystem/System/Collections/DictionaryBase.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_SORTEDLIST
#include "CrossNetSystem/System/Collections/SortedList.h"
#endif

#ifndef CN_NO_SYSTEM_IO_STREAM
#include "CrossNetSystem/System/IO/Stream.h"
#endif

#ifndef CN_NO_SYSTEM_IO_FILEMODE
#include "CrossNetSystem/System/IO/FileMode.h"
#endif

#ifndef CN_NO_SYSTEM_IO_FILEACCESS
#include "CrossNetSystem/System/IO/FileAccess.h"
#endif

#ifndef CN_NO_SYSTEM_IO_FILESTREAM
#include "CrossNetSystem/System/IO/FileStream.h"
#endif

#ifndef CN_NO_SYSTEM_IO_STREAMREADER
#include "CrossNetSystem/System/IO/StreamReader.h"
#endif

#ifndef CN_NO_SYSTEM_IO_TEXTWRITER
#include "CrossNetSystem/System/IO/TextWriter.h"
#endif

#ifndef CN_NO_SYSTEM_IO_TEXTREADER
#include "CrossNetSystem/System/IO/TextReader.h"
#endif

#ifndef CN_NO_SYSTEM_MARSHALBYREFOBJECT
#include "CrossNetSystem/System/MarshalByRefObject.h"
#endif

#ifndef CN_NO_SYSTEM_XML_XMLTEXTWRITER
#include "CrossNetSystem/System/Xml/XmlTextWriter.h"
#endif

#ifndef CN_NO_SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS
#include "CrossNetSystem/System/Xml/Schema/ValidationEventArgs.h"
#endif

#ifndef CN_NO_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE
#include "CrossNetSystem/System/Runtime/Serialization/ISerializationSurrogate.h"
#endif

#ifndef CN_NO_SYSTEM_GLOBALIZATION_UNICODECATEGORY
#include "CrossNetSystem/System/Globalization/UnicodeCategory.h"
#endif

#ifndef CN_NO_SYSTEM_RANDOM
#include "CrossNetSystem/System/Random.h"
#endif

#ifndef CN_NO_SYSTEM_CONSOLE
#include "CrossNetSystem/System/Console.h"
#endif

#ifndef CN_NO_SYSTEM_CONVERT
#include "CrossNetSystem/System/Convert.h"
#endif

#ifndef CN_NO_SYSTEM_DATETIME
#include "CrossNetSystem/System/DateTime.h"
#endif

#ifndef CN_NO_SYSTEM_TIMESPAN
#include "CrossNetSystem/System/TimeSpan.h"
#endif

#ifndef CN_NO_SYSTEM_ENVIRONMENT
#include "CrossNetSystem/System/Environment.h"
#endif

#ifndef CN_NO_SYSTEM_DBNULL
#include "CrossNetSystem/System/DbNull.h"
#endif

#ifndef CN_NO_SYSTEM_TYPECODE
#include "CrossNetSystem/System/TypeCode.h"
#endif

#ifndef CN_NO_SYSTEM_THREADING_THREAD
#include "CrossNetSystem/System/Threading/Thread.h"
#endif

#ifndef CN_NO_SYSTEM_THREADING_THREADSTART
#include "CrossNetSystem/System/Threading/ThreadStart.h"
#endif

#ifndef CN_NO_SYSTEM_GC
#include "CrossNetSystem/System/GC.h"
#endif

#ifndef CN_NO_SYSTEM_REFLECTION_MISSING
#include "CrossNetSystem/System/Reflection/Missing.h"
#endif

#ifndef CN_NO_SYSTEM_TEXT_ENCODING
#include "CrossNetSystem/System/Text/Encoding.h"
#endif

#ifndef CN_NO_SYSTEM_GLOBALIZATION_NUMBERFORMATINFO
#include "CrossNetSystem/System/Globalization/NumberFormatInfo.h"
#endif

#ifndef CN_NO_SYSTEM_SYSTEMEXCEPTION
#include "CrossNetSystem/System/SystemException.h"
#endif

#ifndef CN_NO_SYSTEM_ARITHMETICEXCEPTION
#include "CrossNetSystem/System/ArithmeticException.h"
#endif

#ifndef CN_NO_SYSTEM_OVERFLOWEXCEPTION
#include "CrossNetSystem/System/OverflowException.h"
#endif

#ifndef CN_NO_SYSTEM_ARGUMENTEXCEPTION
#include "CrossNetSystem/System/ArgumentException.h"
#endif

#ifndef CN_NO_SYSTEM_NOTIMPLEMENTEDEXCEPTION
#include "CrossNetSystem/System/NotImplementedException.h"
#endif

#ifndef CN_NO_SYSTEM_ARGUMENTNULLEXCEPTION
#include "CrossNetSystem/System/ArgumentNullException.h"
#endif

#ifndef CN_NO_SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION
#include "CrossNetSystem/System/ArgumentOutOfRangeException.h"
#endif

#ifndef CN_NO_SYSTEM_BITCONVERTER
#include "CrossNetSystem/System/BitConverter.h"
#endif

#ifndef CN_NO_SYSTEM_ICONVERTIBLE
#include "CrossNetSystem/System/IConvertible.h"
#endif

#ifndef CN_NO_SYSTEM_MATH
#include "CrossNetSystem/System/Math.h"
#endif

#ifndef CN_NO_SYSTEM_ACTIVATOR
#include "CrossNetSystem/System/Activator.h"
#endif

#ifndef CN_NO_SYSTEM_RUNTIME_INTEROPSERVICES__THREAD
#include "CrossNetSystem/System/Runtime/InteropServices/_Thread.h"
#endif

#ifndef CN_NO_SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE
#include "CrossNetSystem/System/Runtime/InteropServices/GCHandle.h"
#endif

#ifndef CN_NO_SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLETYPE
#include "CrossNetSystem/System/Runtime/InteropServices/GCHandleType.h"
#endif

#ifndef CN_NO_SYSTEM_RUNTIME_INTEROPSERVICES_UNMANAGEDTYPE
#include "CrossNetSystem/System/Runtime/InteropServices/UnmanagedType.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY
#include "CrossNetSystem/System/Collections/Specialized/HybridDictionary.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_GENERIC_DICTIONARY__G2
#include "CrossNetSystem/System/Collections/Generic/Dictionary__G2.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR__G2
#include "CrossNetSystem/System/Collections/Generic/KeyValuePair__G2.h"
#endif

#ifndef CN_NO_SYSTEM_XML_XMLNODETYPE
#include "CrossNetSystem/System/Xml/XmlNodeType.h"
#endif

#ifndef CN_NO_SYSTEM_DIAGNOSTICS_DEBUG
#include "CrossNetSystem/System/Diagnostics/Debug.h"
#endif

#ifndef CN_NO_SYSTEM_DIAGNOSTICS_TRACE
#include "CrossNetSystem/System/Diagnostics/Trace.h"
#endif

#ifndef CN_NO_SYSTEM_GLOBALIZATION_CULTUREINFO
#include "CrossNetSystem/System/Globalization/CultureInfo.h"
#endif

#ifndef CN_NO_SYSTEM_PREDICATE__G1
#include "CrossNetSystem/System/Predicate__G1.h"
#endif

#ifndef CN_NO_SYSTEM_NOTSUPPORTEDEXCEPTION
#include "CrossNetSystem/System/NotSupportedException.h"
#endif

#ifndef CN_NO_SYSTEM_NULLABLE__G1
#include "CrossNetSystem/System/Nullable__G1.h"
#endif

#ifndef CN_NO_SYSTEM_THREADING_INTERLOCKED
#include "CrossNetSystem/System/Threading/Interlocked.h"
#endif

#ifndef CN_NO_SYSTEM_URI
#include "CrossNetSystem/System/Uri.h"
#endif

#ifndef CN_NO_SYSTEM_GUID
#include "CrossNetSystem/System/Guid.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_ICOMPARER
#include "CrossNetSystem/System/Collections/IComparer.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_IHASHCODEPROVIDER
#include "CrossNetSystem/System/Collections/IHashCodeProvider.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_BITARRAY
#include "CrossNetSystem/System/Collections/BitArray.h"
#endif

#ifndef CN_NO_SYSTEM_COLLECTIONS_COMPARER
#include "CrossNetSystem/System/Collections/Comparer.h"
#endif

#ifndef CN_NO_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO
#include "CrossNetSystem/System/Runtime/Serialization/SerializationInfo.h"
#endif

#ifndef CN_NO_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY
#include "CrossNetSystem/System/Runtime/Serialization/SerializationEntry.h"
#endif

#ifndef CN_NO_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR
#include "CrossNetSystem/System/Runtime/Serialization/SerializationInfoEnumerator.h"
#endif

#ifndef CN_NO_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER
#include "CrossNetSystem/System/Runtime/Serialization/FormatterConverter.h"
#endif

#ifndef CN_NO_SYSTEM_IO_DIRECTORYINFO
#include "CrossNetSystem/System/IO/DirectoryInfo.h"
#endif

#ifndef CN_NO_SYSTEM_IO_DIRECTORY
#include "CrossNetSystem/System/IO/Directory.h"
#endif

#ifndef CN_NO_SYSTEM_IO_FILE
#include "CrossNetSystem/System/IO/File.h"
#endif

#ifndef CN_NO_SYSTEM_IO_FILEINFO
#include "CrossNetSystem/System/IO/FileInfo.h"
#endif

#ifndef CN_NO_SYSTEM_IO_FILESYSTEMINFO
#include "CrossNetSystem/System/IO/FileSystemInfo.h"
#endif

#ifndef CN_NO_SYSTEM_IO_STREAMWRITER
#include "CrossNetSystem/System/IO/StreamWriter.h"
#endif

#ifndef CN_NO_SYSTEM_IO_BINARYREADER
#include "CrossNetSystem/System/IO/BinaryReader.h"
#endif

#ifndef CN_NO_SYSTEM_IO_BINARYWRITER
#include "CrossNetSystem/System/IO/BinaryWriter.h"
#endif

#ifndef CN_NO_SYSTEM_IO_MEMORYSTREAM
#include "CrossNetSystem/System/IO/MemoryStream.h"
#endif

#ifndef CN_NO_SYSTEM_REFLECTION_BINDINGFLAGS
#include "CrossNetSystem/System/Reflection/BindingFlags.h"
#endif

#ifndef CN_NO_SYSTEM_REFLECTION_METHODBASE
#include "CrossNetSystem/System/Reflection/MethodBase.h"
#endif

#ifndef CN_NO_SYSTEM_REFLECTION_METHODINFO
#include "CrossNetSystem/System/Reflection/MethodInfo.h"
#endif

#ifndef CN_NO_SYSTEM_NET_VARIOUS
#include "CrossNetSystem/System/Net/Various.h"
#endif


#endif

