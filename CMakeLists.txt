# minimum cmake version required for this project
cmake_minimum_required(VERSION 3.5)

# project specification
project(Serializer)
set(CMAKE_CXX_STANDARD 11)

# includes
include_directories(code)

# files
add_executable(Build 
    code/Serializer.h
    code/Serializer.cpp
    code/Main.cpp
)