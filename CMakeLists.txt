cmake_minimum_required(VERSION 3.17)
project(ndk_demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(ndk_demo File.c ctype.c T1.cpp T2.c T3.c T4.c T5.c T6.c T7.c T8.c)