#include <bits/stdc++.h>

int main()
{
    int num{10};
    int *ptr{&num};
    int &ref{num};

    std::cout << "num: " << num << ", " << &num << std::endl;
    std::cout << "ptr: " << *ptr << ", " << ptr << std::endl;
    std::cout << "ref: " << ref << ", " << &ref << std::endl;
    std::cout << std::endl;

    int num2{20};

    ptr = &num2;
    std::cout << "num: " << num << ", " << &num << std::endl;
    std::cout << "ptr: " << *ptr << ", " << ptr << std::endl;
    std::cout << "ref: " << ref << ", " << &ref << std::endl;
    std::cout << std::endl;

    // Equals to *ptr = num2;
    ref = num2;
    std::cout << "num: " << num << ", " << &num << std::endl;
    std::cout << "ptr: " << *ptr << ", " << ptr << std::endl;
    std::cout << "ref: " << ref << ", " << &ref << std::endl;
    std::cout << std::endl;

    /* Use references wherever you can, and pointers wherever you must. */

    // reference to non-const must have an initial value
    const int &reff{};
    // can access address
    std::cout << "reff: " << reff << ", " << &reff << std::endl;

    const int *ptrr{};
    // can not access address

    if (ptrr == nullptr)
        std::cout << "ptrr equals to nullptr" << std::endl;


    return 0;
}