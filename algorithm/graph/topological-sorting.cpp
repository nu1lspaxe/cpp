/**
 * Reference: https://www.geeksforgeeks.org/topological-sorting/
*/

#include <bits/stdc++.h>

class Graph {
public:
    // Constructor
    Graph(int v);

    // Methods
    void addEdge(int u, int v);
    void topologicalSort();

private:
    // index of vertices
    int _v;

    // Pointer to array containing adjacency list
    std::list<int>* _adj;

    void topological(int v, bool visited[], std::stack<int>& stack);
};

Graph::Graph(int v)
{
    this->_v = v;
    this->_adj = new std::list<int>[_v];
}

void Graph::addEdge(int u, int v)
{
    this->_adj[u].push_back(v);
}

void Graph::topological(int v, bool visited[], std::stack<int>& stack)
{
    // Visit current node
    visited[v] = true;

    // Recursive all adjacencies of this vertex
    // unless this adjacency has been visited
    std::list<int>::iterator it;
    for (it = this->_adj->begin(); it != this->_adj->end(); ++it)
        // `*` downcast from _List_node_base to _List_node to get to value
        if (!visited[*it])
            topological(*it, visited, stack);

    // Push vertex to stack after visit all adjacencies
    stack.push(v);
}

void Graph::topologicalSort()
{
    std::stack<int> stack;

    // Initialize visited list (fill with false value)
    bool* visited = new bool[this->_v](false);
    
    // Start topological by calling helper function
    for (size_t i{0}; i < this->_v; ++i)
        if (visited[i] == false)
            topological(i, visited, stack);
    
    // Print result
    while (stack.empty() == false)
    {
        std::cout << stack.top() << " ";
        stack.pop();
    }

    delete[] visited;
}

int main()
{
    Graph graph(6);
    graph.addEdge(5, 2);
    graph.addEdge(5, 0);
    graph.addEdge(4, 0);
    graph.addEdge(4, 1);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);
 
    std::cout << "Start Topological Sort: " << std::endl;
 
    graph.topologicalSort();

    return 0;
}