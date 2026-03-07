cmake_minimum_required(VERSION 3.10)

project(Ejercicios_DSPS)

set(CMAKE_CXX_STANDARD 17)

add_executable(parking_system parking_system/parking_system.cpp)
add_executable(armstrong armstrong_numbers/armstrong.cpp)
add_executable(hamming hamming_distance/hamming.cpp)
add_executable(space_age space_age/space_age.cpp)