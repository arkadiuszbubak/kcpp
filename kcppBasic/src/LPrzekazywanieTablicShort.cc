/**
 * @file LPrzekazywanieTablicShort.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2024.04.10, 2025.03.13 (v0.02)
 * @brief Demonstration of passing arrays to functions in C++
 * @version v0.02
 *
 * This program demonstrates how to pass one-dimensional (1D) arrays to
 * functions in C++. It shows how to modify array elements within functions and
 * explains why certain techniques (like `sizeof`) do not work as expected when
 * arrays are passed to functions.
 */

#include <iostream>
#include <iterator>
using namespace std;

/**
 * @brief Function to pass a 1D array by value
 *
 * This function demonstrates passing a 1D array by value. Arrays decay to
 * pointers when passed to functions, so the size information is lost. The
 * function modifies an element of the array to demonstrate that changes are
 * reflected outside the function.
 *
 * @param tab A 1D array of integers.
 * @param size The size of the array.
 */
void przekaz1D(int tab[], int size) {
  /* for (int i = 0; i < size; i++) {
   *   cout << i << ":\t" << tab[i] << endl;
   * } */
  tab[1] = 37; // Modify the second element of the array
  // tab[3] = 377; // Uncommenting this would cause undefined behavior if size <
  // 4
}

/**
 * @brief Function to pass a 1D array by pointer
 *
 * This function demonstrates passing a 1D array by pointer. Arrays decay to
 * pointers when passed to functions, so the size information is lost. The
 * function modifies an element of the array using pointer arithmetic to
 * demonstrate that changes are reflected outside the function.
 *
 * @param tab A pointer to a 1D array of integers.
 * @param size The size of the array.
 */
void przekaz1Dwsk(int *tab, int size) {
  /* for (int i = 0; i < size; i++) {
   *   cout << i << ":\t" << tab[i] << endl;
   * } */
  // tab[1] = 39; // Modify the second element of the array
  *(tab + 1) = 39; // Modify the second element using pointer arithmetic
}

/**
 * @brief Main function
 *
 * This is the entry point of the program. It demonstrates passing 1D arrays to
 * functions and shows how modifications within the functions affect the
 * original array.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  int tablica1D[3] = {1, 2, 3}; // Initialize a 1D array
  int size = 3;                 // Size of the array

  // Pass the array to `przekaz1D` and print the modified array
  przekaz1D(tablica1D, size);
  for (int i = 0; i < size; i++) {
    cout << i << ":\t" << tablica1D[i] << endl;
  }

  cout << "--------------" << endl;

  // Pass the array to `przekaz1Dwsk` and print the modified array
  przekaz1Dwsk(tablica1D, size);
  for (int i = 0; i < size; i++) {
    cout << i << ":\t" << tablica1D[i] << endl;
  }

  return 0;
}
