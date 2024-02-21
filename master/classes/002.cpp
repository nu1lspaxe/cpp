#include <bits/stdc++.h>

/*
Classes and Structs (C++)
The two constructs are identical in C++ except that in structs the default accessibility is public, whereas in classes the default is private.
*/

class Person
{
public:
    Person() = default;
    Person(std::string_view name, std::string_view id, int age);
    ~Person();

    void PrintInfo()
    {
        std::cout << "Person " << this << ": [name: " << _name << ", age: " << _age << "]" << std::endl;
    }

    // Setter (chained calls using references)
    Person& set_name(std::string name)
    {
        this->_name = name;
        return *this;
    }

    Person& set_age(int age)
    {
        this->_age = age;
        return *this;
    }


private:
    std::string_view _name;
    std::string_view *_id {nullptr};
    int _age;
};

Person::Person(std::string_view name, std::string_view id, int age)
{
    _name = name;
    _id = new std::string_view{id};
    _age = age;

    std::cout << "New person id: " << *this->_id << " has been created" << std::endl;
}

// Before out of scope, deconstructor will be called automatically
// In this case, the scope is main()
Person::~Person()
{
    std::cout << "Perosn id: " << *this->_id << " has been deleted" << std::endl;
    delete this->_id;
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