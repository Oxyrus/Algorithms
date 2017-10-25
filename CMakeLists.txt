cmake_minimum_required(VERSION 3.8)
project(Algorithms)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp data-structures/binary-trees/Node.cpp data-structures/binary-trees/Node.h data-structures/lists/List.cpp data-structures/lists/List.h)
add_executable(Algorithms ${SOURCE_FILES})