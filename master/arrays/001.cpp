#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    // No initialize -> supposed to be junk data (random)
    int junk[10];

    // Print data: all output is 0
    cout << "==== Uninitialized Data ====" << endl;
    for (size_t i{0}; i < 10; ++i)
    {
        cout << "junk: " << junk[i] << endl;
    }

    cout << endl;

    // Wirte and Print data
    cout << "==== Written Data ====" << endl;
    for (size_t i{0}; i < 10; ++i)
    {
        junk[i] = (i + 1) * 10;
        cout << "written: " << junk[i] << endl;
    }

    cout << endl;

    // Declaration as well as Initialize (default is 0)
    int good[10] {};
    // Those undefined will be initial as 0
    int great[10] {1, 2, 3, 4, 5};

    cout << "==== Declaration & Initialize  Data ====" << endl;
    for (size_t i{0}; i < 10; ++i)
    {
        cout << "good: " << good[i] << ", great: " << great[i] << endl;
    }

    cout << endl;

    cout << "==== Summarize of Great Data ====" << endl;
    int sum {};

    for (int ele : great)
    {
        sum += ele;
    }
    cout << "Sum: " << sum << endl;

    return 0;
}