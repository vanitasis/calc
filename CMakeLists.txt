cmake_minimum_required(VERSION 3.10)
project(projek_c)

include_directories(include)

file(GLOB SRC "src/*.c")

add_executable(main ${SRC})