#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);

    // N個顧客、T筆交易、action操作、amount操作金額;
    int N, T, action, amount=0;

    cout << "請輸入顧客數量: ";
    cin >> N;
    cout << "請輸入交易單數: ";
    cin >> T;

    int customers[N];
    int id;
    
    for (int i=0; i<N; i++)
    {
        customers[i] = 0;
    }

    for (int i=0; i<T; i++)
    {
        cin >> id >> action >> amount;
        if (action == 1) 
        {
            customers[id] += amount;
        }
        else if (action == 2) 
        {
            customers[id] -= amount;
        }
    }

    for (int i=0; i<N; i++)
    {
        cout << "客戶" << N << "的餘額: " << customers[i] << endl;
    }

    return 0;
}