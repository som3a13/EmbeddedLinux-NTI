cmake_minimum_required(VERSION 3.1...3.27)


set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR arm)

# Specify the cross compiler
set(TOOLCHAIN_PREFIX /home/som3a133/x-tools/arm-cortexa9_neon-linux-musleabihf/bin/arm-cortexa9_neon-linux-musleabihf)

# Set the path to the cross-compiler binaries
set(CMAKE_C_COMPILER ${TOOLCHAIN_PREFIX}-gcc)
set(CMAKE_CXX_COMPILER ${TOOLCHAIN_PREFIX}-g++)

# Set the path to the cross-compiler sysroot if necessary
# set(CMAKE_SYSROOT /home/som3a133/x-tools/arm-cortexa9_neon-linux-musleabihf/arm-cortexa9_neon-linux-musleabihf/sysroot)

# Adjust other settings as necessary, like include directories, libraries, etc.


project(
    CMAKEProject
    VERSION 1.0
)
# change static to shared to make it dynamicly linked 
add_library(libprint STATIC ./lib/print.c)

add_executable(TestStatic)

target_sources(TestStatic PRIVATE ./src/main.c)

target_include_directories(TestStatic PRIVATE include)

target_link_libraries(TestStatic PRIVATE libprint)

set_target_properties(TestStatic PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

set_target_properties(libprint PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)