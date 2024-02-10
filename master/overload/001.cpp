#include <bits/stdc++.h>

struct pointer
{
    double x, y;

    // overload operator '<'
    bool operator<(const pointer &b) const
    {
        return x * x + y * y < (b.x * b.x) + (b.y * b.y);
    }

    // overload operator '+'
    pointer operator+(const pointer &b) const
    {
        pointer c;
        c.x = x + b.x;
        c.y = y + b.y;
        return c;
    }

    std::string toString() {
        std::stringstream ss;
        ss << "(" << x << "," << y << ")";
        return ss.str();
    }
};

int main()
{
    pointer a{5.0, 7.5};
    pointer b{1.0, 2.5};

    std::cout << std::boolalpha;
    std::cout << "Is a < b? " << (a < b) << std::endl;

    pointer c {a + b};
    std::cout << "c: " << c.toString() << std::endl;

    return 0;
}