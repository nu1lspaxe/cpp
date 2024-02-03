#include <bits/stdc++.h>

const size_t TIMES {10};

int main(int argc, char *argv[])
{

    std::cout << "==== Do while for loop ====" << std::endl;
    int curr {0};
    do
    {
        std::cout << "curr: " << curr << std::endl;
        ++curr;
    } while (curr < TIMES);

    std::cout << std::endl;

    std::cout << "==== Auto type deduction ====" << std::endl;
    int values[5] {1, 2, 3, 4, 5};
    for (auto v : values)
    {
        std::cout << v << " ";
    }

    std::cout << "\n\n";

    std::cout << "=== Print array in reverse order ===" << std::endl;
    int* values_ptr {values};
    for ( size_t i{std::size(values)}; i > 0; --i)
    {
        std::cout << *(values_ptr + i - 1) << " ";
    }

    std::cout << "\n\n";
    
    return 0;
}