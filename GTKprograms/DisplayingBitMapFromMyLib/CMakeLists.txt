cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)

project(BitMap_Show)

find_package(PkgConfig REQUIRED)

include_directories(${BitMap_Def} ~/Documents/Programming/MyGithub/MyLibraryFunctions/C/bitmap_def/)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
add_definitions(${GTK3_CFLAGS_OTHER})


SET(GCC_COVERAGE_COMPILE_FLAGS " -Wall")
add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})


SET(COMPILE_DEFINITIONS -O2)
set(CMAKE_C_COMPILER /opt/local/bin/gcc-mp-6)
#set(CMAKE_CXX_COMPILER /opt/local/bin/g++-mp-6)

set(ADDITIONAL_FILES ${BitMap_Def}/bitmap.c ${BitMap_Def}/bitmap.h)

add_executable(BitMap_Show src/DispBitMap.c)
target_link_libraries(BitMap_Show ${GTK3_LIBRARIES})
