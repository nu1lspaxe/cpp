#include <bits/stdc++.h>

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int line, n;
    cin >> line;
    for (int i=0; i<line; i++)
    {
        cin >> n;
        if (n == 1) cout << 1;
        stringstream stream;
        while (n > 1)
        {
            for (int j=9; j>1; j--)
            {
                if (n % j == 0)
                {
                    stream << j;
                    n /= j;
                }
            }
            if (n != 1)
            {
                cout << -1;
                break;
            }
            else
            {
                string number;
                stream >> number;
                for (int i=number.length(); i>=0; i--)
                {
                    cout << number[i];
                }
            }
        }
        cout << endl;
    }

    return 0;
}