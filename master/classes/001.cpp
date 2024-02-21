#include <bits/stdc++.h>

class Person
{
public:
    Person() = default;
    Person(std::string_view person_name, std::string_view person_id, int person_age);
    ~Person();


private:
    std::string_view _name;
    std::string_view *id;
    int _age;
};

Person::Person(std::string_view person_name, std::string_view person_id, int person_age)
{
    _name = person_name;
    id = new std::string_view{person_id};
    _age = person_age;

    std::cout << "New person id: " << *id << " has been created" << std::endl;
}

Person::~Person()
{
    std::cout << "Perosn id: " << *id << " has been deleted" << std::endl;
    delete id;
}

int main()
{
    Person p1("Mina", "F3258623120", 20);
    Person p2("Gina", "E209884572", 18);
    Person p3("Fiona", "I902476491", 23);

    return 0;
}