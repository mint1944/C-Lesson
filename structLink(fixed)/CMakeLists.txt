cmake_minimum_required(VERSION 3.24)
project(structLink_fixed_ C)

set(CMAKE_C_STANDARD 99)

add_executable(structLink_fixed_ main.c structLink.c structLink.h)
