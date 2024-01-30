#include <bits/stdc++.h>

using namespace std;

const size_t TIMES {10};

int main(int argc, char *argv[])
{

    cout << "==== Do While for loop ====" << endl;
    int curr {0};
    do
    {
        cout << "curr: " << curr << endl;
        ++curr;
    } while (curr < TIMES);

    cout << endl;

    cout << "==== Auto Type deduction ====" << endl;
    int values[5] {1, 2, 3, 4, 5};
    for (auto v : values)
    {
        cout << "value: " << v << endl;
    }
    
    return 0;
}