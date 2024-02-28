/** std::lock_guard
 * When a lock_guard object is created, it attempts to take ownership of the mutex it is given. 
 * When control leaves the scope in which the lock_guard object was created, the lock_guard is 
 * destructed and the mutex is released.
 * 
 * Reference: https://en.cppreference.com/w/cpp/thread/lock_guard
*/

#include <bits/stdc++.h>

// volatile tells the compiler that can be changed by something outside the normal execution path
// and compiler is not aware of
volatile int n {0};
static std::mutex mux;

// thread safe
void safe_increment(int iterations)
{
    const std::lock_guard<std::mutex> lock(mux);
    while (iterations-- > 0)
        n += 1;
    std::cout << "thread #" << std::this_thread::get_id() << ", number is " << n << std::endl;

    // mutex is automatically released when lock goes out of scope
}

// Multiple threads can access and modify number concurrently without synchronization
void unsafe_increment(int iterations)
{
    while (iterations-- > 0)
        n += 1;
    std::cout << "thread #" << std::this_thread::get_id() << ", number is " << n << std::endl;
}

int main()
{
    // Define lambda function
    auto test = [](std::string_view funcName, auto func)
    {
        n = 0;
        std::cout << funcName << "is executing..." << std::endl;
        std::cout << "Before, number: " << n << std::endl;
        {
            std::jthread t1(func, 1'000'000);
            std::jthread t2(func, 1'000'000);
        }
        std::cout << "After, number: " << n << std::endl;
    };

    test("Safe Approach", safe_increment);
    test("Unsafe Approach", unsafe_increment);

    return 0;
}