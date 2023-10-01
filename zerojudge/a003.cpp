#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int M, D, S=0;
    while (cin >> M >> D) 
    {
        S = (M*2+D) % 3;
        if (S == 0)
        {
            cout << "普通" << endl;
        } 
        else if (S == 1)
        {
            cout << "吉" << endl;
        } 
        else if (S == 2)
        {
            cout << "大吉" << endl;
        }
    }

    return 0;
}