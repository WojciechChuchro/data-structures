cmake_minimum_required(VERSION 3.30)
project(data_structures C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(
        data_structures main.c
        includes/Node.h
        includes/LinkedList.h
        src/Node.c
        src/LinkedList.c
)
