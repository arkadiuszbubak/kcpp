/**
 * @file LPrzekazywaniePrzezWartoscReferencjeWskaznik.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2019.02.10 (v0.01), 2023.03.29 (v0.02), 2025.03.13 (v0.03)
 * @brief Demonstration of passing arguments by value, reference, and pointer in
 * C++
 * @version v0.03
 *
 * This program demonstrates the differences between passing arguments to
 * functions by value, by reference, and by pointer in C++. It shows how each
 * method affects the original variables and the scope of changes.
 */

#include <iostream>
using namespace std;

/**
 * @brief Swap two integers by value
 *
 * This function swaps two integers by value. Changes made inside the function
 * do not affect the original variables.
 *
 * @param a First integer.
 * @param b Second integer.
 */
void swapA(int a, int b) {
  cout << "---> Przez wartosc:" << endl;
  int temp = a;
  a = b;
  b = temp;
  cout << "W:\tA = " << a << " B = " << b << endl;
}

/**
 * @brief Swap two integers by reference
 *
 * This function swaps two integers by reference. Changes made inside the
 * function directly affect the original variables.
 *
 * @param a Reference to the first integer.
 * @param b Reference to the second integer.
 */
void swapB(int &a, int &b) {
  cout << "---> Przez referencje:" << endl;
  int temp = a;
  a = b;
  b = temp;
  cout << "W:\tA = " << a << " B = " << b << endl;
}

/**
 * @brief Swap two integers by pointer
 *
 * This function swaps two integers by pointer. Changes made inside the function
 * directly affect the original variables.
 *
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */
void swapC(int *a, int *b) {
  cout << "---> Przez wskaznik:" << endl;
  int temp = *a;
  *a = *b;
  *b = temp;
  cout << "W:\tA = " << *a << " B = " << *b << endl;
}

/**
 * @brief Main function
 *
 * This is the entry point of the program. It demonstrates the differences
 * between passing arguments by value, by reference, and by pointer.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  int A = 4;
  int B = 6;

  //--- Pass by value (copy) --------------
  cout << "\nPrzed: A = " << A << " B = " << B << endl;
  swapA(A, B);
  cout << "Po:\tA = " << A << " B = " << B << endl;
  cout << "--------------------------------" << endl;

  //--- Pass by reference -------------------
  cout << "\nPrzed: A = " << A << " B = " << B << endl;
  swapB(A, B);
  cout << "Po:\tA = " << A << " B = " << B << endl;
  cout << "--------------------------------" << endl;

  //--- Pass by pointer ----------------------
  int *wskA = &A;
  int *wskB = &B;
  cout << "\nPrzed: A = " << A << " B = " << B << endl;
  swapC(wskA, wskB);
  cout << "Po:\tA = " << A << " B = " << B << endl;
  cout << "--------------------------------" << endl;

  cout << "\nPrzed: A = " << A << " B = " << B << endl;
  swapC(&A, &B);
  cout << "Po:\tA = " << A << " B = " << B << endl;
  cout << "--------------------------------" << endl;

  return 0;
}
