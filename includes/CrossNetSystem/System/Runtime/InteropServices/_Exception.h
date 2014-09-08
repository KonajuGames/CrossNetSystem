/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_RUNTIME_INTEROPSERVICES__EXCEPTION_H__
#define __SYSTEM_RUNTIME_INTEROPSERVICES__EXCEPTION_H__

#ifndef CN_NO_SYSTEM_RUNTIME_INTEROPSERVICES__EXCEPTION

#include "CrossNetRuntime/Internal/IInterface.h"

namespace System
{
    class Exception;

    namespace Reflection
    {
        class MethodBase;
    }

    namespace Runtime
    {
        namespace Serialization
        {
            class SerializationInfo;
            struct StreamingContext;
        }

        namespace InteropServices
        {
            class _Exception : public CrossNetRuntime::IInterface
            {
            public:
                CN_DYNAMIC_INTERFACE_ID0()

/*
                virtual System::String * ToString(void * __passed_instance__) = 0;
                virtual System::Boolean Equals(void * __passed_instance__, System::Object * obj) = 0;
                virtual System::Int32 GetHashCode(void * __passed_instance__) = 0;
                virtual System::Type * GetType(void * __passed_instance__) = 0;
*/
                virtual System::String * get_Message(void * __passed_instance__) = 0;
                virtual System::Exception * GetBaseException(void * __passed_instance__) = 0;
                virtual System::String * get_StackTrace(void * __passed_instance__) = 0;
                virtual System::String * get_HelpLink(void * __passed_instance__) = 0;
                virtual void set_HelpLink(void * __passed_instance__, System::String * value) = 0;
                virtual System::String * get_Source(void * __passed_instance__) = 0;
                virtual void set_Source(void * __passed_instance__, System::String * value) = 0;
                virtual void GetObjectData(void * __passed_instance__, System::Runtime::Serialization::SerializationInfo * info, System::Runtime::Serialization::StreamingContext context) = 0;
                virtual System::Exception * get_InnerException(void * __passed_instance__) = 0;
                virtual System::Reflection::MethodBase * get_TargetSite(void * __passed_instance__) = 0;
            };
        }
    }
}
#endif

#endif
