/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_H__
#define __SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION

namespace System
{
    // Complete
    class ArgumentOutOfRangeException : public ::System::ArgumentException
    {
        CN_DYNAMIC_ID()
        public:
        static ::System::String * _rangeMessage;
        public:
        ::System::Object * m_actualValue;
        public:
        static ::System::String * get_RangeMessage();
        public:
        void __ctor__();
        static ::System::ArgumentOutOfRangeException * __Create__();
        public:
        void __ctor__(::System::String * paramName);
        static ::System::ArgumentOutOfRangeException * __Create__(::System::String * paramName);
        public:
        void __ctor__(::System::String * paramName, ::System::String * message);
        static ::System::ArgumentOutOfRangeException * __Create__(::System::String * paramName, ::System::String * message);
        public:
        void __ctor__(::System::String * message, ::System::Exception * innerException);
        static ::System::ArgumentOutOfRangeException * __Create__(::System::String * message, ::System::Exception * innerException);
        public:
        void __ctor__(::System::String * paramName, ::System::Object * actualValue, ::System::String * message);
        static ::System::ArgumentOutOfRangeException * __Create__(::System::String * paramName, ::System::Object * actualValue, ::System::String * message);
        public:
        ::System::String * get_Message();
        public:
        virtual ::System::Object * get_ActualValue();
        public:
        ::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        public:
        void __ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        static ::System::ArgumentOutOfRangeException * __Create__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        class Wrapper__ISerializable : public ::System::ArgumentException::Wrapper__ISerializable
        {
            public:
            public:
            virtual ::System::Void GetObjectData(void * __passed_instance__, ::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
            CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
        };
        public:
        static void __CreateInterfaceMap__();
    };
}

#endif

#endif