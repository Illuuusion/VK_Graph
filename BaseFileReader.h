#ifndef BASEFILEREADER_H
#define BASEFILEREADER_H

#include <string>
#include <fstream>
#include <stdexcept>

class BaseFileReader {
protected:
    std::ifstream file;

public:
    BaseFileReader(const std::string& filename){
	file.open(filename);
	if (!file.is_open())
	    throw std::runtime_error("Unable to open file");
}
    virtual ~BaseFileReader(){
	if (file.is_open())
	    file.close();
}

    virtual void readFile() = 0;
};

#endif // BASEFILEREADER_H
