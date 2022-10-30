cmake_minimum_required(VERSION 3.23)
project(C_Eniac C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Eniac
        fahr_to_cel_functional.c
        functions.c
        main.c
        OneWordPerLine.c
        power_function.c
        sum_function.c maxline.c EOFValue.c reverse.c maxline_extern.c comment.c chapter_two.c DecToBin.c reverse2.c)
