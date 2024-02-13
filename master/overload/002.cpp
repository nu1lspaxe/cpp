#include <bits/stdc++.h>

bool DesendingSort(int a, int b) { return a > b; }    // desending order
void PrintVec(std::vector<int> &vec)
{
    for (auto v : vec) std::cout << v << " ";
    std::cout << '\n';
}

int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5};

    std::sort(vec.begin(), vec.end());
    std::cout << "Asending : ";
    PrintVec(vec);

    std::sort(vec.begin(), vec.end(), DesendingSort);
    std::cout << "Desending: ";
    PrintVec(vec);

    return 0;
}