#include "GraphFileReader.h"

GraphFileReader::GraphFileReader(const std::string& filename): BaseFileReader(filename){}

void GraphFileReader::readFile() {
    file >> countOfVertices;
    file >> countOfEdges;
    for (int i = 0; i < countOfEdges; ++i) {
        int firstVertex, secondVertex;
        file >> firstVertex >> secondVertex;
        if (firstVertex < 0 || firstVertex >= countOfVertices || secondVertex < 0 || secondVertex >= countOfVertices)
            throw std::invalid_argument("Error: Invalid vertex index in the file.");
        paths.emplace_back(firstVertex, secondVertex);
    }
	file >> start;
}

const int& GraphFileReader::getCountOfVertices() const {
    return countOfVertices;
}

const int& GraphFileReader::getCountOfEdges() const {
    return countOfEdges;
}

const std::vector<std::pair<int, int>>& GraphFileReader::getPaths() const {
    return paths;
}

const int& GraphFileReader::getStart() const {
    return start;
}
