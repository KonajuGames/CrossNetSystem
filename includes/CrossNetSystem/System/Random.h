/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_RANDOM_H__
#define __SYSTEM_RANDOM_H__

#ifndef CN_NO_SYSTEM_RANDOM

#include "CrossNetRuntime/System/Object.h"

namespace System
{
    // Incomplete definition
    class Random : ::System::Object
    {
    public:
        CN_DYNAMIC_ID()

        System::Int32 Next()
        {
            return (mRandom++);
        }

        System::Int32 Next(System::Int32 max)
        {
            int result = mRandom++;
            return (result % max);
        }

        System::Int32 Next(System::Int32 min, System::Int32 max)
        {
            int result = mRandom++;
            result -= min;
            result %= (max - min);
            return (result);
        }

        static Random * __Create__()
        {
            Random * __temp__ = new Random();
            // No __ctor__ function to call here...
            __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
            return (__temp__);
        }

        static Random * __Create__(Int32 seed)
        {
            Random * __temp__ = new Random(seed);
            // No __ctor__ function to call here...
            __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
            return (__temp__);
        }

    protected:
        Random()
            :
            mRandom(999)
        {
            // Do nothing...
        }

        Random(System::Int32 seed)
            :
        mRandom(seed)
        {
            // Do nothing...
        }

    private:
        int mRandom;
    };
}
#endif

#endif
