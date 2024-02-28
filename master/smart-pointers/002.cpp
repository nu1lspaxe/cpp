/** std::shared_ptr
 * std::shared_ptr is a smart pointer that retains shared ownership of an object through a pointer. 
 * Several shared_ptr objects may own the same object. The object is destroyed and its memory
 * deallocated when either of the following happens:
 *  - the last remaining shared_ptr owning the object is destroyed;
 *  - the last remaining shared_ptr owning the object is assigned another pointer via operator= or reset()
 * 
 * Reference: https://en.cppreference.com/w/cpp/memory/shared_ptr
*/

#include <bits/stdc++.h>

using namespace std::chrono_literals;

struct Base
{
    Base() = default;
    ~Base() { std::cout << "Say good bye to Base" << std::endl; }
};

struct Derived : Base
{
    Derived() { std::cout << "Miannnananan?..." << std::endl; }
    ~Derived() { std::cout << "Say good bye to Derived" << std::endl; }
};

void printInfo(std::string_view title, std::shared_ptr<Base> const& ptr)
{
    std::cout << title << ": " << std::endl;
    // use_count is thread-safe because it doesn't modify shared_ptr
    std::cout << "\tget addr:" << ptr.get() << ", count: " << ptr.use_count() << std::endl;
}

void thisThread(std::shared_ptr<Base> ptr)
{
    std::this_thread::sleep_for(1000ms);
    std::shared_ptr<Base> lockPtr = ptr;
    // Thread-safe even though the shared use_count is incremented
    {
        static std::mutex mux;
        const std::lock_guard<std::mutex> lock(mux);
        printInfo("Local pointer in a thread", lockPtr);
    }
}

int main()
{
    std::shared_ptr<Base> ptr = std::make_shared<Derived>();

    printInfo("Create a shared Derived (as a pointer to Base)", ptr);

    std::thread t1{thisThread, ptr}, t2{thisThread, ptr}, t3{thisThread, ptr};
    // std::jthread t1{thisThread, ptr}, t2{thisThread, ptr}, t3{thisThread, ptr};

    // Release ownership from main
    ptr.reset();

    printInfo("Shared owership between multiple threads, and now is released from main", ptr);

    // std::thread::join : blocks the current thread until it finishes execution
    t1.join();
    t2.join();
    t3.join();

    std::cout << "All threads completed, the last one deleted Derived" << std::endl;

    return 0;
}