// header file define convention: <PROJECT>_<PATH>_<FILE>_H_
#pragma once

#ifndef WORKSTATION_H
#define WORKSTATION_H

namespace Workstation
{
    class Node
    {
    public:
        Node() = default;
        Node(char id, int count);

        int GetCount();

    private:
        char _id;
        int _count;
    };
}

#endif
