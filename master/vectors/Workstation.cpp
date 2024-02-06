#include "Workstation.h"

Workstation::Node::Node(char id, int count)
{
    n_id = id;
    n_count = count;
}

int Workstation::Node::GetCount()
{
    return n_count;
}