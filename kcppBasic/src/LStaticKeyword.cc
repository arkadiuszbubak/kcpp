/**
 * @file LStaticKeyword.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2019.02.10
 * @brief Demonstration of the `static` keyword in C++
 * @version v0.02 (2025.02.28)
 */

#include <iostream>
using namespace std;

// int comp(int c); //Unnecessary when function is defined before main function

// Global static variable
static int ncall = 0; /**< Tracks the number of times `comp` is called */

/**
 * @brief Computes a value or returns the number of times the function has been
 * called
 *
 * This function demonstrates the use of a static variable to track the number
 * of times it has been called. If the input `c` is 0, it returns the count of
 * calls.
 *
 * @param c Input value. If 0, the function returns the call count.
 * @return int Returns `c` if `c` is non-zero; otherwise, returns the call
 * count.
 */
int comp(int c) {
  ncall++; // Increment the call count
  if (!c)  // If `c` is 0, return the call count
    return ncall;
  return c; // Otherwise, return `c`
}

/**
 * @brief Increments the global static variable `ncall`
 *
 * This function demonstrates how a global static variable can be modified by
 * multiple functions.
 */
void comp1() {
  ncall++; // Increment the global call count
}

/**
 * @brief Main function
 *
 * This program demonstrates the use of the `static` keyword in C++ by tracking
 * the number of times a function is called using a global static variable. It
 * also shows how multiple functions can interact with the same static variable.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  int a = 5, b = -10;

  // Call `comp` with non-zero values
  cout << comp(a) << ' ' << comp(b) << endl;

  // Call `comp` with 0 to get the call count
  cout << "Funkcja zostala wywolana " << comp(0) << " razy." << endl;

  // Call `comp1` multiple times to increment the global call count
  comp1();
  comp1();
  comp1();
  comp1();
  comp1();

  // Print the updated call count
  cout << "Globalna liczba wywolan: " << ncall << endl;

  return 0;
}
