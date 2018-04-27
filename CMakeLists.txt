cmake_minimum_required(VERSION 3.9)

#C
#project(untitled C)
#set(CMAKE_C_STANDARD 99)
#
#add_executable(untitled main.c typetest.c typetest.h pre.h pre.c testtype.h testtype.c)

#C++
project(untitled)
set(CMAKE_CXX_STANDARD 11)

set(src1 test2/test1.cpp )
set(src2 lsl_sort.c )
set(src3 channel.cpp channel1.cpp)


add_executable(untitled ${src3})