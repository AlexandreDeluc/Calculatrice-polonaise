cmake_minimum_required(VERSION 3.20)
project(expression)

set(CMAKE_CXX_STANDARD 14)

add_executable(expression main.cpp Expression.cpp Expression.h Constante.cpp Constante.h Operateur.cpp Operateur.h Addition.cpp Addition.h Soustraction.cpp Soustraction.h Multiplication.cpp Multiplication.h Division.cpp Division.h)
