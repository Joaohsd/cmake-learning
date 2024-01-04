cmake_minimum_required(VERSION 3.22.1)

project(demoproject)

add_executable(demoproject cpp/main.cpp)

# If the library was not installed in system, we can use the following command (for this example):
# target_link_directories(demoproject PRIVATE ${CMAKE_SOURCE_DIR}/../DemoLib/build/)
#

target_link_libraries(demoproject mymath)