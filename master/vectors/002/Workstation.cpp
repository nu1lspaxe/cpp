#include "Workstation.h"

Workstation::Node::Node(char id, int count)
{
    this->_id = id;
    this->_count = count;
}

int Workstation::Node::GetCount()
{
    return this->_count;
}