# Capsule - a lightweight C++ containerization service

Lightweight containerization service built in C++, designed to encapsulate Python-based environments for easier deployment and execution. Aims to provide a simplified version of Docker, with a focus on creating isolated execution environments without the additional overhead of networking and security features.

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Directory Structure](#directory-structure)
- [Contributing](#contributing)
- [License](#license)

## Installation

1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/AutumnIeaf/capsule.git
   ```

2. Navigate to the project directory:
   ```bash
   cd capsule
   ```

3. Build the project using the provided Makefile:
   ```bash
   make
   ```

4. Ensure all necessary dependencies are installed. This project requires:
   - A C++ compiler (like `g++` or `clang++`)
   <!-- - Additional dependencies, if any (e.g., Boost, Google Test for unit testing) -->

## Usage

Once the project is built, you can use the CLI to perform various operations. Here's a brief overview of the available commands:

- **Build**: Create a capsule file from a set of Python files or other resources.
- **Parse & Execute**: Parse a capsule file and execute the contained code in a virtual environment.
- **Display**: Display information contained within a capsule file.

<!-- Example command to build a capsule file:
```bash
./bin/main --build path/to/source/files
``` -->

## Directory Structure

Here's the breakdown of the project's directory structure:

- **/src**: Contains the source code for the project.
  - **/containers**: Code related to containerization.
  - **/parsers**: Code related to parsing capsule files.
  - **/executors**: Code for executing contained code.
  - **main.cpp**: Main entry point for the CLI.
  - **capsule.cpp**: Logic for handling capsule files.
- **/tests**: Contains unit and integration tests.
  - **/unit**: Unit tests.
  - **/integration**: Integration tests.
- **/bin**: Contains compiled binaries.
- **/lib**: Any external or custom libraries.
- **/include**: Additional header files.
- **/config**: Configuration files (e.g., `.config`, `.capsuleignore`).
- **/scripts**: Scripts for building, running, or deploying the project.
- **/docs**: Project documentation and guides.
- **/third_party**: External dependencies or third-party libraries.
- **/examples**: Example scripts and usage scenarios.

## Contributers

- [PM, Developer] Kevin Ram
- [Developer] Junkai Zheng
- [Developer] Matthew Liang
- [Developer] Ryan Ho

Contact information coming soon on completion of project.