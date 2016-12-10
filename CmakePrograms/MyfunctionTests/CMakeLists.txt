

cmake_minimum_required(VERSION 2.8)

project(MyFunctionsTester)

SET(COMPILE_DEFINITIONS -O2)

include_directories(../../MyLibraryFunctions/C/matrix_def)

set(ADDITIONAL_FILES ../../MyLibraryFunctions/C/matrix_def/matrix_def.c ../../MyLibraryFunctions/C/matrix_def/matrix_def.h)

add_executable(MatrixTest src/main.c ${ADDITIONAL_FILES})

