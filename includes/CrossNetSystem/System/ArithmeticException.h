/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_ARITHMETICEXCEPTION_H__
#define __SYSTEM_ARITHMETICEXCEPTION_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_ARITHMETICEXCEPTION

namespace System
{
    // Complete
    class ArithmeticException : public ::System::SystemException
    {
        CN_DYNAMIC_ID()
        public:
        void __ctor__();
        static ::System::ArithmeticException * __Create__();
        public:
        void __ctor__(::System::String * message);
        static ::System::ArithmeticException * __Create__(::System::String * message);
        public:
        void __ctor__(::System::String * message, ::System::Exception * innerException);
        static ::System::ArithmeticException * __Create__(::System::String * message, ::System::Exception * innerException);
        public:
        void __ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        static ::System::ArithmeticException * __Create__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        public:
        static void __CreateInterfaceMap__();
    };
}

#endif

#endif