/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_ACTIVATOR_H__
#define __SYSTEM_ACTIVATOR_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_ACTIVATOR
namespace System
{
    // Incomplete definition
    class Activator
    {
    public:

        static
        ::System::Object * CreateInstance(::System::Type * type);
        static
        ::System::Object * CreateInstance(::System::Type * type, ::System::Array__G<::System::Object *> *);

        template <typename T>
        static T CreateInstance__G1()
        {
            return (Factory<T>::Create());
        }

    private:
        // We have to create a class so we can have partial specialization
        // It seems that we can't have the same with method...

        // For non pointer version (like int or struct)
        template <typename T>
        class Factory
        {
        public:
            static T    Create()
            {
                // Non initialized base type will be randomly set and we want 0
                // Parameterless struct constructor can't be defined by the user
                // We override it and set all the fields to 0
                // So this code is safe...
                T   temp(0);
                // Return the value
                return (temp);
            }
        };

        template <typename T>
        class Factory<T *>
        {
        public:
            static T * Create()
            {
                // Call __Create__(), by definition this should:
                //  Do the allocation, set the vtable correctly
                //  Set the interface map
                //  Call __ctor__ if it exists
                T * temp = T::__Create__();
                return (temp);
            }
        };
    };
}
#endif

#endif
