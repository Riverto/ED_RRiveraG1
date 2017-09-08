cmake_minimum_required(VERSION 3.8)
project(C__)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp cmake-build-debug/Node.cpp cmake-build-debug/Node.h)
add_executable(C__ ${SOURCE_FILES})