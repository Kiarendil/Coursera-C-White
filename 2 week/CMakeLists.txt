cmake_minimum_required(VERSION 3.14)
project(2_week)

set(CMAKE_CXX_STANDARD 17)

add_executable(2_week main.cpp)
add_executable(factorial src/factorial.cpp)
add_executable(polindrom src/polindrom.cpp)
add_executable(poly_filter src/poly_filter.cpp)