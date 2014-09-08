/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/DisabledTypes.h"
#include "CrossNetSystem/System/Globalization/CultureInfo.h"

#ifndef CN_NO_SYSTEM_GLOBALIZATION_CULTURE_INFO
namespace System
{
    namespace Globalization
    {

void * * CultureInfo::s__InterfaceMap__ = NULL;
CultureInfo * CultureInfo::sInvariantCulture = NULL;

void System::Globalization::CultureInfo::__RegisterId__()
{
    CrossNetRuntime::InterfaceInfo info[] = 
    {
        {	Wrapper__ICloneable::__GetId__(),           new Wrapper__ICloneable         },
        {	Wrapper__IFormatProvider::__GetId__(),      new Wrapper__IFormatProvider    },
    };
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(System::Globalization::CultureInfo), info, sizeof(info) / sizeof(info[0]), NULL);

//    sInvariantCulture = CultureInfo::__Create__();
}

::System::Object * CultureInfo::Wrapper__ICloneable::Clone(void * /*__passed_instance__*/)
{
    CROSSNET_NOT_IMPLEMENTED();
    return (NULL);
}

::System::Object * CultureInfo::Wrapper__IFormatProvider::GetFormat(void * /*__passed_instance__*/, ::System::Type * /*formatType*/)
{
    CROSSNET_NOT_IMPLEMENTED();
    return (NULL);
}

    }
}


#endif
