/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR__G2_H__
#define __SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR__G2_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR__G2
namespace System
{
    namespace Collections
    {
        namespace Generic
        {
            template <typename TKey, typename TValue>
            struct KeyValuePair__G2
            {
                TKey    get_Key()
                {
                    return (mKey);
                }

                TKey    set_Key(TKey key)
                {
                    mKey = key;
                    return (key);
                }

                TValue  get_Value()
                {
                    return (mValue);
                }

                TValue  set_Value(TValue value)
                {
                    mValue = value;
                    return (value);
                }

            private:
                TKey    mKey;
                TValue  mValue;
            };
        }
    }
}
#endif

#endif
