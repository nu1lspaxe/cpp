#include <bits/stdc++.h>

void PrintVecInt(std::vector<int> v)
{
    for (size_t i{0}; i < v.size(); ++i)
    {
        std::cout << v.at(i) << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int>::iterator v_it;

    std::vector v(10, 1);
    std::vector v2(v.begin(), v.end());
    std::vector<int> v3;

    PrintVecInt(v);
    PrintVecInt(v2);

    v3.assign(v2.begin(), v2.begin() + 5);
    PrintVecInt(v3);

    int array[]{1, 2, 3, 4, 5};
    v3.assign(array, array + 5);
    PrintVecInt(v3);

    std::vector<std::vector<int>> vv(5, std::vector<int>(3, 0));
    for (size_t i{0}; i < vv.size(); ++i)
    {
        auto _v = vv.at(i);
        PrintVecInt(_v);
    }

    return 0;
}
