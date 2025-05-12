/**
 * @file LExtern.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.03.05
 * @brief Demonstration of `extern "C"` in C++
 * @version v0.01
 *
 * This program demonstrates the use of `extern "C"` to prevent name mangling in
 * C++. It shows how to declare functions with C linkage and explains the
 * differences between C++ and C function name mangling.
 */

#include <iostream>
using namespace std;

/**
 * @brief Function `a`
 *
 * A simple function with C++ linkage.
 */
void a() {}

/**
 * @brief Function `b`
 *
 * A simple function with C++ linkage.
 */
void b() {}

/**
 * @brief Overloaded function `b`
 *
 * An overloaded version of function `b` that takes an integer parameter.
 *
 * @param zmienna An integer parameter.
 */
void b(int zmienna) {
  zmienna += 7; // Modify the parameter (no effect outside the function)
}

// Use `extern "C"` to prevent name mangling for C++ functions
#ifdef __cplusplus
extern "C" {
#endif
/**
 * @brief Function `ca`
 *
 * A function with C linkage (no name mangling).
 */
void ca() {}

/**
 * @brief Function `cb`
 *
 * A function with C linkage (no name mangling).
 */
void cb() {}

// Uncommenting the following line would cause an error because C does not
// support function overloading void cb(int a) {}  // Error
#ifdef __cplusplus
}
#endif

/**
 * @brief Function `cc`
 *
 * A function with C linkage (no name mangling).
 */
extern "C" void cc() {}

/**
 * @brief Function `h`
 *
 * This function demonstrates calling functions with both C++ and C linkage.
 */
void h() {
  b();  // Call the C++ function `b`
  cb(); // Call the C function `cb`
  cc(); // Call the C function `cc`
  b(2); // Call the overloaded C++ function `b(int)`
}

/**
 * @brief Main function
 *
 * This is the entry point of the program. It provides instructions on how to
 * compile and disassemble the program to observe the effects of `extern "C"`.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  cout << "Samodzielna kompilacja:" << endl;
  cout << "  g++ -c -std=c++11 -Wall -Wextra -pedantic -o LExtern.o "
          "../src/LExtern.cc"
       << endl;
  cout << "Rozmontowanie/odwiklanie (disassemble):" << endl;
  cout << "  readelf -s LExtern.o\n" << endl;

  cout << "Lub jesli z uzyciem cmake:" << endl;
  cout << "  readelf -s CMakeFiles/LExtern.dir/src/LExtern.cc.o\n" << endl;

  cout << "'Unmangle' nazw funkcji:" << endl;
  cout << "  c++filt _Z1fv" << endl;

  return 0;
}
