#include <bits/stdc++.h>

/* Friend declaration
The friend declaration appears in a class body and grants a function or another class access to private and protected members of the class where the friend declaration appears.

cppreference: https://en.cppreference.com/w/cpp/language/friend
*/

class Transportation
{
    friend class Station;

public:
    Transportation(const std::string_view type, std::string_view color, int years)
        : _type{type}, _color{color}, tYears{years} {}

private:
    std::string_view _type;
    std::string_view _color;
    int tYears;
};

class Station
{
public:
    void PrintDetails(const Transportation &t) const
    {
        std::cout << t._type << " is " << t._color << ", years: " << t.tYears << std::endl;
    }
};

int main()
{
    Station station;

    Transportation t1("Car", "Black", 10);
    station.PrintDetails(t1);

    return 0;
}