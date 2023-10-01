#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int n;
    cin >> n;

    while (n!=1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else if (n % 2 == 1)
        {
            n = 3*n + 1;
        }
        cout << n << endl;
    }

    return 0;
}