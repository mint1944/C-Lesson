cmake_minimum_required(VERSION 3.24)
project(C_Lesson C)

set(CMAKE_C_STANDARD 11)

include_directories("C Basic")

add_executable(C_Lesson
        "C Basic/main.c"
        "C Basic/main.h")
