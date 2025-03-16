cmake_minimum_required(VERSION 3.15)
project(VK_Graph)

set(CMAKE_CXX_STANDARD 20)

add_executable(VK_Graph main.cpp
BaseFileReader.h
GraphFileReader.h
GraphFileReader.cpp
Graph.h
Graph.cpp
Facade.h
Facade.cpp)
