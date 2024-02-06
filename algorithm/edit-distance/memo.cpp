#include <bits/stdc++.h>

int min(int x, int y, int z) { return std::min(std::min(x, y), z); }

int editDist(std::string str1, std::string str2, int m, int n, std::vector<std::vector<int>> memo) 
{
    if (m == 0) return n;   // Insert all chars of str2 into str1
    if (n == 0) return m;   // Remove all chars of str1

    // return from memo if n*m has been executed
    if (memo[m][n] != -1)
    {
        return memo[m][n];
    }

    if (str1[m-1] == str2[n-1])
    {
        return memo[m][n] = editDist(str1, str2, m-1, n-1, memo);
    }

    int insert = editDist(str1, str2, m, n-1, memo);
    int remove = editDist(str1, str2, m-1, n, memo);
    int replace = editDist(str1, str2, m-1, n-1, memo);

    return memo[m][n] = 1 + min(insert, remove, replace);
}

int main()
{
    std::string str1 = "sunday";
    std::string str2 = "saturday";

    int m = str1.length();
    int n = str2.length();
    // Initialize table with -1. table.size = [m+1][n+1]
    std::vector<std::vector<int>> memo(m+1, std::vector<int>(n+1, -1));

    std::cout << "the minimum number of edits (operations) is " 
              << editDist(str1, str2, m, n, memo) << std::endl;

    return 0;
}

/*
Time Complexity: O(m*n) 
Auxiliary Space: O(m*n)+O(m+n) for (m*n) extra array space and (m+n) recursive stack space.
*/