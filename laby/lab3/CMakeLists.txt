cmake_minimum_required(VERSION 3.13)
project(lab3)

set(CMAKE_CXX_STANDARD 14)

add_library(library STATIC library.cpp library.h main.cpp)
add_executable(main main.cpp)
target_link_libraries(main library)