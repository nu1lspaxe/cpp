#ifndef PERSON_H
#define PERSON_H

#include "default.h"

class Person
{
public:
    Person() = default;
    /*
    <param name="weight_param">
        person's weight (kg)
    </param>
    <param name="height_param">
        person's height (m)
    </param>
    */
    Person(std::string_view name_param, Gender gender_param, int age_param, double weight_param, double height_param);

    // Methods
    double GetBMI() const;

    // Setters and Getters
    void set_name(std::string_view name_param);
    void set_gender(Gender gender_param);
    void set_age(int age_param);
    void set_weight(double weight_param);
    void set_height(double height_param);

    std::string_view get_name() const;
    Gender get_gender();
    int get_age();
    int get_weight();
    int get_height();

private:
    std::string_view name{"NoName"};
    Gender gender{Gender::Other};
    int age{0};
    double weight{0};
    double height{0};
};

#endif