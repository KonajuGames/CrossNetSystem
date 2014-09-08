/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_ARGUMENTEXCEPTION_H__
#define __SYSTEM_ARGUMENTEXCEPTION_H__

#ifndef CN_NO_SYSTEM_ARGUMENTEXCEPTION
#include "CrossNetRuntime/Internal/BaseTypes.h"
#include "CrossNetSystem/System/SystemException.h"

namespace System
{
    // Complete
    class ArgumentException : public ::System::SystemException
    {
        CN_DYNAMIC_ID()
        public:
        ::System::String * m_paramName;
        public:
        void __ctor__();
        static ::System::ArgumentException * __Create__();
        public:
        void __ctor__(::System::String * message);
        static ::System::ArgumentException * __Create__(::System::String * message);
        public:
        void __ctor__(::System::String * message, ::System::Exception * innerException);
        static ::System::ArgumentException * __Create__(::System::String * message, ::System::Exception * innerException);
        public:
        void __ctor__(::System::String * message, ::System::String * paramName, ::System::Exception * innerException);
        static ::System::ArgumentException * __Create__(::System::String * message, ::System::String * paramName, ::System::Exception * innerException);
        public:
        void __ctor__(::System::String * message, ::System::String * paramName);
        static ::System::ArgumentException * __Create__(::System::String * message, ::System::String * paramName);
        public:
        void __ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        static ::System::ArgumentException * __Create__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
/*
        public:
        ::System::String * get_Message();
        public:
        virtual ::System::String * get_ParamName();
        public:
        ::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
*/
        class Wrapper__ISerializable : public ::System::SystemException::Wrapper__ISerializable
        {
            public:
            public:
            virtual ::System::Void GetObjectData(void * /*__passed_instance__*/, ::System::Runtime::Serialization::SerializationInfo * /*info*/, ::System::Runtime::Serialization::StreamingContext /*context*/)
            {
                CROSSNET_NOT_IMPLEMENTED();
            }
            CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
        };
        public:
        static void __CreateInterfaceMap__();
    };
}

#endif

#endif