#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    // No initialize -> supposed to be junk data (random)
    int junk[10];

    // Print data: all output is 0
    std::cout << "==== Uninitialized Data ====" << std::endl;
    for (size_t i{0}; i < 10; ++i)
        std::cout << "junk: " << junk[i] << std::endl;

    std::cout << std::endl;

    // Wirte and Print data
    std::cout << "==== Written Data ====" << std::endl;
    for (size_t i{0}; i < 10; ++i)
    {
        junk[i] = (i + 1) * 10;
        std::cout << "written: " << junk[i] << std::endl;
    }

    std::cout << std::endl;

    // Declaration as well as Initialize (default is 0)
    int good[10] {};
    // Those undefined will be initial as 0
    int great[10] {1, 2, 3, 4, 5};

    std::cout << "==== Declaration & Initialize  Data ====" << std::endl;
    for (size_t i{0}; i < 10; ++i)
        std::cout << "good: " << good[i] << ", great: " << great[i] << std::endl;

    std::cout << std::endl;

    std::cout << "==== Summarize of Great Data ====" << std::endl;
    int sum {};

    for (int ele : great)
        sum += ele;
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}