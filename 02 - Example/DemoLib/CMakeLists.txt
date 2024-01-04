cmake_minimum_required(VERSION 3.22.1)

project(mymath)

add_library(mymath cpp/adder.cpp)

set_target_properties(mymath PROPERTIES PUBLIC_HEADER cpp/adder.h)

install(TARGETS mymath LIBRARY DESTINATION lib
    PUBLIC_HEADER DESTINATION include
)