/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_PREDICATE__G1_H__
#define __SYSTEM_PREDICATE__G1_H__

#ifndef CN_NO_SYSTEM_PREDICATE__G1
#include "CrossNetRuntime/System/Delegate.h"

namespace System
{

    // Declare this delegate:
    // public delegate bool Predicate<U>(U obj);

    //#define CREATE_DELEGATE__G(className, returnKeyword, returnValue, methodSignature, parameters, templateParametersDeclaration, templateParameters)
    // className = "Predicate__G1"                      The delegate name is Predicate
    // returnKeyword = "return"                         Because the function is returning something, empty otherwise
    // returnValue = "System::Boolean"                  Because the function is returning a boolean
    // methodSignature = "__W__(typename U obj)"        Parameters used for the signature Predicate__G1(typename U obj);
    //                                                  We use typename because U is a template and it helps some compiler to do so
    // parameters = "__W__(obj)"                        Parameters passed when we call the function. Predicate__G1(obj)
    // templateParametersDeclaration = "typename U"     Parameters used for template declaration template <typename U> class Predicate__G
    // templateParameters = "U"                         Parameters used for template use class Foo : Predicate__G1<U>

    // Because there is only one template parameter, there is no need to use __U__ for "typename U" and "U"
    CREATE_DELEGATE__G(Predicate__G1, return, System::Boolean, __W1__(typename U obj), __W1__(obj), typename U, U)

    // If we wanted to create a delegate with two generic arguments, we should do instead:
    //  CREATE_DELEGATE__G(Predicate2__G2, return, System::Boolean, (typename U obj, typename V obj2), (obj, obj2), __W__(typename U, typename V), __W__(U, V))
}
#endif

#endif
