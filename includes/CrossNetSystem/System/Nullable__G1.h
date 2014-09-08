/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_NULLABLE__G1_H__
#define __SYSTEM_NULLABLE__G1_H__

#ifndef CN_NO_SYSTEM_NULLABLE__G1

#include "CrossNetRuntime/Internal/Box.h"

namespace System
{
    template <typename T>
    struct Nullable__G1
    {
    public:
        CN_MULTIPLE_DYNAMIC_OBJECT_ID0(
        sizeof(::CrossNetRuntime::BoxedObject<Nullable__G1>),
        NULL
        )

        Nullable__G1()
            :
            mHasValue(false)
        {
            // Do nothing...
        }

        explicit Nullable__G1(T value)
            :
            mValue(value),
            mHasValue(true)
        {
            // Do nothing...
        }

        // Currently the code is not as efficient as it could be...
        // if you construct a Nullable with a literal or a type T, like this:
        //  int? i = 10;
        // The code generated is going to be:
        //  System::Nullable__G1<System::Int32> nullable = ::CrossNetRuntime::UnsafeCast<System::Nullable__G1<System::Int32>>(10);
        // The reason is because there is no direct conversion in crossnet between the type T and the nullable
        // So first the code is going to cast from 10 to the nullable (the unsafe cast).
        // Then there is going to be a copy constructor (because of the =).
        // We could optimize this a little bit more but I don't believe this is a big performance issue anyway
        // And nullable type is usually not used for performance critical code
        // It's mostly a convenience.

        // Anyway to resolve this, we have to put the copy constructor as public...
        Nullable__G1(const Nullable__G1 & other)
            :
            mValue(other.mValue),
            mHasValue(other.mHasValue)
        {
            // Do nothing...
        }

        static
        Nullable__G1 CreateDefault(void * pointer)
        {
            pointer;
            CROSSNET_FATAL(pointer == NULL, "The pointer should be null!");
            return (Nullable__G1());
        }

        T       get_Value()
        {
            if (mHasValue == false)
            {
                // No value set, tells the user it's not good...
                throw ::System::Exception::__Create__();
            }
            return (mValue);
        }

        Nullable__G1 & __ctor__()
        {
            // Reset the state
            mHasValue = false;
            return (*this);
        }

        System::Boolean get_HasValue()
        {
            return (mHasValue);
        }

        T       GetValueOrDefault()
        {
            if (mHasValue)
            {
                return (mValue);
            }
            return (CrossNetRuntime::GenDefault<T>((T *)NULL));
        }

        T       GetValueOrDefault(T defaultValue)
        {
            if (mHasValue)
            {
                return (mValue);
            }
            return (defaultValue);
        }

        // TODO: We need to change this code
        //  Either we have to find a way to handle specifically "null" for nullable and do the proper thing every time (i.e. call .__ctor__)
        //  Or we need to have Reflector to always return a correct state and alwasy the same (currently we can have NULL in several different manners).

        // Specific operator trick due to another difficulty with Reflector's parsing
        // In some case, it is going to generate something like this:
        //      i = CS$0$0000.HasValue ? new int?(CS$0$0000.GetValueOrDefault() / CS$0$0002) : null;
        // Instead of the usual:
        //      i = CS$0$0000.HasValue ? new int?(CS$0$0000.GetValueOrDefault() + 1) : ((int?) (CS$0$0001 = null));
        //  The null is not in an assignment anymore so it is not interpreted as constructor anymore
        // Given that in current Reflector's state, all the set value are actually parsed by something like this:
        //  nullable = ::CrossNetRuntime::UnsafeCast<::System::Nullable__G1<::System::Int32>>(15);
        // I.e. we detect that's not a nullable so we find a way to cast it, it seems that we are able to detect the NULL with an integer = 0
        Nullable__G1 & operator=(int value)
        {
            CROSSNET_ASSERT(value == 0, "");    // We make sure that it was a NULL
            mHasValue = false;                  // Reset the nullable
            return (*this);
        }

        static Nullable__G1 op_Implicit__System__Nullable__G1(const T value)
        {
            return (Nullable__G1(value));
        }

        // Declare the operators as friend so they can access internal detail of Nullable__G1
        // This is actually not really needed as all methods could be done with public method
        // (.Net code could not take advantage of it anyway...)
        // In any case, this might be more straighforward for the moment
        // We might want to revisit this later...

        // Also note that we had to create those operators because Reflector is a bit too smart
        // It tries to recreate the real C# code, sometime with some bugs
        // In case like these, it actually do operators like calls, instead of for example the .Net generated code:
        //  i = temp.HasValue ? new int?(temp.GetValueOrDefault() + 1) : ((int?) (temp = null));
        // Oh well... Again we try to catch this and recover...

        template <typename U>
        friend System::Boolean operator==(const Nullable__G1<U> & left, const U & right);
        template <typename U>
        friend System::Boolean operator==(const U & left, const Nullable__G1<U> & right);
        template <typename U>
        friend System::Boolean operator!=(const Nullable__G1<U> & left, const U & right);
        template <typename U>
        friend System::Boolean operator!=(const U & left, const Nullable__G1<U> & right);
        template <typename U>
        friend System::Boolean operator<(const Nullable__G1<U> & left, const U & right);
        template <typename U>
        friend System::Boolean operator<(const U & left, const Nullable__G1<U> & right);
        template <typename U>
        friend System::Boolean operator<=(const Nullable__G1<U> & left, const U & right);
        template <typename U>
        friend System::Boolean operator<=(const U & left, const Nullable__G1<U> & right);
        template <typename U>
        friend System::Boolean operator>(const Nullable__G1<U> & left, const U & right);
        template <typename U>
        friend System::Boolean operator>(const U & left, const Nullable__G1<U> & right);
        template <typename U>
        friend System::Boolean operator>=(const Nullable__G1<U> & left, const U & right);
        template <typename U>
        friend System::Boolean operator>=(const U & left, const Nullable__G1<U> & right);

        template <typename U>
        friend Nullable__G1<U> & operator+=(Nullable__G1<U> & left, const U & right);
        template <typename U>
        friend Nullable__G1<U> & operator-=(Nullable__G1<U> & left, const U & right);
        template <typename U>
        friend Nullable__G1<U> & operator*=(Nullable__G1<U> & left, const U & right);
        template <typename U>
        friend Nullable__G1<U> & operator/=(Nullable__G1<U> & left, const U & right);

        template <typename U>
        friend Nullable__G1<U> operator+(Nullable__G1<U> & left, const U & right);
        template <typename U>
        friend Nullable__G1<U> operator+(const U & left, const Nullable__G1<U> & right);

        template <typename U>
        friend Nullable__G1<U> operator-(Nullable__G1<U> & left, const U & right);
        template <typename U>
        friend Nullable__G1<U> operator-(const U & left, const Nullable__G1<U> & right);

        template <typename U>
        friend Nullable__G1<U> operator*(Nullable__G1<U> & left, const U & right);
        template <typename U>
        friend Nullable__G1<U> operator*(const U & left, const Nullable__G1<U> & right);

        template <typename U>
        friend Nullable__G1<U> operator/(Nullable__G1<U> & left, const U & right);
        template <typename U>
        friend Nullable__G1<U> operator/(const U & left, const Nullable__G1<U> & right);

    private:
        T       mValue;
        bool    mHasValue;
    };

    template <typename T>
    System::Boolean operator==(const Nullable__G1<T> & left, const T & right)
    {
        if (left.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (false);
        }
        return (left.mValue == right);
    }

    template <typename T>
    System::Boolean operator==(const T & left, const Nullable__G1<T> & right)
    {
        if (right.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (false);
        }
        return (left == right.mValue);
    }

    //---

    template <typename U>
    System::Boolean operator!=(const Nullable__G1<U> & left, const U & right)
    {
        if (left.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (true);
        }
        return (left.mValue != right);
    }

    template <typename U>
    System::Boolean operator!=(const U & left, const Nullable__G1<U> & right)
    {
        if (right.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (true);
        }
        return (left != right.mValue);
    }

    //---

    template <typename T>
    System::Boolean operator<(const Nullable__G1<T> & left, const T & right)
    {
        if (left.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (false);
        }
        return (left.mValue < right);
    }

    template <typename T>
    System::Boolean operator<(const T & left, const Nullable__G1<T> & right)
    {
        if (right.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (false);
        }
        return (left < right.mValue);
    }

    //---

    template <typename T>
    System::Boolean operator<=(const Nullable__G1<T> & left, const T & right)
    {
        if (left.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (false);
        }
        return (left.mValue <= right);
    }

    template <typename T>
    System::Boolean operator<=(const T & left, const Nullable__G1<T> & right)
    {
        if (right.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (false);
        }
        return (left <= right.mValue);
    }

    //---

    template <typename T>
    System::Boolean operator>(const Nullable__G1<T> & left, const T & right)
    {
        if (left.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (false);
        }
        return (left.mValue > right);
    }

    template <typename T>
    System::Boolean operator>(const T & left, const Nullable__G1<T> & right)
    {
        if (right.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (false);
        }
        return (left > right.mValue);
    }

    //---

    template <typename T>
    System::Boolean operator>=(const Nullable__G1<T> & left, const T & right)
    {
        if (left.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (false);
        }
        return (left.mValue >= right);
    }

    template <typename T>
    System::Boolean operator>=(const T & left, const Nullable__G1<T> & right)
    {
        if (right.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (false);
        }
        return (left >= right.mValue);
    }

    //---

    template <typename T>
    Nullable__G1<T> & operator+=(Nullable__G1<T> & left, const T & right)
    {
        if (left.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (left);
        }
        left.mValue += right;
        return (left);
    }

    template <typename T>
    Nullable__G1<T> & operator-=(Nullable__G1<T> & left, const T & right)
    {
        if (left.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (left);
        }
        left.mValue -= right;
        return (left);
    }

    template <typename T>
    Nullable__G1<T> & operator*=(Nullable__G1<T> & left, const T & right)
    {
        if (left.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (left);
        }
        left.mValue *= right;
        return (left);
    }

    template <typename T>
    Nullable__G1<T> & operator/=(Nullable__G1<T> & left, const T & right)
    {
        if (left.mHasValue == false)
        {
            // If there is no value, the comparison will always be false
            return (left);
        }
        left.mValue /= right;
        return (left);
    }

    template <typename T>
    Nullable__G1<T> operator+(Nullable__G1<T> & left, const T & right)
    {
        if (left.mHasValue == false)
        {
            return (left);
        }
        return (Nullable__G1<T>(left.mValue + right));
    }

    template <typename T>
    Nullable__G1<T> operator+(const T & left, const Nullable__G1<T> & right)
    {
        if (right.mHasValue == false)
        {
            return (left);
        }
        return (Nullable__G1<T>(left + right.mValue));
    }

    template <typename T>
    Nullable__G1<T> operator-(Nullable__G1<T> & left, const T & right)
    {
        if (left.mHasValue == false)
        {
            return (left);
        }
        return (Nullable__G1<T>(left.mValue - right));
    }

    template <typename T>
    Nullable__G1<T> operator-(const T & left, const Nullable__G1<T> & right)
    {
        if (right.mHasValue == false)
        {
            return (left);
        }
        return (Nullable__G1<T>(left - right.mValue));
    }

    template <typename T>
    Nullable__G1<T> operator*(Nullable__G1<T> & left, const T & right)
    {
        if (left.mHasValue == false)
        {
            return (left);
        }
        return (Nullable__G1<T>(left.mValue * right));
    }

    template <typename T>
    Nullable__G1<T> operator*(const T & left, const Nullable__G1<T> & right)
    {
        if (right.mHasValue == false)
        {
            return (left);
        }
        return (Nullable__G1<T>(left * right.mValue));
    }

    template <typename T>
    Nullable__G1<T> operator/(Nullable__G1<T> & left, const T & right)
    {
        if (left.mHasValue == false)
        {
            return (left);
        }
        return (Nullable__G1<T>(left.mValue / right));
    }

    template <typename T>
    Nullable__G1<T> operator/(const T & left, const Nullable__G1<T> & right)
    {
        if (right.mHasValue == false)
        {
            return (left);
        }
        return (Nullable__G1<T>(left / right.mValue));
    }
}
#endif

#endif
