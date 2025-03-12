/**
 * @file LNamespace.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2019.02.10
 * @brief Demonstration of namespaces in C++
 * @version v0.02 (2025.02.28)
 *
 * This program demonstrates the use of namespaces in C++ to avoid naming
 * conflicts and organize code into logical groups. It shows how to define and
 * use namespaces, as well as how to resolve naming conflicts between global and
 * namespace-scoped functions.
 */

#include <iostream>
using namespace std;
// using namespace nasza;

/**
 * @namespace nasza
 * @brief A custom namespace to demonstrate namespace usage
 *
 * This namespace contains a variable `k` and a function `Funkcja` to illustrate
 * how namespaces can be used to organize code and avoid naming conflicts.
 */
namespace nasza {
int k = 7; /**< A variable defined within the `nasza` namespace */

/**
 * @brief A function defined within the `nasza` namespace
 *
 * This function prints a message to indicate that it belongs to the `nasza`
 * namespace.
 */
void Funkcja() { cout << "Namespace: Funkcja" << endl; }
} // namespace nasza

//----------------------------------------------------------------------
/**
 * @brief A global function with the same name as the one in the `nasza`
 * namespace
 *
 * This function demonstrates how global functions can conflict with
 * namespace-scoped functions if not properly resolved.
 */
void Funkcja() { cout << "Global: Funkcja" << endl; }

//----------------------------------------------------------------------
/**
 * @brief Main function
 *
 * This program demonstrates the use of namespaces to avoid naming conflicts and
 * organize code. It shows how to access variables and functions within a
 * namespace and how to resolve conflicts between global and namespace-scoped
 * functions.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  // Print a test message
  cout << "Test" << endl;

  int k = 6; // Local variable with the same name as `nasza::k`

  // Access the variable `k` from the `nasza` namespace
  cout << "nasza::k: " << nasza::k << endl;

  // Access the local variable `k`
  cout << "Local k: " << k << endl;

  // Call the `Funkcja` function from the `nasza` namespace
  nasza::Funkcja();

  // Uncommenting the following line would cause a conflict(?) if `using
  // namespace nasza` is active
  Funkcja(); // Error(?): Ambiguous call between global and namespace-scoped
  // functions

  return 0;
}
