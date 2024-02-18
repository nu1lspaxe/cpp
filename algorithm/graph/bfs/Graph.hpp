#include <bits/stdc++.h>

// The class represents a directed graph using adjacency list representation
class Graph
{
    // Vth of vertices
    int V;

    // Pointer to an array containing adjacency list
    std::vector<std::list<int>> adj;

public:
    /* Constructor */
    Graph(int V);

    /* Methods */
    // Add w to v's list
    void AddEdge(int v, int w);
    // Print BFS traversal from a given source
    void BFS(int src);
};