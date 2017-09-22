cmake_minimum_required(VERSION 3.8)
project(ED_LL_List_C)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp NodeDL.cpp MyDLList.cpp)
add_executable(ED_LL_List_C ${SOURCE_FILES})