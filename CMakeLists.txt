cmake_minimum_required(VERSION 3.10)

# Project Information
project(ContainerizationService VERSION 1.0 DESCRIPTION "A containerization service like Docker" LANGUAGES CXX)

# Set the C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Include Directories
include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/src   # Include the source directory
  ${CMAKE_CURRENT_SOURCE_DIR}/include  # Include additional headers
)

# TODO: Add Build Targets
# add_executable(containerization_service
#   src/main.cpp   # Main entry point
#   src/containers/container.cpp   # Additional source files
#   src/parsers/parser.cpp
#   src/executors/executor.cpp
# )

# Add executable target
add_executable(start src/main.cpp)  # temporary

# Link Libraries (if any)
# Example: Link with an external library (Boost)
# find_package(Boost REQUIRED)
# target_link_libraries(containerization_service Boost::Boost)

# Custom Definitions (if needed)
# add_definitions(-DCUSTOM_DEFINE)

# Additional Build Options
# Example: Enable compiler warnings
add_compile_options(
  -Wall   # Enable all warnings
  -Wextra # Enable extra warnings
)

