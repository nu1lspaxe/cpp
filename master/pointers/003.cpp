#include <bits/stdc++.h>

int main()
{
    constexpr size_t size{10};

    // initialize all elements as 0
    int *ptr { new(std::nothrow) int[size]{}};
    // delete address from dynamic memory (heap)
    delete [] ptr;  

    // initialize pointer with nullptr
    int *ptr {};
    // delete address from dynamic memory (heap)
    delete ptr;

    int stackInt[size] {1, 2, 3, 4, 5};
    int *heapInt = new int[5] {1, 2, 3, 4, 5};

    // While this method cannot used in heapInt, since it lives in heap(dynamic) instead of stack(static).
    for (auto num : stackInt)
        std::cout << num << " ";
    std::cout << "\n\n";

    return 0;
}