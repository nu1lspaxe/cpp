#include "point.h"

/* Constructors and member initializer lists

Member initializer lists are used to do two things:
1. Calling base class constructors
2. Initializing data members before the body of the constructor executes

cppreference: https://en.cppreference.com/w/cpp/language/constructor
*/

Point::Point(double x_param, double y_param)
    : x(new double(x_param)), y(new double(y_param))
{
    std::cout << "Point: " << this << " constructed" << std::endl;
};

// Copy constructor
Point::Point(const Point &source_point)
    : x(new double(*(source_point.get_x()))), y(new double(*(source_point.get_y())))
{
    std::cout << "Point: " << this << " copied" << std::endl;
};

// Move constructor
Point::Point(Point &&source_point)
    : x(new double(*(source_point.steal_x()))), y(new double(*(source_point.steal_y())))
{
    // source_point.invalidate();
    std::cout << "Point: " << this << " moved" << std::endl;
};

Point::~Point()
{
    delete x;
    delete y;
}