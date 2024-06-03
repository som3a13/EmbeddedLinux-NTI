cmake_minimum_required(VERSION 3.1...3.27)

project(
    CMakeExample
    VERSION 1.0
    LANGUAGES CXX
)

add_executable(hx gtest.cpp)
#link exe with lib
target_link_libraries(hx libgtest_main.a libgtest.a)

enable_testing()
add_test(NAME hx COMMAND hx)

install(TARGETS hx) # prefix=./
