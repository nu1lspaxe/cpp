#include <bits/stdc++.h>

template <class T>
void PrintArr(const T &arr);

int main()
{
    
    int twoDArr[][3]{
        {4, 5, 6},
        {1, 2, 3},
        {7, 8, 9}};

    std::cout << "Print two dimensional array \n\n";
    PrintArr(twoDArr);

    int threeDArray[4][2][5]{
        {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}},
        {{2, 2, 3, 4, 5}, {6, 7, 8, 9, 10}},
        {{3, 2, 3, 4, 5}, {6, 7, 8, 9, 10}},
        {{4, 2, 3, 4, 5}, {6, 7, 8, 9, 10}},
    };

    std::cout << "Print three dimensional array \n\n" ;
    PrintArr(threeDArray);

    return 0;
}

// enable_if_t = 0 is so that it has a default value and don't need to pass a value to it when declaring a object of this type.
// template <class T, std::enable_if_t<std::is_array_v<T>, int> = 0>
template <class T>
void PrintArr(const T &arr)
{
    // replace enable_if_t with static_assert
    static_assert(std::is_array_v<T>);

    for (auto &in : arr)
    {
        if constexpr (std::rank_v<T> > 1)
            PrintArr(in);
        else
            std::cout << in << " ";
    }
    std::cout << std::endl;
}