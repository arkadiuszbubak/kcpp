/*
 * Simple Age Check Program
 * Demonstrates basic input/output and logging with std::clog
 */

#include <iostream>  // Needed for input/output operations

int main() {
    /*
     * PROGRAM INTRODUCTION
     * Using std::cout for user-facing messages
     * This will be visible to the program user
     */
    std::cout << "Age Verification Program\n";
    std::cout << "------------------------\n";

    /*
     * USER INPUT SECTION
     * Prompt for and store user input
     */
    std::cout << "Please enter your age: ";
    int age;
    std::cin >> age;  // Read user input

    /*
     * LOGGING WITH std::clog
     * This is for developer/diagnostic messages
     * - Buffered (may not appear immediately)
     * - Typically goes to same place as cerr
     * - Used here to record the input value
     */
    std::clog << "[DEBUG] User entered age: " << age << '\n';

    /*
     * PROGRAM LOGIC
     * Simple age verification
     */
    if (age < 0) {
        /*
         * ERROR HANDLING
         * Using std::cerr for error messages
         * - Unbuffered (appears immediately)
         * - Specifically for error output
         */
        std::cerr << "Error: Age cannot be negative!\n";
    }
    else if (age >= 18) {
        std::cout << "Access granted - you are an adult.\n";
    }
    else {
        std::cout << "Access denied - you are a minor.\n";
    }

    /*
     * PROGRAM CONCLUSION
     * Using clog to log program completion
     * This helps track program execution
     */
    std::clog << "[DEBUG] Program completed successfully\n";

    return 0;  // Indicates successful program completion
}
