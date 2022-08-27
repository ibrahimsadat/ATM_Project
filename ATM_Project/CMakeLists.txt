cmake_minimum_required(VERSION 3.23)
project(ATM_Project C)

set(CMAKE_C_STANDARD 99)

add_executable(ATM_Project main.c card_module.c card_module.h cmake-build-debug/terminal_moodule.c cmake-build-debug/terminal_moodule.h cmake-build-debug/server_module.c cmake-build-debug/server_module.h)
