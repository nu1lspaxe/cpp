#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int n;
    int f[50];
    f[0] = 1, f[1] = 1;

    for (int i=2; i<50; i++) f[i]=f[i-1]+f[i-2];

    while (cin >> n) cout << f[n] << endl;
    return 0;
}