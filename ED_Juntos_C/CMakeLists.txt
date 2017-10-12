cmake_minimum_required(VERSION 3.8)
project(ED_Juntos)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Node.cpp Stack.cpp Queue.cpp Contacto.cpp Contacto.h NodeDL.cpp DL_List.cpp CList.cpp List.cpp)
add_executable(ED_Juntos ${SOURCE_FILES})