#include <bits/stdc++.h>

const size_t TIMES {10};

int main(int argc, char *argv[])
{

    std::cout << "==== Do While for loop ====" << std::endl;
    int curr {0};
    do
    {
        std::cout << "curr: " << curr << std::endl;
        ++curr;
    } while (curr < TIMES);

    std::cout << std::endl;

    std::cout << "==== Auto Type deduction ====" << std::endl;
    int values[5] {1, 2, 3, 4, 5};
    for (auto v : values)
    {
        std::cout << "value: " << v << std::endl;
    }
    
    return 0;
}