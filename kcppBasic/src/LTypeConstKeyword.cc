/**
 * @file LTypeConstKeyword.cpp
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2021.03.01
 * @brief Demonstration of the `const` keyword in C++
 * @version v0.01
 */

#include <iostream>
using namespace std;

/**
 * @brief A function that returns a constant integer
 *
 * This function demonstrates the use of the `const` keyword in the return type.
 * The returned value cannot be modified.
 *
 * @return const int Returns a constant integer value (73).
 */
const int FunA() { return 73; }

/**
 * @brief A function that takes a constant integer parameter
 *
 * This function demonstrates the use of the `const` keyword in function
 * parameters. The parameter `t` cannot be modified within the function.
 *
 * @param t A constant integer parameter.
 */
void FunB(const int t) {
  // t++; // Error: Cannot modify a constant parameter
}

/**
 * @brief Main function
 *
 * This program demonstrates the use of the `const` keyword in C++ for
 * variables, pointers, and function parameters. It also shows how to declare
 * and use constant pointers and pointers to constant variables.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  // Constant variables
  const int i = 10; // Declare a constant integer
  const int j =
      i + 10; // Works fine: `j` is a constant initialized with an expression
  // i++;                    // Error: Cannot modify a constant variable

  // Pointer to a constant variable
  const int *u1; // `u1` is a pointer to a constant integer
  int const *u2; // Equivalent to `const int* u2`
  char const *v; // Pointer to a constant character

  // Constant pointer to a variable
  int x = 37;
  int *const w1 = &x;  // `w1` is a constant pointer to an integer
  cout << *w1 << endl; // Output: 37

  // Pointer to a constant variable
  const int *w2 = &x;  // `w2` is a pointer to a constant integer
  cout << *w2 << endl; // Output: 37

  // Uncommenting the following lines will result in errors
  /*
  int y = 37;
  w1 = &y;                   // Error: Cannot reassign a constant pointer
  */

  // Call a function that returns a constant integer
  cout << "Call FunA function: " << FunA() << endl;

  return 0;
}
