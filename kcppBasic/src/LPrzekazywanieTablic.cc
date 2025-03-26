/**
 * @file LPrzekazywanieTablic.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2019.02.10, 2025.03.13 (v0.02)
 * @brief Demonstration of passing arrays to functions in C++
 * @version v0.02
 *
 * This program demonstrates how to pass one-dimensional (1D) and
 * two-dimensional (2D) arrays to functions in C++. It shows the differences
 * between passing arrays by value, by pointer, and how to handle array size
 * information.
 */

#include <array>
#include <iostream>
#include <iterator>
#include <span>
using namespace std;

/**
 * @brief Function to pass a 1D array by value
 *
 * This function demonstrates passing a 1D array by value. Note that arrays
 * decay to pointers when passed to functions, so the size information is lost.
 *
 * @param tab A 1D array of integers.
 */
void przekaz1D(int tab[]) {
  cout << endl << "*** Przekaz1DA ---------------------------" << endl;
  for (int i = 0; i < 6; i++) {
    cout << tab[i] << " ";
  }
  cout << endl << "Zmienić tablice w funkcji. Wypisać poza funkcją." << endl;
  cout << "Czy wartości poza funkcją się zmieniły?" << endl;
  cout << endl;
}

/**
 * @brief Function to pass a 1D array with size preservation (incomplete)
 *
 * This function attempts to pass a 1D array while preserving its size. However,
 * it currently does not work correctly due to array decay to pointers.
 *
 * @param tab A 1D array of integers.
 */
void przekaz1DA(int tab[]) {
  cout << endl << "*** Przekaz1DA ---------------------------" << endl;
  int iSize = sizeof(&tab) / sizeof(tab[0]); // Incorrect size calculation
  cout << "Size: " << iSize << endl;
  for (int i = 0; i <= iSize; i++) {
    cout << tab[i] << " ";
  }
  cout << endl;

  // TODO: Fix the size calculation and array handling
}

/**
 * @brief Function to pass a 1D array by pointer
 *
 * This function demonstrates passing a 1D array by pointer. Arrays decay to
 * pointers when passed to functions, so the size information is lost.
 *
 * @param tab A pointer to a 1D array of integers.
 */
void przekaz1Dwsk(int *tab) {
  cout << endl << "*** Przekaz1Dwsk ---------------------------" << endl;
  for (int i = 0; i < 6; i++) {
    cout << tab[i] << " ";
  }
  cout << endl;
  cout << "Zmienić tablice w funkcji. Wypisać poza funkcją." << endl;
  cout << "Czy wartości poza funkcją się zmieniły?" << endl;
}

/**
 * @brief Function to pass a 2D array
 *
 * This function demonstrates passing a 2D array to a function. The size of the
 * array must be explicitly specified in the function signature.
 *
 * @param tab A 2D array of integers with dimensions [3][3].
 */
void przekaz2D(int tab[3][3]) {
  cout << endl << "*** Przekaz2D ---------------------------" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "(" << i << "," << j << ")\t" << tab[i][j] << endl;
    }
  }
}

/**
 * @brief Function to pass a 1D array when the size is a part of type
 * */
void przekazTabSizeArray(const array<int, 6> &arr) {
  cout << endl << "*** PrzekazTabSizeArray ---------------------------" << endl;
  for (auto element : arr) {
    cout << element << " ";
  }
  cout << endl;
}

/**
 * @brief The modern way to handle arrays and maintain size information
 * */
/* void przekazTabSizeSpan(span<int> s) {
 *   cout << endl << "*** PrzekazTabSizeSpan ---------------------------" <<
 * endl; for (auto elem : s) { cout << elem << " ";
 *   }
 *   cout << endl;
 *   // TODO: add c++20 support to vim compilation. Meanwhile compile via
 * command
 *   // line: -std=c++20
 * } */

/**
 * @brief Function to pass a 2D array
 *
 * The function works with any type and size of array.
 * The size is "computed" at compile time, so it's efficient.
 * The array is not copied - we pass it by reference.
 */
template <typename T, int tabSize>
void przekazTabSizeA(const T (&tablica)[tabSize]) {
  cout << endl << "*** PrzekazTabSizeA ---------------------------" << endl;
  cout << "(inside function) Rozmiar tablicy: " << tabSize << endl;
  for (int i = 0; i < tabSize; ++i) {
    cout << tablica[i] << " ";
  }
  cout << endl;
}

/**
 * @brief Main function
 *
 * This is the entry point of the program. It demonstrates passing 1D and 2D
 * arrays to functions and highlights the challenges of preserving array size
 * information.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  int tablica1D[6] = {1, 2, 3, 4, 5, 6};
  int iSize =
      sizeof(&tablica1D) / sizeof(tablica1D[0]); // Incorrect size calculation
  cout << "Size of the array: " << iSize << endl;

  // Pass 1D array by value
  przekaz1D(tablica1D);

  // Attempt to pass 1D array with size preservation (incomplete)
  przekaz1DA(tablica1D);

  // Pass 1D array by pointer
  przekaz1Dwsk(tablica1D);

  // Create and fill a 2D array
  int tablica2D[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      tablica2D[i][j] = i + j;
    }
  }

  // Pass 2D array
  przekaz2D(tablica2D);

  array<int, 6> tablica1DB = {1, 2, 3, 4, 5, 6};
  // Use std::array (C++11 or later)
  przekazTabSizeArray(tablica1DB);

  /* // Use std:span (C++20 or later)
   * przekazTabSizeSpan(tablica1DB); */

  // The most classic method that preserves the size of the array
  przekazTabSizeA(tablica1D);

  return 0;
}
