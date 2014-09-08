/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_OVERFLOWEXCEPTION_H__
#define __SYSTEM_OVERFLOWEXCEPTION_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_OVERFLOWEXCEPTION

namespace System
{
    // Complete
    class OverflowException : public ::System::ArithmeticException
    {
        CN_DYNAMIC_ID()
        public:
        void __ctor__();
        static ::System::OverflowException * __Create__();
        public:
        void __ctor__(::System::String * message);
        static ::System::OverflowException * __Create__(::System::String * message);
        public:
        void __ctor__(::System::String * message, ::System::Exception * innerException);
        static ::System::OverflowException * __Create__(::System::String * message, ::System::Exception * innerException);
        public:
        void __ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        static ::System::OverflowException * __Create__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        public:
        static void __CreateInterfaceMap__();
    };
}

#endif

#endif