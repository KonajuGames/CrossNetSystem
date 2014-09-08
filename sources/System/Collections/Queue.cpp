/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/Collections/Queue.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_QUEUE
namespace System
{
namespace Collections
{

void * * Queue::s__InterfaceMap__ = NULL;
//void * * Queue::QueueEnumerator::s__InterfaceMap__ = NULL;

void Queue::__RegisterId__()
{
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(Queue));
}

/*
void Queue::QueueEnumerator::__RegisterId__()
{
    CrossNetRuntime::InterfaceInfo info[] = 
    {
        CN_IMPLEMENT(Wrapper__IEnumerator),
    };

    // TODO: Finish
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(QueueEnumerator), info, sizeof(info) / sizeof(info[0]), NULL);
}
*/

Queue::Queue()
{
    // Do nothing...
}

Object * Queue::Clone()
{
    CROSSNET_NOT_IMPLEMENTED();
    return (NULL);
}

}
}

#endif

