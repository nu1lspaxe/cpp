#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    std::cout << "this process has " << argc << " paramaters." << std::endl;

    if (argc > 1)
    {
        for (size_t i{1}; i < argc; i++)
        {
            std::cout << "the " << i << "th element is " << argv[i] << std::endl;
        }
    }

    return 0;
}