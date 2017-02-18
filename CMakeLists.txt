cmake_minimum_required(VERSION 3.6)
project(My_Hearthstone)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp player.cpp player.h)
add_executable(My_Hearthstone ${SOURCE_FILES})