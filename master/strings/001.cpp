#include <bits/stdc++.h>

void PrintStr(std::string str)
{
    std::cout << "str: " << str << std::endl;
}


int main()
{
    std::string str{"Hello C++"};
    std::cout << "size: " << str.size() << std::endl;
    std::cout << "capacity: " << str.capacity() << std::endl;

    str.push_back('!');
    PrintStr(str);

    std::string str2{"I'm C, not "};

    str.insert(6, str2);
    PrintStr(str);

    str.pop_back();
    PrintStr(str);

    str.erase(6, str.size()-9);
    PrintStr(str);

    str.clear();
    str2.clear();


    return 0;
}

