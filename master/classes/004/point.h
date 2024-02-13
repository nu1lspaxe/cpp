#pragma once
#ifndef POINT_H
#define POINT_H

/* Copy constructors and Move constructors
A copy constructor must leave the source object intact, so it must allocate its own copy of the object's data for itself. Both objects now refer to different copies of the same data in different areas of memory.

A move constructor, on the other hand, can simply "move" the data by taking ownership of the pointer that refers to the data, leaving the data itself where it resides. The new object now points at the original data, and the source object is modified to no longer point at the data. The data itself is left untouched.

cppreference:
- https://en.cppreference.com/w/cpp/language/copy_constructor
- https://en.cppreference.com/w/cpp/language/move_constructor
*/

#include <iostream>

class Point
{
private:
    double *x{};
    double *y{};

    void invalidate()
    {
        x = nullptr;
        y = nullptr;
    }

public:
    Point(double x_param, double y_param);
    ~Point();

    // Copy constructor
    Point(const Point &source_point);

    // Move constructor
    Point(Point &&source_point);

    // Setters
    void set_x(double x) { *(this->x) = x; }
    void set_y(double y) { *(this->y) = y; }
    // Getters
    double *get_x() const { return this->x; }
    double *get_y() const { return this->y; }

    double *steal_x()
    {
        double *new_x = x;
        x = nullptr;
        return new_x;
    }

    double *steal_y()
    {
        double *new_y = y;
        y = nullptr;
        return new_y;
    }

    // Utilities
    void PrintInfo() const { std::cout << "(x:" << *x << ",y:" << *y << ")" << std::endl; }
};

#endif