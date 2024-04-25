# Define variables for paths and targets
BUILD_DIR = build
SOURCE_DIR = src
# EXECUTABLE = containerization_service

# Default target: Build the project
all: build

# Build the project using CMake and Make
build:
	@echo "Building the project..."
	@mkdir -p $(BUILD_DIR)  # Ensure the build directory exists
	@cd $(BUILD_DIR) && cmake .. && make  # Configure and build

# Run the executable
# run:
# 	@echo "Running the program..."
# 	@cd $(BUILD_DIR) && ./$(EXECUTABLE)

# Clean the build directory
clean:
	@echo "Cleaning the build..."
	@rm -rf $(BUILD_DIR)

# Rebuild the project (clean + build)
rebuild: clean build
