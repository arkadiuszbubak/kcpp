/**
 * @file LTabliceAutomatyczne.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2019.02.10, 2025.03.13 (v0.02)
 * @brief Demonstration of automatic arrays in C++
 * @version v0.02
 *
 * This program demonstrates the use of automatic (stack-allocated) arrays in
 * C++. It shows how to initialize, manipulate, and display arrays, including
 * handling array decay to pointers when passing arrays to functions.
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
using namespace std;

/**
 * @brief Function to demonstrate automatic arrays
 *
 * This function demonstrates the initialization, manipulation, and display of
 * automatic arrays in C++.
 */
void tablice();

/**
 * @brief Function to display the entire array
 *
 * This function prints all elements of an array using `std::copy` and
 * `std::ostream_iterator`. It also demonstrates the issue of array decay to
 * pointers when passing arrays to functions.
 *
 * @param array Pointer to the array.
 * @param size Size of the array.
 */
void CoutWholeArray(int *array, int size);

/**
 * @brief Main function
 *
 * This is the entry point of the program. It calls the `tablice` function to
 * demonstrate automatic arrays in C++.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  tablice();
  return 0;
}

/**
 * @brief Function to display the entire array
 *
 * This function prints all elements of an array using `std::copy` and
 * `std::ostream_iterator`. It also demonstrates the issue of array decay to
 * pointers when passing arrays to functions.
 *
 * @param array Pointer to the array.
 * @param size Size of the array.
 */
void CoutWholeArray(int *array, int size) {
  /* Display whole array in once
   * see: LCoutArray */
  // The following will not work because the array decays to a pointer when
  // passed to a function see: decay to pointer int size1 =
  // sizeof(array)/sizeof(array[0]); cout <<"Array size1: "<< size1 << " ->";
  cout << "Array size:  " << size << " ->";
  std::copy(array, array + size, std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
}

/**
 * @brief Function to demonstrate automatic arrays
 *
 * This function demonstrates the initialization, manipulation, and display of
 * automatic arrays in C++.
 */
void tablice() {
  const int i = 20, j = 10;

  int A[10] = {0}; ///< Array of 10 integers, initialized to 0
  /* for(int w = 0; w < 10; w++) {
   *   cout << "Tab A: " << A[w] << endl;
   * } */

  int A0[10]; ///< Array of 10 integers, uninitialized
  /* for(int w = 0; w < 10; w++) {
   *   cout << "Tab A0: " << A0[w] << endl;
   * } */

  // CoutWholeArray(A, 10);
  int A1[] = {1, 2, 3,
              4, 5, 6}; ///< Array of 6 integers, initialized with values
  // CoutWholeArray(A1, 6);

  int A2[6] = {0}; ///< Array of 6 integers, initialized to 0
  // int A2[6] = {6}; ///< Array of 6 integers, first element initialized to 6,
  // rest to 0 CoutWholeArray(A2, 6);

  int A3[6]{0, 0, 1,
            0, 0, 0}; ///< Array of 6 integers, initialized with specific values
  // CoutWholeArray(A3, 6);
  // int A4[6]{0}; ///< Array of 6 integers, initialized to 0
  // CoutWholeArray(A4, 6);
  int A4[6]{
      7}; ///< Array of 6 integers, first element initialized to 7, rest to 0
  // CoutWholeArray(A4, 6);

  // Array of 20 characters, partially initialized
  char B[i] = {'a', 'b', 'c', 'd', 'e', 'f'};
  /* for(int w = 0; w < i; w++) {
   *   cout << B[w] << "\t" << endl;
   * } */
  int BB[j] = {0, 1, 2, 3}; ///< Array of 10 integers, partially initialized

  // Array of 3 characters
  char B1[] = {'g', 'h', 'i'};
  char B2[4] =
      "abc"; ///< Array of 4 characters, initialized with a string literal
  /* for(int w = 0; w < 4; w++) {
   *   cout << B2[w] << "\t" << endl;
   * } */

  float C[i + j]; ///< Array of 30 floats, uninitialized
  int k = 0;

  A[j - 5] = 5;        ///< Initialize element 5 with value 5
  A[j - 1] = A[5] + 3; ///< Initialize element 9 with value A[5] + 3
  A[1] = A[0] + A[5];  ///< Initialize element 1 with value A[0] + A[5]
  A[A[9]] = 8;         ///< Initialize element A[9] with value 8
  *(A + 2) =
      17; ///< Initialize element 2 with value 17 using pointer arithmetic
  *(A + 3) = *(A + 2) + 1; ///< Initialize element 3 with value *(A + 2) + 1

  // Print array elements
  for (k = 0; k < 10; k++) {
    cout << "A[" << k << "]= " << *(A + k) << "\t\t" << A[k] << endl;
  }

  //---------------------------------------------------------------
  // Examples: try pre and post incrementation
  //---------------------------------------------------------------
  cout << "\nA[0] = " << A[0] << endl;
  (*A)++;
  // (*A++);     ///< error, prosze powiedziec dlaczego?
  int fVar = (*A)++;
  cout << "fVar =   " << fVar << endl;
  cout << "(*A)++ = " << (*A)++ << endl;
  cout << "A[0] = " << A[0] << endl;
  //--------------------------------------
}
