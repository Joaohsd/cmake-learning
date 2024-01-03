cmake_minimum_required(VERSION 3.22.1)

project(demoproject)

add_executable(demoproject cpp/main.cpp)

target_link_libraries(demoproject mymath)