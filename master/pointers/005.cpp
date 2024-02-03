#include <bits/stdc++.h>

int main()
{

    int num{10};
    int num2{20};

    // const variables require an initializer
    // for example:
    // const int* const ptr; -> error because pointer doesn't initialize

    /* Way to read `*` */

    // const int pointer to const pointer
    // value CANNOT be modified; pointer CANNOT be modified
    const int *const ptr{};
    // Since ptr has been initialized as nullptr, we cannot access its address (ptr)

    // int pointer to const pointer
    // value CAN be modified; pointer CANNOT be modified
    int *const ptr2{&num};

    // const int pointer to pointer
    // value CAN be modified; address CAN be modified
    const int *ptr3 {&num};

    std::cout << "num: " << num << ", " << &num << std::endl;
    std::cout << "num2: " << num2 << ", " << &num2 << std::endl;
    std::cout << "ptr: " << ptr << ", which is a nullptr" << std::endl;
    std::cout << "ptr2: " << *ptr2 << ", " << ptr2 << std::endl;
    std::cout << "ptr3: " << *ptr3 << ", " << ptr3 << std::endl;
    std::cout << std::endl;

    // *ptr = num2; -> error
    // ptr2 cannot initialize as a nullptr, otherwise cause error
    *ptr2 = num2;
    std::cout << "Value of ptr2 changed, but its Address doesn't change.\n\n";
    std::cout << "num2: " << num2 << ", " << &num2 << std::endl;
    std::cout << "ptr2: " << *ptr2 << ", " << ptr2 << std::endl;
    std::cout << std::endl;

    ptr3 = &num2;
    std::cout << "Value and Address of ptr3 has been changed.\n\n";
    std::cout << "num2: " << num2 << ", " << &num2 << std::endl;
    std::cout << "ptr3: " << *ptr3 << ", " << ptr3 << std::endl;
    std::cout << std::endl;

    return 0;
}