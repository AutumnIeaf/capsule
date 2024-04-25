# Define variables for paths and targets
BUILD_DIR = build
SOURCE_DIR = src
EXECUTABLE = containerization_service

# Default target: Build the project
all: build

# Detect platform
UNAME := $(shell uname)

# Build the project with CMake
build:
	@echo "Building the project..."
ifeq ($(UNAME), Darwin)  # macOS
	@mkdir -p $(BUILD_DIR)  # Ensure the build directory exists
	@cd $(BUILD_DIR) && cmake .. && make  # Configure and build for macOS
else  # Assume Windows or other platforms
	@mkdir $(BUILD_DIR)  # Ensure the build directory exists
	@cd $(BUILD_DIR) && cmake -G "MinGW Makefiles" .. && mingw32-make  # Configure and build for Windows
endif

# Run the executable
run:
	@echo "Running the program..."
ifeq ($(UNAME), Darwin)  # macOS
	@cd $(BUILD_DIR) && ./$(EXECUTABLE)  # Run for macOS
else  # Assume Windows
	@cd $(BUILD_DIR) && $(EXECUTABLE).exe  # Run for Windows
endif

# Clean the build directory
clean:
	@echo "Cleaning the build..."
ifeq ($(UNAME), Darwin)  # macOS
	@rm -rf $(BUILD_DIR)  # macOS command to remove directory
else  # Assume Windows
	@rmdir /s /q $(BUILD_DIR)  # Windows command to remove directory
endif

# Rebuild the project (clean + build)
rebuild: clean build
