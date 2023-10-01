#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int N;
    cin >> N;

    if (N <= 10)
    {
        cout << N*6;
    }
    else if (N <=20)
    {
        cout << 60 + (N-10)*2;
    }
    else if (N <= 40)
    {
        cout << 80 + (N-20)*1;
    }
    else
    {
        cout << 100;
    }

    return 0;
}