
cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)


include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
add_definitions(${GTK3_CFLAGS_OTHER})

add_executable(temp temp.c)
target_link_libraries(temp ${GTK3_LIBRARIES})
