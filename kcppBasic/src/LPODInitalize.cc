/**
 * @file PODInitialize.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2021.03.01
 * @brief Demonstration of POD (Plain Old Data) initialization in C++
 * @version v0.02 (2025.02.28)
 */

#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Struct that does not default-initialize its members
 *
 * This struct demonstrates that primitive types (e.g., `int`) are not
 * default-initialized, while class types (e.g., `std::string`) are.
 */
struct does_not_default_initialize {
  int x;         /**< Does not default-initialize */
  std::string s; /**< Default-initializes (empty string) */
};

/**
 * @brief Struct that default-initializes its members
 *
 * This struct demonstrates how to explicitly initialize members using
 * a default constructor.
 */
struct default_initialize {
  int x;         /**< Will be initialized to 0 */
  std::string s; /**< Default-initializes (empty string) */

  /**
   * @brief Default constructor
   *
   * Initializes `x` to 0 explicitly.
   */
  default_initialize() : x{0} {}
};

/**
 * @brief Main function
 *
 * This program demonstrates the behavior of default initialization for
 * primitive types and structs in C++. It also shows how to explicitly
 * initialize members in a struct.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  int a; // Uninitialized variable

  // Using an uninitialized variable leads to undefined behavior
  a = a + 1; // Undefined behavior
  a++;       // Undefined behavior

  int b = 7;                  // Initialized variable
  cout << "a: " << a << endl; // Output may be garbage (undefined behavior)
  cout << "b: " << b << endl; // Output: 7

  // Example of struct with default initialization
  default_initialize DNDI;
  cout << "int x from struct: " << DNDI.x
       << endl; // Output: 0 (explicitly initialized)
  cout << "str s from struct: " << DNDI.s << endl; // Output: (empty string)

  // Uncomment the following to test the `does_not_default_initialize` struct
  // does_not_default_initialize DNDI2;
  // cout << "int x from struct (uninitialized): " << DNDI2.x << endl; //
  // Output: garbage cout << "str s from struct: " << DNDI2.s << endl; //
  // Output: (empty string)

  // Write your own program with a single int declaration and test its behavior
  return 0;
}
