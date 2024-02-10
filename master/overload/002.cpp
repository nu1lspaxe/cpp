#include <bits/stdc++.h>

bool de_sort(int a, int b) { return a > b; }    // desending order
void printVec(std::vector<int> &vec)
{
    for (auto v : vec) std::cout << v << " ";
    std::cout << '\n';
}

int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5};

    std::sort(vec.begin(), vec.end());
    std::cout << "Asending : ";
    printVec(vec);

    std::sort(vec.begin(), vec.end(), de_sort);
    std::cout << "Desending: ";
    printVec(vec);

    return 0;
}