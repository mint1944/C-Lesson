cmake_minimum_required(VERSION 3.24)
project(structLink C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(structLink
        main.c linkStruct.c linkStruct.h)
