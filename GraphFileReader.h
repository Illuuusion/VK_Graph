#ifndef GRAPHFILEREADER_H
#define GRAPHFILEREADER_H

#include "BaseFileReader.h"
#include <vector>
#include <utility>

class GraphFileReader : public BaseFileReader {
private:
    int countOfEdges;
    int countOfVertices;
    int start;
    std::vector<std::pair<int, int>> paths;

public:
    explicit GraphFileReader(const std::string& filename);
    ~GraphFileReader() override = default;
    void readFile() override;
    const int& getCountOfVertices() const;
    const int& getCountOfEdges() const;
    const std::vector<std::pair<int, int>>& getPaths() const;
    const int& getStart() const;
};

#endif // GRAPHFILEREADER_H
