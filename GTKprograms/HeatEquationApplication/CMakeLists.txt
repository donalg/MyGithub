cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)

find_package(PkgConfig REQUIRED)
find_package(OpenGL)
find_package(GLUT)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)


include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
add_definitions(${GTK3_CFLAGS_OTHER})

set(CMAKE_C_COMPILER /opt/local/bin/gcc-mp-6)
#set(CMAKE_CXX_COMPILER /opt/local/bin/g++-mp-6)

add_executable(HeatEquationApp src/HeatEquationApp.c)
target_link_libraries(HeatEquationApp 
	${GTK3_LIBRARIES}
	${OPENGL_gl_LIBRARY}
	${GLUT_LIBRARIES} )

