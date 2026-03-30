/**
 * @file LFunctionMethod.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2026.03.30 v0.01
 * @brief Difference between function and method
 * @version v0.01
 *
 * This program demonstrates the difference between a function and a method.
 * A function is a named sequence of statements that performs a specific task.
 * A method is a function that is associated with a class and is called using
 * the scope resolution operator `::`. A method can access the private and
 * protected members of the class, but not the public members.
 *
 * By declaring a function member as static, you make it independent of any
 * particular object of the class. A static member function can be called even
 * if no objects of the class exist, and the static functions are accessed using
 * only the class name and the scope resolution operator `::`. A static member
 * function can only access static data members, other static member functions,
 * and any other functions from outside the class. Static member functions have
 * a class scope and do not have access to the `this` pointer of the class.
 * You could use a static member function to determine whether some objects of
 * the class have been created or not.
 */

#include <iostream>
using namespace std;

/// Function example
int dodaj(int a, int b) { ///< funkcja globalna
  return a + b;
}

/// Method example
class Kalkulator {
public:
  int dodaj(int a, int b) { ///< metoda instancyjna
    return a + b;
  }
  static int pomnoz(int a, int b) { ///< metoda statyczna
    return a * b;
  }
};

int main() {

  /// Function example usage
  cout << "\nPrzykład użycia funkcji" << endl;
  cout << " > " << dodaj(3, 4) << endl; ///< wywołanie funkcji

  /// Method example usage
  cout << "Przykład użycia metody instancyjnej i statycznej" << endl;
  Kalkulator k;
  cout << " > " << k.dodaj(3, 4) << endl; ///< wywołanie metody na obiekcie
  cout << " > " << Kalkulator::pomnoz(3, 4)
       << endl; ///< wywołanie metody statycznej
}
