#include <cstdlib> // For std::rand
#include <iostream>
#include <string>

// Function with an uninitialized variable
int calculate(int x) {
    int result; // Uninitialized variable, can cause unpredictable behavior
    if (x > 10) {
        result = x * 2;
    }
    // If x <= 10, result is uninitialized, causing an issue
    return result; // This could return an indeterminate value
}

// Function with raw pointers and no null checks
void useRawPointer() {
    int *ptr = new int(10); // Raw pointer allocation
    std::cout << "Pointer value: " << *ptr << std::endl;
    delete ptr; // Manual memory management
}

// Function with deprecated function usage
void useDeprecatedFunction() {
    int randomNumber = std::rand(); // std::rand() is considered outdated
    std::cout << "Random number: " << randomNumber << std::endl;
}

// Code with style issues (inconsistent naming, spacing)
void styleIssue() { // Inconsistent spacing
    int MixedCaseVar =
        10; // Inconsistent naming (use lowerCamelCase or snake_case)
    std::cout << "Value: " << MixedCaseVar << std::endl;
}

// Function without return value (missing return in non-void function)
int missingReturn(int x) {
    if (x > 5) {
        return x * 2;
    }
    // Missing return statement for cases where x <= 5
}
