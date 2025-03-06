/**
 * @file LFunkcjaVoid.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.02.21
 * @brief Demonstration of the `void` type in C++
 * @version v0.02 (2025.03.06)
 *
 * This program demonstrates the use of the `void` type in C++. It shows how
 * `void` is used in function return types and parameters, and how the `return`
 * statement behaves in `void` functions.
 */

#include <iostream>
using namespace std;

/**
 * @brief Function with a `void` return type
 *
 * This function demonstrates the use of a `void` return type. It prints a
 * message and uses a `return` statement to exit the function early. The code
 * after the `return` statement is unreachable.
 */
void FunctionA() {
  cout << "W funkcji FunctionA" << endl;
  return;                         // Exit the function
  cout << "Jestem poza?" << endl; // Unreachable code
}

/**
 * @brief Function with a `void` parameter
 *
 * This function demonstrates the use of a `void` parameter. It prints a message
 * and does not explicitly use a `return` statement, as it is optional in `void`
 * functions.
 */
void FunctionB(void) {
  cout << "W funkcji FunctionB" << endl;
  // return; // Optional in `void` functions
}

/**
 * @brief Main function
 *
 * This is the entry point of the program. It calls `FunctionA` and `FunctionB`
 * to demonstrate the behavior of `void` functions.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  // Call `FunctionA` to demonstrate a `void` return type
  FunctionA();

  // Call `FunctionB` to demonstrate a `void` parameter
  FunctionB();

  return 0;
}
