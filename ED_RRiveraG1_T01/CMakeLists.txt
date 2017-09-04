cmake_minimum_required(VERSION 3.8)
project(Busqueda_2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp FetchClass.cpp FetchClass.h SortClass.cpp SortClass.h SecClass.cpp SecClass.h BinClass.cpp BinClass.h)
add_executable(Busqueda_2 ${SOURCE_FILES})