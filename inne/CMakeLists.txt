
cmake_minimum_required(VERSION 3.10)

project(ZadClassKcpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


file(GLOB_RECURSE SOURCES "main.cpp" "src/*.cpp")

add_executable(ZadKlass ${SOURCES})

target_include_directories(ZadKlass PRIVATE include)

