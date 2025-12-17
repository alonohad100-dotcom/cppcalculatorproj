cmake_minimum_required(VERSION 3.10)

# Project name and version
project(AdvancedCalculator VERSION 2.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/src)

# Source files organized by module
set(CALCULATOR_SOURCES
    src/calculator/Calculator.cpp
    src/calculator/ScientificCalculator.cpp
)

set(UTILS_SOURCES
    src/utils/MathUtils.cpp
)

set(UI_SOURCES
    src/ui/Menu.cpp
)

set(MAIN_SOURCE
    src/main.cpp
)

# Header files
set(HEADERS
    src/calculator/Calculator.hpp
    src/calculator/ScientificCalculator.hpp
    src/utils/MathUtils.hpp
    src/ui/Menu.hpp
)

# Create executable
add_executable(${PROJECT_NAME}
    ${CALCULATOR_SOURCES}
    ${UTILS_SOURCES}
    ${UI_SOURCES}
    ${MAIN_SOURCE}
    ${HEADERS}
)

# Set output directory
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# Optional: Add tests directory if it exists
if(EXISTS ${CMAKE_SOURCE_DIR}/tests)
    enable_testing()
    add_subdirectory(tests)
endif()
