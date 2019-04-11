cmake_minimum_required(VERSION 3.13)
project(lab4)

set(CMAKE_CXX_STANDARD 14)

add_library(library STATIC Osoba.cpp Osoba.h Data.h Data.cpp Stazysta.h Stazysta.cpp Pracownik.cpp Pracownik.h Kierownik.cpp Kierownik.h)
add_executable(main main.cpp Data.h Data.cpp Stazysta.h Stazysta.cpp Kierownik.cpp Kierownik.h)
target_link_libraries(main library)