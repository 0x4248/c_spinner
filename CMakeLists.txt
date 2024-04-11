# C_Spinner
# A simple spinner that runs in a thread for C programs.
# GitHub: https://www.github.com/0x4248/c_spinner
# Licence: GNU General Public License v3.0
# By: 0x4248

cmake_minimum_required(VERSION 3.10)

project(spinner)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(spinner test/test.c)

target_link_libraries(spinner pthread)