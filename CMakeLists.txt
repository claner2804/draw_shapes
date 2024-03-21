cmake_minimum_required(VERSION 3.27)
project(draw_shapes)

set(CMAKE_CXX_STANDARD 17)

add_executable(draw_shapes main.cpp
        Pos2D.cpp
        Pos2D.h
        Shape.cpp
        Shape.h
        Sheet.cpp
        Sheet.h
        Triangle.cpp
        Triangle.h)
