cmake_minimum_required(VERSION 3.22.1)

project(demoproject VERSION 1.0)

configure_file(demoprojectConfig.h.in demoprojectConfig.h)

add_executable(demoproject cpp/main.cpp)

target_include_directories(demoproject PUBLIC ${PROJECT_BINARY_DIR})

# If the library was not installed in system, we can use the following command (for this example):
target_link_directories(demoproject PRIVATE ${CMAKE_SOURCE_DIR}/../DemoLib/build/)
target_link_libraries(demoproject mymath)
#

# If the library was installed in system, we can use the following command (for this example):
#target_link_libraries(demoproject mymath)
#