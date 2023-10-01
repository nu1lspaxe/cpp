#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int hh, mm;

    while (cin >> hh >> mm) {

        // 全部換成分鐘數 !!! 
        mm += hh*60;
        if (mm >= 450 and mm < 1020)
        // if( (hh==7 and mm>=30) or (hh>=8 and hh<=16) )
        {
            cout << "At School";
        }
        else
        {
            cout << "Off School";
        }
    }
    return 0;
}