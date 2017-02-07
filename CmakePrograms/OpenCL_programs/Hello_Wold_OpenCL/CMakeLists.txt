CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
project(Hello_OpenCL)

FIND_PACKAGE (OPENCL REQUIRED )
include_directories( ${OPENCL_INCLUDE_DIR} )

IF (WIN32)
	FIND_PATH(OPENCL_INCLUDE_DIR CL/cl.h )

	# TODO this is only a hack assuming the 64 bit library will
	# not be found on 32 bit system

	FIND_LIBRARY(OPENCL_LIBRARIES opencl64 )

	IF( OPENCL_LIBRARIES )

		FIND_LIBRARY(OPENCL_LIBRARIES opencl32 )

	ENDIF( OPENCL_LIBRARIES )

ELSE (WIN32)

	# Unix style platforms
	# We also search for OpenCL in the NVIDIA SDK default location

	FIND_PATH(OPENCL_INCLUDE_DIR CL/cl.h ~/NVIDIA_GPU_Computing_SDK/OpenCL/common/inc/ )

	FIND_LIBRARY(OPENCL_LIBRARIES OpenCL 

	  ENV LD_LIBRARY_PATH

	)

ENDIF (WIN32)

SET( OPENCL_FOUND "NO" )

IF(OPENCL_LIBRARIES )

	SET( OPENCL_FOUND "YES" )

ENDIF(OPENCL_LIBRARIES)



MARK_AS_ADVANCED(

  OPENCL_INCLUDE_DIR

)

set(CMAKE_C_COMPILER /opt/local/bin/gcc-mp-6)
set(CMAKE_CXX_COMPILER /opt/local/bin/g++-mp-6)

#build in debug mode
set(COMPILE_DEFINITIONS -O2)


#create the executable
SET(EXEC_DEV devices)
SET(EXEC_PLAT platforms)
SET(EXEC Hello_World_CL)

ADD_EXECUTABLE(${EXEC} src/hello.c)
ADD_EXECUTABLE(${EXEC_DEV} src/devices.c)
ADD_EXECUTABLE(${EXEC_PLAT} src/platforms.c)

TARGET_LINK_LIBRARIES (${EXEC_DEV}
   ${OPENCL_LIBRARIES}
)

TARGET_LINK_LIBRARIES (${EXEC_PLAT}
   ${OPENCL_LIBRARIES}
)

TARGET_LINK_LIBRARIES (${EXEC}
   ${OPENCL_LIBRARIES}
)