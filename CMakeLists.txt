cmake_minimum_required(VERSION 3.10)

project(spinner)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(spinner test/test.c)

target_link_libraries(spinner pthread)