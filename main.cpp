#include <bits/stdc++.h>

using namespace std;

int WinMain() {
    cout << "this is std::cout" << endl;
    clog << "this is std::clog" << endl;
    cerr << "this is std::cerr" << endl;

    int num;
    cout << "now is your time, show me your lucky number: ";
    cin >> num;
    cout << "check your lucky number: " << num << endl;

    cin.ignore();   // avoid getline() doesn't wait for input

    string name;
    cout << "welcome, witcher. Let me know your name: ";
    getline(cin, name);
    cout << "happy to know you, " << name << endl;

    return 0;
}