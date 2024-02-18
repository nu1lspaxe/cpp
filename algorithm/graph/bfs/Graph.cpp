#include "Graph.hpp"

Graph::Graph(int V)
{
    this->V = V;
    // std::vector.resize()
    // resizes the container to contain count elements
    adj.resize(V);
}

void Graph::AddEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::BFS(int start)
{
    // Mark all the vertices as not visited
    std::vector<bool> visited;
    visited.resize(V, false);

    // Create a queue for BFS
    std::list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[start] = true;
    queue.push_back(start);

    while (!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        start = queue.front();
        std::cout << start << " ";
        queue.pop_front();  // no data is returned

        // Get all adjacent vertices of the dequeued vertex src.
        // If an adjancent has not been visited,
        // then mark it visited and enqueue it.
        for (auto adjacent : adj[start])
        {
            if (!visited[adjacent])
            {
                visited[adjacent] = true;
                queue.push_back(adjacent);
            }
        }
    }
}