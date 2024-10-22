cmake_minimum_required(VERSION 3.29)
project(TurnosAlfanumericos)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TurnosAlfanumericos
    cola.cpp
    cola.h
    main.cpp)
