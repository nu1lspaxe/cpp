#include <iostream>
#include <vector>

// Choose arr[start] as pivot
void quickSort(std::vector<int>& arr, int start, int end)
{
    if (start >= end) return;
    int left = start + 1, right = end;

    while (left < right)
    {
        if (arr[left] <= arr[start])
            left++;
        else if (arr[right] > arr[start])
            right--;
        else
            std::swap(arr[left], arr[right--]);
    }

    if (arr[left] >  arr[start]) left--;
    std::swap(arr[left], arr[start]);
    quickSort(arr, start, left);
    quickSort(arr, left+1, end);
}