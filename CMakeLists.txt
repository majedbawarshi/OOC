cmake_minimum_required(VERSION 3.21)
project(OOC C)

set(CMAKE_C_STANDARD 99)

add_library(OOC library.c class.c string.c)
