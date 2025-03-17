#include "Graph.h"

Graph::Graph(const int& countOfVertices, const std::vector<std::pair<int, int>>& paths): countOfVertices(countOfVertices) {
    adjacencyList.resize(countOfVertices);
    for (const auto& vertex : paths) {
        adjacencyList[vertex.first].push_back(vertex.second);
        adjacencyList[vertex.second].push_back(vertex.first);
    }
}

std::vector<int> Graph::findShortestDistances(int& startVertex) const {
    std::vector<int> distances(countOfVertices, -1);
    std::queue<int> queue;
    queue.push(startVertex);
    distances[startVertex] = 0;
    while (!queue.empty()) {
        int current = queue.front();
        queue.pop();
        for (int neighbor : adjacencyList[current]) {
            if (distances[neighbor] == -1) {
                distances[neighbor] = distances[current] + 1;
                queue.push(neighbor);
            }
        }
    }
    return distances;
}
