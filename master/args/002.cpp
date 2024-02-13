#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    if (argc > 3)
    {
        int n1 = atoi(argv[1]), n2 = atoi(argv[3]);
        const char *op = argv[2];
        int result{};

        switch (*op)
        {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            result = n1 / n2;
            break;
        default:
            return 1;
        }

        std::cout << "n1+n2 = " << result << std::endl;
    }
    else
    {
        std::cout << "You don't have enough arguments. For example, n1 [+|-|/|*] n2" << std::endl;
    }

    return 0;
}