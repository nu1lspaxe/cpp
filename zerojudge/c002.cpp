#include <bits/stdc++.h>

using namespace std;

int f91(int N)
{
    if (N > 100)
    {
        return N-10;
    }
    return f91(f91(N+11));
}

int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int N;

    while (cin >> N)
    {
        if (N > 0)
        {
            cout << "f91(" << N << ") = " << f91(N) << endl;
        }
    }

    return 0;
}