#include "person.h"

Person::Person(std::string_view name, Gender gender, int age, double weight, double height)
{
    _name = name;
    _gender = gender;
    _age = age;
    _weight = weight;
    _height = height;
}

double Person::GetBMI() const
{
    return _weight / (_height * _height);
}

void Person::set_name(std::string_view name)
{
    this->_name = name;
}
void Person::set_gender(Gender gender)
{
    this->_gender = gender;
}
void Person::set_age(int age)
{
    _age = age;
}
void Person::set_weight(double weight)
{
    _weight = weight;
}
void Person::set_height(double height)
{
    _height = height;
}

std::string_view Person::get_name() const
{
    return this->_name;
}

Gender Person::get_gender()
{
    return this->_gender;
}
int Person::get_age()
{
    // Mutable
    ++this->_age;
    return _age;
}
int Person::get_weight()
{
    return _weight;
}
int Person::get_height()
{
    return _height;
}