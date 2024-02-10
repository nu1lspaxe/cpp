#include <bits/stdc++.h>

int main()
{
    int *ptr1;
    int *ptr2{ptr1};

    std::cout << "Since ptr2 was assigned as ptr1, so their value would be the same. \n\n";
    std::cout << "ptr1: " << ptr1 << std::endl;
    std::cout << "ptr2: " << ptr2 << std::endl;
    std::cout << std::endl;

    // ptr1 cannot be deleted because it's `dangling pointer` (undefined)
    delete ptr2;

    int *ptr3{new int{10}};
    std::cout << "The value stored in ptr3 is " << *ptr3 << "\n\n";

    std::cout << "Assigning ptr4 with the address of int variable num. \n\n";

    int num {10};
    int *ptr4 {&num};
    std::cout << "num : " << num << std::endl;
    std::cout << "num : " << &num << std::endl;
    std::cout << "ptr4: " << *ptr4 << std::endl;
    std::cout << "ptr4: " << ptr4 << std::endl;

    return 0;
}