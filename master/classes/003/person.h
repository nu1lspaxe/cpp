#ifndef PERSON_H
#define PERSON_H

#include "default.h"

class Person
{
public:
    Person() = default;
    /*
    <param name="weight">
        person's weight (kg)
    </param>
    <param name="height">
        person's height (m)
    </param>
    */
    Person(std::string_view name, Gender gender, int age, double weight, double height);

    // Methods
    double GetBMI() const;

    // Setters and Getters
    void set_name(std::string_view name);
    void set_gender(Gender gender);
    void set_age(int age);
    void set_weight(double weight);
    void set_height(double height);

    std::string_view get_name() const;
    Gender get_gender();
    int get_age();
    int get_weight();
    int get_height();

private:
    std::string_view _name{"NoName"};
    Gender _gender{Gender::Other};
    int _age{0};
    double _weight{0};
    double _height{0};
};

#endif