#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int n, i;
    cin >> n;
    i = 2;
    while (n > 1)
    {
        while (n % i == 0)
        {
            n = n / i;
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    return 0;
}