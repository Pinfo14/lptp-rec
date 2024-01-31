cmake_minimum_required(VERSION 3.22)
project(LPTP C)

set(CMAKE_C_STANDARD 11)

add_executable(LPTP main.c
        equipment.h
        equipment.c
        input.h
        input.c
        menu.c
        menu.h
        files.c
        files.h
        user.c
        user.h
        memory.c
        memory.h)
