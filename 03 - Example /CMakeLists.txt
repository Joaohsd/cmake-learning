cmake_minimum_required(VERSION 3.22.1)

project(hello VERSION 1.0)

configure_file(helloConfig.h.in helloConfig.h)

add_executable(${PROJECT_NAME} cpp/main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/helloConfig.h" DESTINATION include)