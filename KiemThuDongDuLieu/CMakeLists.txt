cmake_minimum_required(VERSION 3.10)

# Locate GTest
find_package(GTest REQUIRED)

# Include GTest headers
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(bmiTests bmi.cpp)

target_link_libraries(bmiTests ${GTEST_LIBRARIES} pthread)