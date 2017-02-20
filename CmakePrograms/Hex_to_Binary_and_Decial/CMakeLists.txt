cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)

project(BitMap_Test)

find_package(PkgConfig REQUIRED)


SET(GCC_COVERAGE_COMPILE_FLAGS " -Wall")
add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})


SET(COMPILE_DEFINITIONS -O2)
set(CMAKE_C_COMPILER /opt/local/bin/gcc-mp-6)
#set(CMAKE_CXX_COMPILER /opt/local/bin/g++-mp-6)

add_executable(HexConverter src/hex_file_convert.c)
