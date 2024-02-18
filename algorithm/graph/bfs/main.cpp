#include <bits/stdc++.h>
#include "Graph.hpp"

int main()
{
    Graph graph(4);
    graph.AddEdge(0, 1);
    graph.AddEdge(0, 2);
    graph.AddEdge(1, 2);
    graph.AddEdge(2, 0);
    graph.AddEdge(2, 3);
    graph.AddEdge(3, 3);
 
    std::cout << "Following is Breadth First Traversal (starting from vertex 2)" 
                << std::endl;
    graph.BFS(2);

    return 0;
}