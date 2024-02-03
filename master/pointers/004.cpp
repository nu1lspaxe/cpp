#include <bits/stdc++.h>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Nice to meet you, " << name << std::endl;

    // Use current time as seed for random generator
    std::srand(std::time(0));
    // RAND_MAX

    const char *fruits[]{
        "Avocado", "Banana", "Apple", "Mango", "Kiwi", "Orange",
        "Pineapple", "Watermelon", "Lemon", "Apricot", "Blueberry",
        "Plum", "Cherry", "Fig", "Papaya", "Grapefruit", "Strawberry"};

    bool end{false};
    int curr{0};

    while (!end)
    {
        std::cout << std::endl;
        curr = std::rand() % std::size(fruits);
        std::cout << "Your daily fruit is " << fruits[curr] << std::endl;

        std::cout << "Do you like it? (Y[Yes] / others will be considered as [No]) ";
        char input;
        std::cin >> input;

        end = (input == 'Y' || input == 'y') ? true : false;
        if (end)
            std::cout << "Enjoy your daily fruit, my lord." << std::endl;
    }
    std::cout << std::endl;

    int nums[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr{nums};

    std::cout << "nums[0]: " << nums[0] << std::endl;
    std::cout << "ptr[0]: " << ptr[0] << std::endl;
    std::cout << "*num: " << *nums << std::endl;
    std::cout << "*(ptr+1): " << *(ptr+1) << std::endl;

    return 0;
}