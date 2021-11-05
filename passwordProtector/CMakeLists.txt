cmake_minimum_required(VERSION 3.20)
project(passwordProtector C)

set(CMAKE_C_STANDARD 99)

add_executable(passwordProtector main.c existing_File.c function_header.h encrypt.c)
