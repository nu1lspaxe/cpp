#include <bits/stdc++.h>
#define CLOCKS_PER_SEC 1000
// CLOCKS_PER_SEC 本來就是 const 預設 1000
#define SWAP(a, b) {int tmp; tmp = a; a = b; b = tmp;}
#define PrintArray(arr, len) {for(int i=0; i<len; i++) {cout << arr[i] << " ";} cout << endl;}

using namespace std;

void INSERT(int arr[], int data, int length)
{
    arr[length] = data;

    for (int i=length; i > 0; i--)
    {
        if (arr[i] < arr[i-1])
        {
            SWAP(arr[i-1], arr[i]);
        }
        else
        {
            break;
        }
    }
    PrintArray(arr, length+1);
}

void DIRECT_CUT_IN(int arr[], int data, int length)
{
    int i = length;
    while (i > 0 && arr[i] > data)
    {
        arr[i+1] = arr[i];
        i--;
    }
    arr[length+1] = data;
    PrintArray(arr, length+1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    double START, END;
    START = clock();

    int length = sizeof(array)/sizeof(array[0]);
    cout << "Array length (initial) : " << length << endl;

    cout << "Array after INSERT : ";
    INSERT(array, 11, length);

    cout << "Array after DIRECT_CUT_IN : ";
    DIRECT_CUT_IN(array, 12, length);

    END = clock();

    cout << "程式運算所花時間(s): " << (END-START) / CLOCKS_PER_SEC << endl;
    return 0;
}