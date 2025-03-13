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

#include <iostream>
#include <iterator>
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
  for (int i = 0; i < 6; i++) {
    cout << i << ":\t" << tab[i] << endl;
  }
  cout << "Zmienić tablice w funkcji. Wypisać poza funkcją." << endl;
  cout << "Czy wartości poza funkcją się zmieniły?" << endl;
  cout << "-------------------" << endl;
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
  int iSize = sizeof(&tab) / sizeof(tab[0]); // Incorrect size calculation
  cout << "Size: " << iSize << endl;
  for (int i = 0; i <= iSize; i++) {
    cout << tab[i] << endl;
  }

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
  for (int i = 0; i < 6; i++) {
    cout << i << ":\t" << tab[i] << endl;
  }
  cout << "Zmienić tablice w funkcji. Wypisać poza funkcją." << endl;
  cout << "Czy wartości poza funkcją się zmieniły?" << endl;
  cout << "-------------------" << endl;
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
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "(" << i << "," << j << ")\t" << tab[i][j] << endl;
    }
  }
  cout << "-------------------" << endl;
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

  return 0;
}
