#include <bits/stdc++.h>

int main()
{

    // `new` an extreme huge space gonna cause crash.
    // Two methods dealing with this problem: 1) exception 2) nothrow

    int *data;

    // 1. exception
    try
    {
        data = new int[100000000000];
    }
    catch (std::exception &ex)
    {
        // ex.what() -> std::bad_alloc
        std::cout << "error: " << ex.what() << std::endl;
    }

    // 2. nothrow -> become `nullptr`
    data = new(std::nothrow) int[100000000000];
    
    if (data != nullptr)
        std::cout << "data allocated: " << data << std::endl;
    else
        std::cout << "data allcate failed: " << data << std::endl;
  
    return 0;
}