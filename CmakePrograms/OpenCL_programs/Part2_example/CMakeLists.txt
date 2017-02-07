CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
project(part2)

#need to include FindOPENCL.cmake to
SET( CMAKE_MODULE_PATH ${part2_SOURCE_DIR}/../cmake)

set(SOURCE
   ${SOURCE}
   ${CMAKE_CURRENT_SOURCE_DIR}/src/cll.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/src/part2.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/src/part2.cl
   ${CMAKE_CURRENT_SOURCE_DIR}/src/util.cpp
)
set(HEADERS
   ${HEADERS}
   ${CMAKE_CURRENT_SOURCE_DIR}/src/cll.h
   ${CMAKE_CURRENT_SOURCE_DIR}/src/part2.h
   ${CMAKE_CURRENT_SOURCE_DIR}/src/util.h
)

message("CMake module path: ${CMAKE_MODULE_PATH}\n")

FIND_PACKAGE (OPENCL)
#Need some OpenGL packages
FIND_PACKAGE(OpenGL)
FIND_PACKAGE(GLUT)
FIND_PACKAGE(GLEW)

INCLUDE_DIRECTORIES( 
    ${GLUT_INCLUDE_DIR}
    ${OPENGL_INCLUDE_DIR}
    ${GLEW_INCLUDE_PATH}
    ${part2_SOURCE_DIR}/../opencl10
)

set(CMAKE_C_COMPILER /opt/local/bin/gcc-mp-6)
set(CMAKE_CXX_COMPILER /opt/local/bin/g++-mp-6)

message("include directories: \n")
get_directory_property(includes INCLUDE_DIRECTORIES)
message("${includes}\n")

#build in debug mode
ADD_DEFINITIONS(-g)

#the source files we want to compile into the library
set (LIBCXXFILES cll.cpp part2.cpp util.cpp)
#set a CMake variable to name the library
SET(cllib part2)
ADD_LIBRARY(${cllib} ${LIBCXXFILES})


#create the executable
SET(EXEC part2.x)
ADD_EXECUTABLE(${EXEC} src/main.cpp)

TARGET_LINK_LIBRARIES (${EXEC}
   ${cllib}
   ${GLUT_LIBRARIES}
   ${OPENGL_LIBRARIES}
   ${GLEW_LIBRARY}
   ${OPENCL_LIBRARIES}
)