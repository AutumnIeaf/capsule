#include <algorithm>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
void handleMakeCommand(const std::string &directory);
void handleBuildCommand(const std::string &path);
void handleDeleteCommand(const std::string &directory);
int main(int argc, char *argv[]) {
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <command> <argument>\n";
        return 1;
    }
    std::string command = argv[1];
    std::string argument = argv[2];
    if (command == "make") {
        handleMakeCommand(argument);
    } else if (command == "build") {
        handleBuildCommand(argument);
    } else if (command == "delete") {
        handleDeleteCommand(argument);
    } else {
        std::cerr << "Invalid command\n";
        return 1;
    }
    return 0;
}
void handleMakeCommand(const std::string &directory) {
    std::cout << "Command: capsule make " << directory << std::endl;
    if (!std::filesystem::exists(directory)) {
        if (std::filesystem::create_directory(directory)) {
            std::cout << "Directory created successfully: " << directory
                      << std::endl;
        } else {
            std::cerr << "Failed to create directory: " << directory
                      << std::endl;
        }
    } else {
        std::cerr << "Directory already exists: " << directory << std::endl;
    }
}
void handleBuildCommand(const std::string &path) {
    std::cout << "Command: capsule build " << path << std::endl;
    try {
        std::vector<std::string> files;
        if (std::filesystem::is_directory(path)) {
            for (const auto &entry :
                 std::filesystem::recursive_directory_iterator(path)) {
                if (entry.is_regular_file() &&
                    std::filesystem::path(entry.path()).extension() == ".py") {
                    files.push_back(entry.path());
                }
            }
        } else if (std::filesystem::is_regular_file(path) &&
                   std::filesystem::path(path).extension() == ".py") {
            files.push_back(path);
        }
        if (!files.empty()) {
            std::string outputFileName = "capsule.py";
            std::ofstream outputFile(outputFileName);
            for (const auto &file : files) {
                std::ifstream inputFile(file);
                outputFile << inputFile.rdbuf() << "\n";
            }
            std::cout << "Created capsule file with Python files: "
                      << outputFileName << std::endl;
        } else {
            std::cerr << "No Python files found to build." << std::endl;
        }
    } catch (const std::filesystem::filesystem_error &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
void handleDeleteCommand(const std::string &directory) {
    std::cout << "Command: capsule delete " << directory << std::endl;
    if (std::filesystem::exists(directory)) {
        std::filesystem::remove_all(directory);
        std::cout << "Directory deleted successfully: " << directory
                  << std::endl;
    } else {
        std::cerr << "Directory does not exist: " << directory << std::endl;
    }
}