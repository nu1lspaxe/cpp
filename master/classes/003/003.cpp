#include <bits/stdc++.h>
#include "person.h"

int main()
{
    Person p1("Tina", Gender::Female, 20, 48.3, 1.64);
    std::cout << p1.get_name() << "'s BMI is " << p1.GetBMI() << std::endl;

    // By pointer (Use arrow)
    Person *p2 = &p1;
    p2->set_height(1.6);
    std::cout << p2->get_name() << "'s BMI is " << p2->GetBMI() << std::endl;

    Person *p3{new Person("Nano", Gender::Male, 24, 75, 1.82)};
    std::cout << p3->get_name() << "'s BMI is " << p3->GetBMI() << std::endl;

    const Person *p4{new Person("Adam", Gender::Male, 28, 69, 1.78)};
    std::cout << p4->get_name() << "'s BMI is " << p4->GetBMI() << std::endl;

    std::cout << p2->get_name() << " is " << p2->get_age() << " years old " << std::endl;
    std::cout << p2->get_name() << " is " << p2->get_age() << " years old " << std::endl;

    return 0;
}