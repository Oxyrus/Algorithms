cmake_minimum_required(VERSION 3.8)
project(Algorithms)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp data-structures/binary-trees/Node.cpp data-structures/binary-trees/Node.h)
add_executable(Algorithms ${SOURCE_FILES})