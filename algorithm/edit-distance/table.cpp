/* Buttom Up */

#include <bits/stdc++.h>

int min(int x, int y, int z) { return std::min(std::min(x, y), z); }

int editDist(std::string str1, std::string str2, int m, int n)
{
    // the results will be stored in table
    int table[m + 1][n + 1];

    // fill the table with bottom-up manner
    for (size_t i{0}; i <= m; ++i)
    {
        for (size_t j{0}; j <= n; ++j)
        {
            if (i == 0) table[i][j] = j;
            else if (j == 0) table[i][j] = i;

            else if (str1[i-1] == str2[j-1]) table[i][j] = table[i-1][j-1];

            else table[i][j] = 1 + min(table[i][j-1], table[i-1][j], table[i-1][j-1]);  // Insert Remove Replace
        }
    }
    return table[m][n];
}

int main()
{
    std::string str1 = "sunday";
    std::string str2 = "saturday";

    std::cout << "the minimum number of edits (operations) is " 
              << editDist(str1, str2, str1.length(), str2.length()) << std::endl;
    return 0;
}

/*
Time Complexity: O(m*n) 
Auxiliary Space: O(m*n)
*/