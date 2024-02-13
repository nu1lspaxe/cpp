#include <bits/stdc++.h>

/*
Class templates, function templates, and non-template functions (typically members of class templates) might be associated with a constraint, which specifies the requirements on template arguments, which can be used to select the most appropriate function overloads and template specializations.

Named sets of such requirements are called concepts. Each concept is a predicate, evaluated at compile time, and becomes a part of the interface of a template where it is used as a constraint:

cppreference: https://en.cppreference.com/w/cpp/language/constraints
*/

// 1. In requires
template <typename T>
    requires std::integral<T>
T add(T a, T b)
{
    return a + b;
}

// 2. In concept + prefix of type
template <typename T>
concept Comparable = std::is_integral_v<T>;
Comparable auto max(Comparable auto a, Comparable auto b)
{
    return (a > b) ? a : b;
}

// 3. Concept
template <typename T>
concept Decrementable = requires(T a) {
    a -= 1;
    --a;
    a--;
};

// Self defined concept in requires
template <typename T>
    requires Decrementable<T>
T sub(T a, T b)
{
    return a + b;
}

// 4. Compound requirement
template <typename T>
concept Addable = requires(T a, T b) {
    {
        a + b
    } -> std::convertible_to<int>;
};


int main()
{
    return 0;
}