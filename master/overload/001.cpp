#include <bits/stdc++.h>

struct Point
{
    double x, y;

    // overload operator '<'
    bool operator<(const Point &b) const
    {
        return x * x + y * y < (b.x * b.x) + (b.y * b.y);
    }

    // overload operator '+'
    Point operator+(const Point &b) const
    {
        Point c;
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
    Point a{5.0, 7.5};
    Point b{1.0, 2.5};

    std::cout << std::boolalpha;
    std::cout << "Is a < b? " << (a < b) << std::endl;

    Point c {a + b};
    std::cout << "c: " << c.toString() << std::endl;

    return 0;
}