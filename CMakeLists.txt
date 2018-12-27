cmake_minimum_required(VERSION 3.13)
project(linear)

set(CMAKE_CXX_STANDARD 17)

add_library(linear SHARED src/linear.cc src/linear.h)
include_directories(node_modules/nan)