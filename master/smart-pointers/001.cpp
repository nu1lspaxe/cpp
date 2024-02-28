/**
 * unique_ptr
 * std::unique_ptr is a smart pointer that owns and manages another object through a pointer and disposes of that object when the unique_ptr goes out of scope.
 * 
 * Reference: https://en.cppreference.com/w/cpp/memory/unique_ptr
*/

#include <bits/stdc++.h>

// Define helper classes for runtime polymorphism
struct Base
{
    virtual ~Base() = default;

    virtual void foo() { std::cout << "Fooooo..." << std::endl; }
};

struct Derived : Base
{
    Derived() { std::cout << "Miannnananan?..." << std::endl; }
    ~Derived() { std::cout << "Good Bye!" << std::endl; }

    void foo() override { std::cout << "FoFFooFFFooo..." << std::endl;  }
};

std::unique_ptr<Derived> PassThrough(std::unique_ptr<Derived> src)
{
    std::cout << "This pointer is passed through" << std::endl;
    return src;
}


int main()
{
    std::cout << "1) Unique ownership semantics" << std::endl;
    // Local scope
    // resources will be released once out of scope
    {
        // Create unique owned resource
        std::unique_ptr<Derived> ptr = std::make_unique<Derived>();

        // Transfer ownership through the return value
        std::unique_ptr<Derived> ptr2 = PassThrough(std::move(ptr));

        // ptr equals to nullptr now (empty state)
        assert(!ptr);
    }

    std::cout << "2) Runtime polymorphism" << std::endl;
    {
        // Create a derived resource and point to it via base type
        std::unique_ptr<Base> ptr = std::make_unique<Derived>();
        ptr->foo();
    }

    std::cout << "3) Custom lambda-expression deleter and exception safety" << std::endl;
    try
    {
        // The second parameter of std::unique_ptr is deleter
        // By default, it uses default_delete<TYPE>
        // By custom, the type is void(*)(CLASS*), called "pointer to a function that takes a CLASS* argument and returns void"

        // Custom deleter in unique pointer allows to specify custom function
        // to be called when the unique pointer is destroyed
        std::unique_ptr<Derived, void(*)(Derived*)> ptr (new Derived, [](Derived* ptr)
        {
            std::cout << "Destroying from the custom deleter..." << std::endl;
            delete ptr;
        });
        
        throw std::runtime_error("An error happenend...?");
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    

    return 0;
}