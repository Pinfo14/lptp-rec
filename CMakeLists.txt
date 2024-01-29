cmake_minimum_required(VERSION 3.22)
project(LPTP C)

set(CMAKE_C_STANDARD 11)

add_executable(LPTP main.c
        cmake-build-debug/equipment.c
        cmake-build-debug/equipment.hs
        cmake-build-debug/input.c
        cmake-build-debug/input.h)
