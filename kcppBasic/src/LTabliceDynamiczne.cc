/**
 * @file LTabliceDynamiczne.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2019.02.10
 * @brief Demonstration of dynamic arrays in C++
 * @version v0.02 (2025.03.06)
 *
 * This program demonstrates the use of dynamic arrays in C++. It shows how to
 * allocate and deallocate memory for arrays of different types (int, float,
 * char) and how to manipulate and access their elements.
 */

#include <cstring> // For strcpy
#include <iostream>
using namespace std;

/**
 * @brief Function to demonstrate dynamic arrays
 *
 * This function allocates memory for dynamic arrays of type `int`, `float`, and
 * `char`. It initializes and manipulates the arrays, then prints their
 * contents. Finally, it deallocates the memory to avoid memory leaks.
 */
void tablice();

/**
 * @brief Main function
 *
 * This is the entry point of the program. It calls the `tablice` function to
 * demonstrate dynamic arrays.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  tablice();
  return 0;
}

/**
 * @brief Function to demonstrate dynamic arrays
 *
 * This function allocates memory for dynamic arrays of type `int`, `float`, and
 * `char`. It initializes and manipulates the arrays, then prints their
 * contents. Finally, it deallocates the memory to avoid memory leaks.
 */
void tablice() {
  int k; // Loop counter

  // Allocate memory for dynamic arrays
  int *tInt = new int[7];       /**< Dynamic array of integers */
  float *tFloat = new float[7]; /**< Dynamic array of floats */
  char *tChar = new char[7];    /**< Dynamic array of characters */

  // Initialize array elements
  tInt[0] = 0; // Direct indexing
  // *(tInt) = 0;           // Direct indexing
  // *tInt = 0;           // Direct indexing
  *(tInt + 1) = 1;       // Pointer arithmetic
  *(tFloat) = 3.14;      // Pointer arithmetic for float array
  strcpy(tChar, "abcd"); // Copy a string into the char array

  // Print the contents of the integer array
  for (k = 0; k < 7; k++) {
    cout << "tInt[" << k << "] = " << *(tInt + k) << endl;
  }

  // Print the first element of the float array
  cout << "tFloat[0] = " << *(tFloat + 0) << endl;

  // Deallocate memory to avoid memory leaks
  delete[] tInt;   // Delete the integer array
  delete[] tFloat; // Delete the float array
  delete[] tChar;  // Delete the char array
}
