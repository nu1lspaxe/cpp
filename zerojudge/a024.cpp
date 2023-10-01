#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0) return b;
    return gcd(b, a%b);    
}

int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int a, b, tmp;
    while (cin >> a >> b)
    {
        if (a < b)
        {
            tmp = a;
            a = b;
            b = tmp;
        }
        cout << gcd(a, b) << endl;
    }
    return 0;
}