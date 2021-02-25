cmake_minimum_required(VERSION 3.17)
project(ndk_demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(ndk_demo T1.cpp T2.c File.c ctype.c)