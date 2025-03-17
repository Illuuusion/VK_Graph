#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <queue>
#include <climits>

class Graph {
private:
    int countOfVertices;
    int countOfEdges;
    std::vector<std::vector<int>> adjacencyList;

public:
    Graph(const int& countOfVertices, const std::vector<std::pair<int, int>>& edges);
    std::vector<int> findShortestDistances(int& startVertex) const;
};

#endif // GRAPH_H
