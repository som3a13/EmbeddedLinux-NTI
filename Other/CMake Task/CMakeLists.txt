cmake_minimum_required(VERSION 3.1)

project(
    CMakeExample
    VERSION 1.0
    LANGUAGES CXX
)


add_library(Mylib STATIC ./library/WriteInFile.cpp)


add_executable(Ex)

target_sources(Ex PRIVATE 
    ./src/main.cpp 
    ./src/print.cpp
)

target_include_directories(Ex PRIVATE include)

target_link_libraries(Ex PRIVATE Mylib)


set_target_properties(Ex PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

set_target_properties(Mylib PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)