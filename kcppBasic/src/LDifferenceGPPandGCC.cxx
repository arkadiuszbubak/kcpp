/**
 * @file LDifferenceGPPandGCC.cxx
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.03.16 v0.01, 2023.04.12 v0.02
 * @brief Demonstration of the difference between `gcc` and `g++`
 * @version v0.03 (2025.03.06)
 *
 * This program demonstrates the differences between compiling C code with `gcc`
 * and `g++`. It shows how the choice of compiler affects name mangling and
 * linking behavior, even when the file extension suggests a C++ source file
 * (`.cxx`).
 */

#include <stdio.h>

/**
 * @brief Function to print "Hello World!"
 *
 * This function demonstrates a simple C function that prints a message to the
 * console.
 */
void Funkcja(void) { printf("Hello World!\n"); }

/**
 * @brief Main function
 *
 * This is the entry point of the program. It calls the `Funkcja` function to
 * print a message. The program also provides instructions on how to compile the
 * code with `gcc` and `g++` and how to inspect the resulting binaries to
 * observe differences in name mangling.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void) {
  // Call the `Funkcja` function
  Funkcja();

  /* Try the following commands to compile and inspect the binaries:
   *
   * Compile with `gcc` and `g++` for different file extensions:
   *   gcc LDifferenceGPPandGCC.c  -o gcc_c.out
   *   g++ LDifferenceGPPandGCC.c  -o gpp_c.out
   *
   *   gcc LDifferenceGPPandGCC.cc -o gcc_cc.out
   *   g++ LDifferenceGPPandGCC.cc -o gpp_cc.out
   *
   *   gcc LDifferenceGPPandGCC.cxx -o gcc_cxx.out
   *   g++ LDifferenceGPPandGCC.cxx -o gpp_cxx.out
   *
   *   gcc LDifferenceGPPandGCC_bigC.C -o gcc_bigC.out
   *   g++ LDifferenceGPPandGCC_bigC.C -o gpp_bigC.out
   *
   * Inspect the symbols in the resulting binaries using `readelf`:
   *   readelf -s gcc_c.out    | grep Funkcja
   *   readelf -s gpp_c.out    | grep Funkcja
   *
   *   readelf -s gcc_cc.out   | grep Funkcja
   *   readelf -s gpp_cc.out   | grep Funkcja
   *
   *   readelf -s gcc_cxx.out  | grep Funkcja
   *   readelf -s gpp_cxx.out  | grep Funkcja
   *
   *   readelf -s gcc_bigC.out | grep Funkcja
   *   readelf -s gpp_bigC.out | grep Funkcja
   */

  return 0;
}
