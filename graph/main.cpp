// main.cpp

#include <iostream>
#include "graph.h"

int main() {
    Graph g;

    // Add vertices and edges
    g.addVertex(1);
    g.addVertex(2);
    g.addVertex(3);
    g.addEdge(1, 2, 10);
    g.addEdge(2, 3, 20);

    // Perform BFS and DFS
    std::cout << "BFS starting from vertex 1:" << std::endl;
    g.bfs(1);

    std::cout << "DFS starting from vertex 1:" << std::endl;
    g.dfs(1);

    // Print topological sort
    std::cout << "Topological sort:" << std::endl;
    auto sorted = g.topologicalSort();
    for (int v : sorted) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;
}
