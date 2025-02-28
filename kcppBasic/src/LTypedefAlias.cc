/**
 * @file LTypedefAlias.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2024.02.29 v0.01, 2025.02.28 v0.02
 * @brief Demonstration of typedef aliases in C++
 * @version v0.02
 *
 * This program demonstrates the use of the `typedef` keyword to create type
 * aliases, which can make code more readable and manageable.
 */

#include <iostream>
using namespace std;

/**
 * @brief Main function
 *
 * This program demonstrates the use of `typedef` to create an alias for the
 * `int` type. It declares a variable using the alias and prints its value.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  // Create a type alias for `int` using `typedef`
  typedef int LInt; /**< Alias for the `int` type */

  // Declare a variable using the alias
  LInt zmienna = 8; /**< Variable of type `LInt` (alias for `int`) */

  // Print the value of the variable
  cout << "Value of zmienna: " << zmienna << endl;

  return 0;
}
