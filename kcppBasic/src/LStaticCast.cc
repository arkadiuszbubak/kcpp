/**
 * @file LStaticCast.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.02.21
 * @brief Demonstration of type conversion using `static_cast` in C++
 * @version v0.03 (2025.02.28)
 *
 * This program demonstrates the use of `static_cast` for type conversion in
 * C++. It compares C-style casting with C++-style `static_cast` and highlights
 * potential pitfalls and best practices.
 */

#include <iomanip>
#include <iostream>
using namespace std;

/**
 * @brief Main function
 *
 * This program demonstrates the use of `static_cast` for type conversion in
 * C++. It compares C-style casting with C++-style `static_cast` and highlights
 * potential pitfalls and best practices.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  int a = 3;
  int b = 9;
  float c;

  //-- C-style casting ----------------------------------------
  std::cout << endl << ">> C-like" << endl;
  c = a / b;
  cout << "-1: " << c << endl;     // Output: 0 (integer division)
  cout << " 0: " << a / b << endl; // Output: 0 (integer division)
  cout << " 1: " << (double)(a) / double(b)
       << endl; // Output: 0.333333 (proper casting)
  cout << " 2: " << (double)(a) / b
       << endl; // Output: 0.333333 (proper casting)
  cout << " 3: " << a / (double)(b)
       << endl; // Output: 0.333333 (proper casting)

  cout << " 4: " << (double)(a / b)
       << endl; // Output: 0 (incorrect casting, integer division first)
  cout << " 5: " << (double)a / b << endl; // Output: 0.333333 (proper casting)

  cout << " 6: " << double(a) / b << endl; // Output: 0.333333 (proper casting)
  cout << " 7: " << a / double(b) << endl; // Output: 0.333333 (proper casting)
  //----------------------------------------------------------

  //-- C++-style `static_cast` -------------------------------
  double c1 = static_cast<double>(a) / static_cast<double>(b); // Proper casting
  double c2 = static_cast<double>(a) / b;                      // Proper casting
  double c3 =
      static_cast<double>(a / b); // Incorrect casting (integer division first)
  // double c4 = static_cast<double> a / b;      // ERROR: Invalid syntax
  //----------------------------------------------------------

  std::cout << endl << ">> C++-like" << endl;
  std::cout << "c1: " << c1 << endl; // Output: 0.333333
  std::cout << std::fixed << std::setprecision(3) << "c1: " << c1
            << endl; // Output: 0.333
  std::cout << std::fixed << std::setprecision(6) << "c2: " << c2
            << endl; // Output: 0.333333
  std::cout << std::fixed << std::setprecision(9) << "c2: " << c2
            << endl; // Output: 0.333333333
  std::cout << std::fixed << std::setprecision(12) << "c3: " << c3
            << "\t << incorrect casting" << endl; // Output: 0.000000000000

  //----------------------------------------------------------
  cout << endl;

  //--------------------------------------------------------------------
  // Uncomment the following section to demonstrate additional examples
  /*
   *   int i1 = 6;
   *   cout << " i1.0: " << i1 << endl; // Output: 6
   *   std::cout << std::fixed << std::setprecision(3) << " i1.1: " << i1 <<
   * endl; // Output: 6.000 cout << endl;
   *
   *   double d1 = (double)i1; // C-style casting
   *   cout << " d1.1: " << d1 << endl; // Output: 6
   *   std::cout << std::fixed << std::setprecision(3) << " d1.2: " << d1 <<
   * endl; // Output: 6.000 cout << endl;
   *
   *   double d2 = static_cast<double>(i1); // C++-style casting
   *   cout << " d2.1: " << d2 << endl; // Output: 6
   *   std::cout << std::fixed << std::setprecision(3) << " d2.2: " << d1 <<
   * endl; // Output: 6.000 cout << endl;
   *
   *   double pi = 3.14159265;
   *   cout << " pi: " << pi << endl; // Output: 3.14159
   *   std::cout << std::fixed << std::setprecision(3) << " pi: " << pi << endl;
   * // Output: 3.142 cout << endl;
   *
   *   int p1 = static_cast<int>(pi); // C++-style casting (truncation)
   *   cout << " p1: " << p1 << endl; // Output: 3
   *   std::cout << std::fixed << std::setprecision(3) << " p1: " << p1 << endl;
   * // Output: 3.000
   *   */

  return 0;
}
