/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/BitConverter.h"

#include "CrossNetRuntime/System/Array.h"

#ifndef CN_NO_SYSTEM_BITCONVERTER
namespace System
{
void * * BitConverter::s__InterfaceMap__ = NULL;

void BitConverter::__RegisterId__()
{
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(System::BitConverter));
}

::System::Array__G< ::System::Byte > * BitConverter::GetBytes(::System::Double value)
{
    union U
    {
        System::Double  d;
        System::Byte    b[8];
    };

    U u;

    u.d = value;
    ::System::Array__G< ::System::Byte > * array = ::System::Array__G< ::System::Byte >::__Create__(8, u.b);
    return (array);
}

::System::Double BitConverter::ToDouble(::System::Array__G< ::System::Byte > * value, ::System::Int32 startIndex)
{
    CROSSNET_ASSERT(value->get_Length() >= startIndex + 8, "");
    union U
    {
        System::Double  d;
        System::Byte    b[8];
    };

    U u;
    __memcopy__(u.b, value->__ToPointer__() + startIndex, 8);
    return (u.d);
}

}
#endif
