/**
 * @file LCoutArray.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.03.09, 2025.03.13 (v0.02)
 * @brief Demonstration of printing an entire array in C++
 * @version v0.02
 *
 * This program demonstrates how to print the contents of an entire array in C++
 * using `std::copy` and `std::ostream_iterator`. It also shows two methods to
 * calculate the size of an array.
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>

/**
 * @brief Main function
 *
 * This is the entry point of the program. It demonstrates how to print the
 * contents of an array and calculate its size using two different methods.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  int iArray[] = {1, 2, 3, 4, 5, 6, 7}; // Initialize an array of integers

  // Calculate the size of the array using sizeof
  int iSize = sizeof(iArray) / sizeof(iArray[0]);
  // Alternative method to calculate the size of the array
  // int iSize = *(&iArray + 1) - iArray;

  // Print the size of the array
  std::cout << "Table size: " << iSize << std::endl;

  // Print the entire array using std::copy and std::ostream_iterator
  std::copy(iArray, iArray + iSize, std::ostream_iterator<int>(std::cout, " "));
  // Alternative method using std::begin and std::end
  // std::copy(std::begin(iArray), std::end(iArray),
  // std::ostream_iterator<int>(std::cout, " "));

  std::cout << std::endl;

  /* Explanation of the second method to calculate the size of the array:
   * &arr              ==> Pointer to an array of 6 elements.
   * (&arr + 1)        ==> Address of 6 integers ahead as pointer type is
   * pointer to array of X integers.
   * *(&arr + 1)       ==> Same address as (&arr + 1), but type of pointer is
   * "int *"
   * *(&arr + 1) - arr ==> Since *(&arr + 1) points to the address X integers
   * ahead of arr, the difference between two is X
   */

  return 0;
}
