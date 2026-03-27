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
enum class Litera : char { A = '1', B = 'b', C = 'c' };
enum Litera1 : char { D = 'c', E, F };
// Użycie:
Litera znak = Litera::A;

// ----------------------------------------------------------------------------
/* Przechowywanie ciągów znaków (std::string) – NIE
Jeśli jest potrzeba aby powiązać wartość enum z tekstem (np. do wyświetlania
komunikatów (logów) w konsoli), standardowym i najlepszym rozwiązaniem jest
napisanie prostej funkcji konwertującej: */

enum class Status { Sukces, Blad, Oczekuje };

// Funkcja pomocnicza tłumacząca enum na string
#include <string>

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
// Proszę powiedzieć jak wywołać funkcję statusToString!

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
  // my_car_brand = Ford;            //! Can be done in such way
  /* enum e_acompany my_car_brand;   //! Can be done in such way
   * my_car_brand = BMW; */

  if (my_car_brand == Ford) {
    cout << "Hello, Ford-car owner! Audi:       " << Audi << endl;
    cout << "Hello, Ford-car owner! BMW:        " << BMW << endl;
    cout << "Hello, Ford-car owner! Cadillac:   " << Cadillac << endl;
    cout << "Hello, Ford-car owner! Ford:       " << Ford << endl;

    cout << "Hello, Ford-car owner! RollsRoyce: " << RollsRoyce << endl;
    cout << "Hello, Ford-car owner! Saab:       " << Saab << endl;
  }

  // Example of unscoped enumeration
  e_acompany car = BMW;
  cout << "Value of BMW in e_acompany: " << car << endl; // Output:

  //--------------------------------------------------
  Litera1 zmienna1 = D;
  cout << "zmienna1: " << zmienna1 << endl;

  Litera zmienna = Litera::A;
  cout << "Zmienna: " << static_cast<char>(zmienna) << endl;
  // cout << "Zmienna: " << zmienna << endl;
  int zmiennaInt = static_cast<int>(zmienna);
  //--------------------------------------------------

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
