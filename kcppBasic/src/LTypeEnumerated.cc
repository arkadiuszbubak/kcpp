/**
 * @file LTypeEnumereted.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.02.21 v0.01, 2021.03.01 v0.02, 2025.02.28 v0.03
 * @brief Demonstration of enum types in C++
 * @version v0.03
 *
 * This program demonstrates the use of unscoped and scoped enumerations in C++.
 * It also shows how to define and use enums with explicit values.
 */

#include <iostream>
using namespace std;

/**
 * @brief Unscoped enumeration for car brands
 *
 * This enum represents various car brands with explicit and implicit values.
 * Enumerators without explicit values are assigned incrementing integer values
 * starting from 0.
 */
enum e_acompany {
  Audi,         /**< Audi, value = 0 */
  BMW,          /**< BMW, value = 1 */
  Cadillac,     /**< Cadillac, value = 2 */
  Ford,         /**< Ford, value = 3 */
  Jaguar,       /**< Jaguar, value = 4 */
  Lexus,        /**< Lexus, value = 5 */
  Maybach = 13, /**< Maybach, value = 13 */
  RollsRoyce,   /**< RollsRoyce, value = 14 */
  Saab          /**< Saab, value = 15 */
};

/**
 * @brief Scoped enumeration for data types
 *
 * This enum class represents data types and demonstrates the use of scoped
 * enumerations introduced in C++11. Scoped enumerations require the use of the
 * enumeration name to access the enumerators.
 */
enum class ScopedTypes {
  Int,    /**< Integer type */
  Double, /**< Double type */
  String  /**< String type */
};

/**
 * @brief Unscoped enumeration for data types
 *
 * This enum represents data types without scoping. Enumerators are in the same
 * scope as the enum itself.
 */
enum UnscopedTypes {
  Int,    /**< Integer type */
  Double, /**< Double type */
  String  /**< String type */
};

/**
 * @brief Main function
 *
 * This program demonstrates the use of unscoped and scoped enumerations in C++.
 * It prints the values of enumerators and shows how to use them in code.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {

  e_acompany my_car_brand = Ford;
  // my_car_brand = Ford;            //! Can be done in such way
  // enum e_acompany my_car_brand;   //! Can be done in such way
  // my_car_brand = BMW;

  if (my_car_brand == Ford) {
    cout << "Hello, Ford-car owner! Audi:       " << Audi << endl;
    cout << "Hello, Ford-car owner! BMW:        " << BMW << endl;
    cout << "Hello, Ford-car owner! Cadillac:   " << Cadillac << endl;
    cout << "Hello, Ford-car owner! Ford:       " << Ford << endl;
    cout << "Hello, Ford-car owner! Maybach:    " << Maybach << endl;
    cout << "Hello, Ford-car owner! RollsRoyce: " << RollsRoyce << endl;
    cout << "Hello, Ford-car owner! Saab:       " << Saab << endl;
  }

  // Example of unscoped enumeration
  e_acompany car = BMW;
  cout << "Value of BMW in e_acompany: " << car << endl; // Output: 1

  // Example of scoped enumeration
  ScopedTypes dataType = ScopedTypes::Double;
  // ScopedTypes b = Double; // Error: Requires qualification
  cout << "Value of Double in ScopedTypes: " << static_cast<int>(dataType)
       << endl; // Output: 1

  // Example of unscoped enumeration with implicit values
  UnscopedTypes type1 = Double;
  UnscopedTypes type2 = UnscopedTypes::Double;
  cout << "Value of Double in UnscopedTypes: " << type1 << endl; // Output: 1
  cout << "Value of Double in UnscopedTypes: " << type2 << endl; // Output: 1

  cout << UnscopedTypes::Int << endl;
  cout << UnscopedTypes::Double << endl;
  cout << UnscopedTypes::String << endl;
  cout << Int << endl;
  cout << Double << endl;
  cout << String << endl;

  return 0;
}
