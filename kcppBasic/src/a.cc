/**
 * @file LTypeAuto.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.02.29
 * @brief Demonstration of the `auto` keyword in C++
 * @version v0.02 (2021.03.01), v0.03 (2025.02.28)
 */

#include <iostream>
#include <map>
#include <typeinfo>
using namespace std;

/**
 * @brief Main function
 *
 * This program demonstrates the use of the `auto` keyword in C++ for automatic
 * type deduction. It also shows the size and type of variables using `sizeof`
 * and `typeid`. Examples include initialization with literals, return values,
 * and pointers.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  // ---- sizeof, typeid -----
  auto var1 = 137; // `auto` deduces `int` type
  cout << "var1:    " << var1 << endl;
  cout << "Size of: " << sizeof(var1) << endl;
  cout << "Type:    " << typeid(var1).name() << endl;

  auto var2 = 137.1; // `auto` deduces `double` type
  cout << "var2:    " << var2 << endl;
  cout << "Size of: " << sizeof(var2) << endl;
  cout << "Type:    " << typeid(var2).name() << endl;
  cout << "--------------------------------------" << endl;

  // Uncomment the following section to demonstrate explicit types
  /*
  float var3 = 137.1; // Explicit `float` type
  cout << "var3:    " << var3 << endl;
  cout << "Size of: " << sizeof(var3) << endl;
  cout << "Type:    " << typeid(var3).name() << endl;

  double var4 = 137.1; // Explicit `double` type
  cout << "var4:    " << var4 << endl;
  cout << "Size of: " << sizeof(var4) << endl;
  cout << "Type:    " << typeid(var4).name() << endl;
  */

  //----------------------------------------------------------------------------
  // Uncomment the following section to demonstrate initialization with literals
  /*
  auto varA = 137.1;  // `auto` deduces `double` type (C++11)
  int varB = 137.1;   // Explicit `int` type (truncates to 137)

  cout << "--------------------------------------" << endl;
  cout << "varA:    " << varA << endl;
  cout << "Size of: " << sizeof(varA) << endl;
  cout << "Type:    " << typeid(varA).name() << endl;
  cout << "varB:    " << varB << endl;
  cout << "Size of: " << sizeof(varB) << endl;
  cout << "Type:    " << typeid(varB).name() << endl;
  */

  //----------------------------------------------------------------------------
  // Uncomment the following section to demonstrate initialization with return
  // values
  /*   map<char, float> mapa;
   *   mapa['a'] = 1.0;
   *
   *   auto itA = mapa.begin(); // `auto` deduces `std::map<char,
   * float>::iterator`
   *                            // type (C++11)
   *   std::map<char, float>::iterator itB =
   *       mapa.begin(); // Explicit iterator type (C++)
   *
   *   cout << "--------------------------------------" << endl;
   *   cout << "itA type: " << typeid(itA).name() << endl;
   *   cout << "itB type: " << typeid(itB).name() << endl;
   *  */

  //----------------------------------------------------------------------------
  // Uncomment the following section to demonstrate pointer initialization
  /*
   *   double varC = 3.14;
   *
   *   auto *wskA = new auto(varC);     // `auto` deduces `double*` type (C++11)
   *   double *wskB = new double(varC); // Explicit `double*` type (C++)
   *
   *   cout << "--------------------------------------" << endl;
   *   cout << "wskA value: " << *wskA << endl;
   *   cout << "wskB value: " << *wskB << endl;
   *
   *   // Clean up dynamically allocated memory
   *   delete wskA;
   *   delete wskB;
   *  */

  return 0;
}
