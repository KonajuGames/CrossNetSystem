/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_DIVIDEBYZEROEXCEPTION_H__
#define __SYSTEM_DIVIDEBYZEROEXCEPTION_H__

#ifndef CN_NO_SYSTEM_DIVIDEBYZEROEXCEPTION
#include "CrossNetSystem/System/Exception.h"

namespace System
{
    class DivideByZeroException : public Exception
    {
    public:
        CN_DYNAMIC_ID();

        static DivideByZeroException * __Create__(System::String * /*text*/)
        {
            DivideByZeroException * __temp__ = new DivideByZeroException();
            __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
            return (__temp__);
        }
    };
}

#endif

#endif