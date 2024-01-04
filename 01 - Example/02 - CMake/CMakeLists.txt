cmake_minimum_required(VERSION 3.22.1)

message(STATUS "USING SOURCE DIRECTORY ${CMAKE_SOURCE_DIR}") # Just for testing
message(STATUS "USING BINARY DIRECTORY ${CMAKE_BINARY_DIR}") # Just for testing

project(HelloWorld)

message(STATUS "DEFINED PROJECT NAME AS ${PROJECT_NAME}") # Just for testing

add_executable(${PROJECT_NAME} main.cpp)

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin
    )

message(WARNING ${CMAKE_VERSION})