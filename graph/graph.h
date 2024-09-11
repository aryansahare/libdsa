// graph.h

#ifndef GRAPH_H
#define GRAPH_H

#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <iostream>
#include <algorithm>
#include <limits> // For std::numeric_limits

class Graph {
public:
    // Constants
    static constexpr int INF = std::numeric_limits<int>::max();

    // Constructors, Destructor, and Member Functions
    Graph();
    ~Graph();

    void addVertex(int vertex);
    void removeVertex(int vertex);
    void addEdge(int source, int destination, int weight);
    void removeEdge(int source, int destination);

    std::vector<int> getVertices() const;
    std::vector<std::pair<int, int>> getEdges() const;
    int degree(int vertex) const;
    bool isConnected() const;
    bool isEmpty() const;
    void clear();

    void bfs(int startVertex) const;
    void dfs(int startVertex) const;
    std::vector<int> topologicalSort() const;
    bool hasCycle() const;
    std::vector<std::vector<int>> findConnectedComponents() const;
    std::vector<std::vector<int>> findStronglyConnectedComponents() const;
    int dijkstra(int startVertex, std::unordered_map<int, int>& distances) const;
    std::vector<std::vector<int>> floydWarshall() const;
    std::vector<std::pair<int, int>> prim(int startVertex) const;
    // std::vector<std::pair<int, int>> kruskal() const;
    int fordFulkerson(int source, int sink) const;
    int edmondsKarp(int source, int sink) const;
    std::unordered_map<int, int> colorGraph() const;
    std::vector<std::pair<int, int>> findMaximumMatching() const;

private:
    std::unordered_map<int, std::list<std::pair<int, int>>> adjList;

    void topologicalSortUtil(int vertex, std::unordered_set<int>& visited, std::stack<int>& Stack) const;
    bool hasCycleUtil(int vertex, std::unordered_map<int, bool>& visited, std::unordered_map<int, bool>& recursionStack) const;
    void findConnectedComponentsUtil(int vertex, std::unordered_set<int>& visited, std::vector<int>& component) const;
    void initializeSingleSource(int startVertex, std::unordered_map<int, int>& distances) const;
    bool relax(int u, int v, int weight, std::unordered_map<int, int>& distances) const;
};

#endif // GRAPH_H
