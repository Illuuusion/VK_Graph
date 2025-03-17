#include "Facade.h"

void Facade::run(){
    try {
        GraphFileReader fileReader("graph.txt");
        fileReader.readFile();
        int countOfVertices = fileReader.getCountOfVertices();
        const auto& paths = fileReader.getPaths();
        Graph graph(countOfVertices, paths);
        int startVertex = fileReader.getStart();
        std::vector<int> distances = graph.findShortestDistances(startVertex);
        for (int i = 0; i < distances.size(); ++i)
            std::cout << distances[i] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}
