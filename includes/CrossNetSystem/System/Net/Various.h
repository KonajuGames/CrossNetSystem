/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_NET_VARIOUS_H__
#define __SYSTEM_NET_VARIOUS_H__

#ifndef CN_NO_SYSTEM_NET_VARIOUS

#include "CrossNetRuntime/System/Object.h"

namespace System
{
    namespace Net
    {
/*
        class EndPoint
        {
        public:
            int get_Port();

        };

        namespace Sockets
        {
            class Socket : public System::Object
            {
            public:
                void Close();
            };

            class TcpListener : public System::Object
            {
            public:
                void __ctor__(int port);
                Socket * get_Server();

                System::Net::EndPoint * get_LocalEndpoint();
                void Start();
            };

            class NetworkStream : public System::Object
            {
            public:
                static NetworkStream * __Create__(Socket *);
                static NetworkStream * __Create__(Socket *, System::Boolean);
                static NetworkStream * __Create__(Socket *, System::IO::FileAccess);
                static NetworkStream * __Create__(Socket *, System::IO::FileAccess, System::Boolean);
            };
        }

        class IPEndPoint : public EndPoint
        {

        };
*/
    }
}
#endif

#endif