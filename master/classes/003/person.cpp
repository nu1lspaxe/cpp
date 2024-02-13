#include "person.h"

Person::Person(std::string_view name_param, Gender gender_param, int age_param, double weight_param, double height_param)
{
    name = name_param;
    gender = gender_param;
    age = age_param;
    weight = weight_param;
    height = height_param;
}

double Person::GetBMI() const
{
    return weight / (height * height);
}

void Person::set_name(std::string_view name_param)
{
    this->name = name_param;
}
void Person::set_gender(Gender gender_param)
{
    this->gender = gender_param;
}
void Person::set_age(int age_param)
{
    age = age_param;
}
void Person::set_weight(double weight_param)
{
    weight = weight_param;
}
void Person::set_height(double height_param)
{
    height = height_param;
}

std::string_view Person::get_name() const
{
    return this->name;
}

Gender Person::get_gender()
{
    return this->gender;
}
int Person::get_age()
{
    // Mutable
    ++this->age;
    return age;
}
int Person::get_weight()
{
    return weight;
}
int Person::get_height()
{
    return height;
}