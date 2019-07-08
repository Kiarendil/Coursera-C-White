cmake_minimum_required(VERSION 3.14)
project(3_week)

set(CMAKE_CXX_STANDARD 17)

add_executable(3_week main.cpp)
add_executable(sort_module src/sort_module.cpp)
add_executable(sort_without_register src/sort_without_register.cpp)