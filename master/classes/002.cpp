#include <bits/stdc++.h>

/*
Classes and Structs (C++)
The two constructs are identical in C++ except that in structs the default accessibility is public, whereas in classes the default is private.
*/

class Person
{
public:
    Person() = default;
    Person(std::string_view person_name, std::string_view person_id, int person_age);
    ~Person();

    void PrintInfo()
    {
        std::cout << "Person " << this << ": [name: " << name << ", age: " << age << "]" << std::endl;
    }

    // Setter (chained calls using references)
    Person& set_name(std::string name)
    {
        this->name = name;
        return *this;
    }

    Person& set_age(int age)
    {
        this->age = age;
        return *this;
    }


private:
    std::string_view name;
    std::string_view *id {nullptr};
    int age;
};

Person::Person(std::string_view person_name, std::string_view person_id, int person_age)
{
    name = person_name;
    id = new std::string_view{person_id};
    age = person_age;

    std::cout << "New person id: " << *id << " has been created" << std::endl;
}

// Before out of scope, deconstructor will be called automatically
// In this case, the scope is main()
Person::~Person()
{
    std::cout << "Perosn id: " << *id << " has been deleted" << std::endl;
    delete id;
}

int main()
{
    Person p1("Mina", "F325862310", 20);
    Person p2("Gina", "E209884572", 18);
    Person p3("Fina", "I902476491", 23);

    std::cout << std::endl;
    p1.PrintInfo();

    p1.set_name("Cina").set_age(22);
    p1.PrintInfo();

    std::cout << std::endl;

    return 0;
}