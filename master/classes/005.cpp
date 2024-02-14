#include <bits/stdc++.h>

/* static_assert vs assert
static_assert happends in complie time, while assert happends in runtime.
*/

/* std::initializer_list
cppreference: https://en.cppreference.com/w/cpp/utility/initializer_list

initializer_list vs vector
stackoverflow: https://stackoverflow.com/questions/27753420/initializer-list-vs-vector
*/

struct Coordinate
{
public:
    Coordinate(std::initializer_list<double> list)
    {
        assert(list.size() == 2);

        x = *(list.begin());
        y = *(list.begin()+1);
    }

    void PrintInfo() const
    {
        std::cout << "(x:" << x << y << ")" << std::endl;
    }

private:
    double x;
    double y;
};


// struct default value is public
struct Square
{
    double x;
    double y;
    double z;

    double GetVolumn()
    {
        return x * y * z;
    }
};

int main()
{
    Square s1{.x=2.2, .y=3.3, .z=4.4};
    std::cout << "Volumn: " << s1.GetVolumn() << std::endl;

    return 0;
}