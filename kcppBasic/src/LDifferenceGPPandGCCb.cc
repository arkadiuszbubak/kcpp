/**
 * @file LDifferenceGPPandGCCb.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.03.16
 * @brief Demonstration of the difference between `gcc` and `g++` for C++ code
 * @version v0.02 (2025.03.06)
 *
 * This program demonstrates the differences between compiling C++ code with
 * `gcc` and `g++`. It shows how `gcc` requires explicit linking of the C++
 * standard library (`-lstdc++`) when compiling C++ code, while `g++` handles
 * this automatically.
 */

#include <iostream>

/**
 * @brief Function to print "Hello, world!"
 *
 * This function demonstrates a simple C++ function that prints a message to the
 * console using the C++ standard library (`std::cout`).
 */
void Funkcja(void) { std::cout << "Hello, world!" << std::endl; }

/**
 * @brief Main function
 *
 * This is the entry point of the program. It calls the `Funkcja` function to
 * print a message. The program also provides instructions on how to compile the
 * code with `gcc` and `g++` and how to inspect the resulting binaries to
 * observe differences in name mangling and linking.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void) {
  // Call the `Funkcja` function
  Funkcja();

  /* Try the following commands to compile and inspect the binaries:
   *
   * Compile with `gcc` (requires explicit linking of the C++ standard library):
   *   gcc LDifferenceGPPandGCCb.cc -o gccb.out // ERROR: Missing C++ standard
   * library gcc LDifferenceGPPandGCCb.cc -lstdc++ -o gccb1.out // Correct:
   * Explicitly link stdc++
   *
   * Compile with `g++` (automatically links the C++ standard library):
   *   g++ LDifferenceGPPandGCCb.cc -o gccb2.out
   *
   * Inspect the symbols in the resulting binaries using `readelf`:
   *   readelf -s gccb1.out | grep Funkcja
   *   readelf -s gccb2.out | grep Funkcja
   */

  return 0;
}
