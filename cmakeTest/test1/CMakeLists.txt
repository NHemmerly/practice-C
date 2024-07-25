PROJECT_BINARY_DIR = "./include"

cmake_minimum_required(VERSION 3.22)
project(CmakeTest VERSION 1.0)
add_executable(test1 test1.cpp)
configure_file(test1config.h.in test1config.h)



set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)