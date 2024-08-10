cmake_minimum_required(VERSION 3.5)
project(AvgEngine)


add_subdirectory(Engine)
add_subdirectory(Editor)
add_dependencies(AvgEditor AvgEngine)