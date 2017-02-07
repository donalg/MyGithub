# Specify the minimum CMAKE version required
cmake_minimum_required(VERSION 3.0)

# Your project's name

project(Hello_World_MP)
set(COMPILE_DEFINITIONS -O2)
set(CMAKE_C_FLAGS -fopenmp)

# Set the Compiler to GCC 6 as to allow OpenMP but not met with Xcode. 
set(CMAKE_C_COMPILER /opt/local/bin/gcc-mp-6)
set(CMAKE_CXX_COMPILER /opt/local/bin/g++-mp-6)
add_executable(Hello_MP src/Hello_MP.c )

