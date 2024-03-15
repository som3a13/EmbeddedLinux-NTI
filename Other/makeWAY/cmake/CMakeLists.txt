cmake_minimum_required(VERSION 3.1...3.27)

project(
    CMakeExample
    VERSION 1.0
    LANGUAGES CXX
)
#add STATIC or SHARED  
add_library(Mylib SHARED slib.cpp)

add_executable(hx main.cpp)
#link exe with lib
target_include_directories(hx PRIVATE include)

target_link_libraries(hx PRIVATE Mylib)


enable_testing()
add_test(NAME hx COMMAND hx)

install(TARGETS hx) # prefix=./
