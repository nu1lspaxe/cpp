#include <bits/stdc++.h>
#include "point.h"

int main()
{
    Point p1(3.5, 2.7);
    std::cout << "p1: ";
    p1.PrintInfo();

    Point p2(p1);
    std::cout << "p2: ";
    p2.PrintInfo();

    // Move from temporary
    Point p3(std::move(Point(9.9, 1.1)));
    std::cout << "p3: ";
    p3.PrintInfo();

    p2.set_x(1.8);
    p2.set_y(4.9);

    std::cout << "p1: ";
    p1.PrintInfo();
    std::cout << "p2: ";
    p2.PrintInfo();
    std::cout << "p3: ";
    p3.PrintInfo();

    return 0;
}