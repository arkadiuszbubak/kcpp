/**
 * \file LSizeof.cc
 * \author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * \date 2019.02.10
 * \brief Program to display the sizes of various data types in C++
 * \version v0.02 (2025.02.28)
 */

#include <iostream>

using namespace std;

/**
 * \brief Main function
 *
 * This program displays the sizes (in bytes) of various data types in C++.
 * It also demonstrates the size of a local variable.
 *
 * \return int Returns 0 on successful execution.
 */
int main() {
  int mm; // Local variable to demonstrate size

  // Display the size of various data types
  cout << "Godzina prawdy. W tym komputerze "
       << "poszczegolne typy\n"
       << "maja nastepujace rozmiary w bajtach: \n";

  cout << "typ char        : \t" << sizeof(char) << " bajtów" << endl;
  cout << "typ int         : \t" << sizeof(int) << " bajtów" << endl;
  cout << "typ short       : \t" << sizeof(short) << " bajtów" << endl;
  cout << "typ long        : \t" << sizeof(long) << " bajtów" << endl;
  cout << "typ float       : \t" << sizeof(float) << " bajtów" << endl;
  cout << "typ double      : \t" << sizeof(double) << " bajtów" << endl;
  cout << "typ long double : \t" << sizeof(long double) << " bajtów" << endl;

  // Display the size of the local variable
  cout << "Nasz obiekt lokalny mm (tutaj int) ma rozmiar : " << sizeof(mm)
       << " bajtów" << endl;

  return 0;
}
