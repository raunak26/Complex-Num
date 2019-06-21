cmake_minimum_required(VERSION 3.13)
project(ComplexMult C)

set(CMAKE_C_STANDARD 99)

add_executable(ComplexMult complex_mult.c)
target_compile_options(ComplexMult PRIVATE -Wall -Werror)