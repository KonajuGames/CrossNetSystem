/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_EVENTARGS_H__
#define __SYSTEM_EVENTARGS_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_EVENTARGS

namespace System
{
    class EventArgs : public ::System::Object
    {
        CN_DYNAMIC_ID()
        public:
        static ::System::EventArgs * Empty;
        public:
        void __ctor__();
        static ::System::EventArgs * __Create__();
        public:
        static void Static__ctor__();
        public:
        static void __CreateInterfaceMap__();
    };
}

#endif

#endif