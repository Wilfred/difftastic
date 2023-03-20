cmake_minimum_required(VERSION 3.8)
project(tree-sitter-java)

# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set source files
set(SOURCE_FILES
    src/parser.c
)

# Build tree-sitter-java as a shared library
add_library(tree-sitter-java SHARED ${SOURCE_FILES})

# Set the include directories
target_include_directories(tree-sitter-java PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
