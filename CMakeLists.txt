cmake_minimum_required(VERSION 3.22)
project(Calculatrice_polonaise)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(src/Singleton)

add_executable(Calculatrice_polonaise
        src/Singleton/ExpressionAccessor.cpp
        src/Singleton/ExpressionAccessor.h
        src/Addition.cpp
        src/Addition.h
        src/Constante.cpp
        src/Constante.h
        src/Division.cpp
        src/Division.h
        src/Expression.cpp
        src/Expression.h
        src/main.cpp
        src/Multiplication.cpp
        src/Multiplication.h
        src/Operateur.cpp
        src/Operateur.h
        src/Soustraction.cpp
        src/Soustraction.h)
