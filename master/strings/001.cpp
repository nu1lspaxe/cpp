#include <bits/stdc++.h>

void printStr(std::string str);

int main()
{
    std::string str{"Hello C++"};
    std::cout << "size: " << str.size() << std::endl;
    std::cout << "capacity: " << str.capacity() << std::endl;

    str.push_back('!');
    printStr(str);

    std::string str2{"I'm C, not "};

    str.insert(6, str2);
    printStr(str);

    str.pop_back();
    printStr(str);

    str.erase(6, str.size()-9);
    printStr(str);

    str.clear();
    str2.clear();


    return 0;
}

void printStr(std::string str)
{
    std::cout << "str: " << str << std::endl;
}