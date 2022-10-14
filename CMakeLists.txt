cmake_minimum_required(VERSION 3.23)
project(CPrograms C)

set(CMAKE_C_STANDARD 99)

add_executable(CPrograms main.c functions.c sum_function.c power_function.c fahr_to_cel_functional.c OneWordPerLine.c)
