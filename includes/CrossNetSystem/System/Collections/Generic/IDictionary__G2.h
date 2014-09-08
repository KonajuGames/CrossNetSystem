/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY__G2_H__
#define __SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY__G2_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY__G2
namespace System
{
    namespace Collections
    {
        namespace Generic
        {
            template <typename TKey, typename TValue>
            class IDictionary__G2 : public CrossNetRuntime::IInterface
            {
            public:
                // TODO: Fill the derived interfaces correctly
                CN_MULTIPLE_DYNAMIC_INTERFACE_ID0()

                virtual TValue get_Item(void * __instance__, TKey key) = 0;
                virtual TValue set_Item(void * __instance__, TKey key, TValue value) = 0;
                virtual System::Collections::Generic::ICollection__G1<TKey> * get_Keys(void * __instance__) = 0;
                virtual System::Collections::Generic::ICollection__G1<TValue> * get_Values(void * __instance__) = 0;
                virtual void Add(void * __instance__, TKey key, TValue value) = 0;
                virtual System::Boolean ContainsKey(void * __instance__, TKey key) = 0;
                virtual System::Boolean Remove(void * __instance__, TKey key) = 0;
                virtual System::Boolean TryGetValue(void * __instance__, TKey key, TValue * value) = 0;
            };
        }
    }
}
#endif

#endif
