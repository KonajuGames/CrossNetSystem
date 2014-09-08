/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_NET_IPADDRESS_H__
#define __SYSTEM_NET_IPADDRESS_H__

#ifndef CN_NO_SYSTEM_NET_IPADDRESS

#include "CrossNetRuntime/System/Object.h"

namespace System
{
    namespace Net
    {
        class IPAddress : public System::Object
        {
        public:
            CN_DYNAMIC_ID()

            static IPAddress * Parse(System::String * /*address*/)
            {
                // TODO:    Implement correctly...
                return (new IPAddress(0));
            }

            static IPAddress * __Create__(System::UInt32 ipAddress)
            {
                return (new IPAddress(ipAddress));
            }

            virtual System::String * ToString()
            {
                // Not implemented correctly...
                return (NULL);
            }

            System::UInt32 get_Address()
            {
                return (mIpAddress);
            }

        private:
            IPAddress(System::UInt32 ipAddress)
                :
                mIpAddress(ipAddress)
            {
                // Do nothing...
            }

            System::UInt32 mIpAddress;
        };
    }
}

#endif

#endif