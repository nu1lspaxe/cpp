// A self defined header file should put on top.
#include "Workstation.h"
#include <bits/stdc++.h>

int main()
{
    Workstation::Node node('A', 3);
    std::vector<Workstation::Node> nodes;
    nodes.push_back(node);

    std::cout << "Workstation has " << node.GetCount() << " workers." << std::endl;

    return 0;
}