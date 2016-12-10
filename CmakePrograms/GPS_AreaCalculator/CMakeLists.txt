

# target_link_libraries(lab5 ${OpenCV_LIBS})

# find_package( OpenCV REQUIRED )









cmake_minimum_required(VERSION 2.8)

project(GPA_AreaCalculator)

SET(COMPILE_DEFINITIONS -O2)

include_directories(src/includes)

set(ADDITIONAL_FILES src/includes/CSVdata.cpp src/includes/CSVdata.h)

add_executable(GPSBuddy src/main.cpp ${ADDITIONAL_FILES})

