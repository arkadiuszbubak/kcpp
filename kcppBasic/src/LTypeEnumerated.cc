/**
 * @file LTypeEnumereted.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.02.21 v0.01, 2021.03.01 v0.02, 2025.02.28 v0.03. 2026.03.27 v0.04
 * @brief Demonstration of enum types in C++
 * @version v0.04
 *
 * This program demonstrates the use of unscoped and scoped enumerations in C++.
 * It also shows how to define and use enums with explicit values.
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Unscoped enumeration for car brands
 *
 * This enum represents various car brands with explicit and implicit values.
 * Enumerators without explicit values are assigned incrementing integer values
 * starting from 0.
 */
enum e_acompany {
  Audi,           /**< Audi, value = 0 */
  BMW,            /**< BMW, value = 1 */
  Cadillac,       /**< Cadillac, value = 2 */
  Ford,           /**< Ford, value = 3 */
  Jaguar,         /**< Jaguar, value = 4 */
  Lexus,          /**< Lexus, value = 5 */
  Maybach = 13,   /**< Maybach, value = 13 */
  RollsRoyce = 3, /**< RollsRoyce, value = 14 */
  Saab            /**< Saab, value = 15 */
};

// ----------------------------------------------------------------------------
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

// ----------------------------------------------------------------------------
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

// ----------------------------------------------------------------------------
/* Przechowywanie znaków (char) – TAK
Modern C++ (enum class with explicite char type)
Zarówno tradycyjny enum, jak i nowoczesny enum class (wprowadzony w C++11)
muszą opierać się na tzw. typie całkowitoliczbowym (integral type).
Ponieważ char pod maską jest po prostu małą liczbą całkowitą (reprezentującą kod
ASCII), jest w pełni dozwolony. */
enum class LiteraScoped : char { A = '1', B = 'b', C = 'c' };
enum LiteraUnscoped : char { D = 'c', E, F };
enum LiteraUnscopedA { G, H, I };

// ----------------------------------------------------------------------------
/* Przechowywanie ciągów znaków (std::string) – NIE
Jeśli jest potrzeba aby powiązać wartość enum z tekstem (np. do wyświetlania
komunikatów (logów) w konsoli), standardowym i najlepszym rozwiązaniem jest
napisanie prostej funkcji konwertującej: */

enum class Status { Sukces, Blad, Oczekuje };

/// Funkcja pomocnicza tłumacząca enum na string
std::string statusToString(Status s) {
  switch (s) {
  case Status::Sukces:
    return "Sukces";
  case Status::Blad:
    return "Błąd";
  case Status::Oczekuje:
    return "Oczekuje";
  default:
    return "Nieznany";
  }
}
// ----------------------------------------------------------------------------
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
  // my_car_brand = Ford;            ///< Can be done in such way
  enum e_acompany my_car_brand_new; ///< Can be done in such way

  if (my_car_brand == Ford) {
    cout << "Hello, Ford-car owner! Audi:       " << Audi << endl;
    cout << "Hello, Ford-car owner! BMW:        " << BMW << endl;
    cout << "Hello, Ford-car owner! Cadillac:   " << Cadillac << endl;
    cout << "Hello, Ford-car owner! Ford:       " << Ford << endl;
    cout << "Hello, Ford-car owner! RollsRoyce: " << RollsRoyce << endl;
    cout << "Hello, Ford-car owner! Saab:       " << Saab << endl;
  }

  //--------------------------------------------------
  /// Example of unscoped enumeration
  e_acompany car = BMW;
  cout << "Value of BMW in e_acompany: " << car << endl; // Output:

  //--------------------------------------------------
  /// Example of scoped enumeration
  ScopedTypes dataType = ScopedTypes::Double;
  // ScopedTypes b = Double; ///< Error: Requires qualification
  cout << "Value of Double in ScopedTypes: with static_cast: "
       << static_cast<int>(dataType) << endl; // Output: 1
  // cout << "Value of Double in ScopedTypes: no static_cast:" << dataType <<
  // endl; // Error

  //--------------------------------------------------
  /// Example of unscoped enumeration with implicit values
  UnscopedTypes type1 = Double;
  UnscopedTypes type2 = UnscopedTypes::Double;                   ///< Also works
  cout << "Value of Double in UnscopedTypes: " << type1 << endl; // Output: 1
  cout << "Value of Double in UnscopedTypes: " << type2 << endl; // Output: 1

  cout << Int << endl;
  cout << Double << endl;
  cout << String << endl;
  /* cout << UnscopedTypes::Int << endl;    ///< Also works
  cout << UnscopedTypes::Double << endl; ///< Also works
  cout << UnscopedTypes::String << endl; ///< Also works */

  //--------------------------------------------------
  /// Example of enum chat enumeration
  LiteraUnscoped zmiennaUnscoped = D;
  cout << "zmiennaUnscoped: " << zmiennaUnscoped << endl;
  cout << "LiteraUnscoped: " << D << endl;                 ///< First way
  cout << "LiteraUnscoped: " << LiteraUnscoped::D << endl; ///< Second way

  LiteraScoped zmiennaScoped = LiteraScoped::A;
  cout << "zmiennaScoped: " << static_cast<char>(zmiennaScoped) << endl;
  // cout << "zmiennaScoped: " << zmiennaScoped << endl; ///< Error
  int zmiennaScopedInt = static_cast<int>(zmiennaScoped);

  // cout << "LiteraScoped: " << A << endl;
  // cout << "LiteraScoped: " << LiteraScoped::A << endl;
  cout << "LiteraScoped: " << static_cast<char>(LiteraScoped::A) << endl;

  //--------------------------------------------------
  Status obecnyStan = Status::Sukces;
  cout << statusToString(Status::Oczekuje) << endl; ///< First way
  cout << statusToString(obecnyStan) << endl;       ///< Second way

  return 0;
}
