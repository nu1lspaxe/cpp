#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // 1 -> 49
    // '*' -> 42
    // K = 49 - 42 = 7

    string s;
    cin >> s;
    for (char c : s)
    {
        cout << (char) (c-7);
    }

    return 0;
}