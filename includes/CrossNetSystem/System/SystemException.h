/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_SYSTEMEXCEPTION_H__
#define __SYSTEM_SYSTEMEXCEPTION_H__

#ifndef CN_NO_SYSTEM_ARITHMETICEXCEPTION

#include "CrossNetSystem/System/Exception.h"

namespace System
{
    // Complete
    class SystemException : public ::System::Exception
    {
        CN_DYNAMIC_ID()
        public:
        void __ctor__();
        static ::System::SystemException * __Create__();
        public:
        void __ctor__(::System::String * message);
        static ::System::SystemException * __Create__(::System::String * message);
        public:
        void __ctor__(::System::String * message, ::System::Exception * innerException);
        static ::System::SystemException * __Create__(::System::String * message, ::System::Exception * innerException);
        public:
        void __ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        static ::System::SystemException * __Create__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        public:
        static void __CreateInterfaceMap__();
    };
}

#endif

#endif