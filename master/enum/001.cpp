#include <bits/stdc++.h>

enum class Animal : int
{
    Cat = 1,
    Dog,
    Rabbit,
    Monkey,
    Horse
};

int GetLegCount(Animal a)
{
    switch (a)
    {
        using enum Animal;

    case Cat:
        return 4;
    case Dog:
        return 4;
    case Rabbit:
        return 2;
    case Monkey:
        return 4;
    case Horse:
        return 4;
    default:
        return -1;
    }
}

std::string_view getName(Animal a)
{
    switch (a)
    {
        using enum Animal;

    case Cat:
        return "Cat";
    case Dog:
        return "Dog";
    case Rabbit:
        return "Rabbit";
    case Monkey:
        return "Monkey";
    case Horse:
        return "Horse";
    default:
        return "Undefined";
    }
}

int main()
{
    Animal animal{Animal::Cat};
    std::cout << getName(animal) << " has " << GetLegCount(animal) << 
                " legs. (id) = " << static_cast<int>(animal) << std::endl;

    return 0;
}