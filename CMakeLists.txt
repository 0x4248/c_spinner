# C_Spinner
# A simple spinner that runs in a thread for C programs.
# GitHub: https://www.github.com/lewisevans2007/c_spinner
# Licence: GNU General Public License v3.0
# By: Lewis Evans

cmake_minimum_required(VERSION 3.10)

project(spinner)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(spinner test/test.c)

target_link_libraries(spinner pthread)