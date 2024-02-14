#include <bits/stdc++.h>
#include "inline.h"

int Sum_1(int a, int b)
{
    ++counter;
    return sum(a, b);
}



int main()
{
    std::cout << "sum(3,5): " << Sum_1(3, 5) << std::endl;
    std::cout << "counter: " << counter << std::endl;

    std::cout << "sum(7,9): " << Sum_1(7,9) << std::endl;
    std::cout << "counter: " << counter << std::endl;

    std::cout << "sum(1,2): " << Sum_1(1,2) << std::endl;
    std::cout << "counter: " << counter << std::endl;

    return 0;
}