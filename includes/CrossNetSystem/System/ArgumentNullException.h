/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_ARGUMENTNULLEXCEPTION_H__
#define __SYSTEM_ARGUMENTNULLEXCEPTION_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_ARGUMENTNULLEXCEPTION

namespace System
{
    // Complete
    class ArgumentNullException : public ::System::ArgumentException
    {
        CN_DYNAMIC_ID()
        public:
        void __ctor__();
        static ::System::ArgumentNullException * __Create__();
        public:
        void __ctor__(::System::String * paramName);
        static ::System::ArgumentNullException * __Create__(::System::String * paramName);
        public:
        void __ctor__(::System::String * message, ::System::Exception * innerException);
        static ::System::ArgumentNullException * __Create__(::System::String * message, ::System::Exception * innerException);
        public:
        void __ctor__(::System::String * paramName, ::System::String * message);
        static ::System::ArgumentNullException * __Create__(::System::String * paramName, ::System::String * message);
        public:
        void __ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        static ::System::ArgumentNullException * __Create__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        public:
        static void __CreateInterfaceMap__();
    };
}

#endif

#endif