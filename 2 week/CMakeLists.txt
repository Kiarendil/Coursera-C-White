cmake_minimum_required(VERSION 3.14)
project(2_week)

set(CMAKE_CXX_STANDARD 17)

add_executable(2_week main.cpp)
add_executable(factorial src/functions/factorial.cpp)
add_executable(polindrom src/functions/polindrom.cpp)
add_executable(poly_filter src/functions/poly_filter.cpp)
add_executable(update src/functions/update.cpp)
add_executable(movestr src/functions/movestr.cpp)
add_executable(reverse_vectors src/functions/reverse_vectors.cpp src/my_vector.cpp)