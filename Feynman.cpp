#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);

    /*
    1 1
    2 5
    3 14
    4 30
    n的邊長 x n的邊長 = (n-1)的正方形數量 + n*2
    
    Sol. 迴圈
    */

   int N, count, index; // N: 邊長為 N、count: 正方形數量、index: 第index個的正方形數量
   while (cin >> N)
   {
    index = 1, count = 0;
    while(index <= N)
    {
        count += index*index;
        index ++;
    }
    cout << N << "邊長有" << count << "個正方形" << endl;
   }

    return 0;
}