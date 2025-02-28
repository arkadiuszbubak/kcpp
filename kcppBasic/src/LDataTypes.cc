/**
 * @file LDataTypes.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.02.21
 * @brief Demonstration of data types in C++
 * @version v0.02 (2021.03.01), 0.03 (2025.02.28)
 */

#include <iostream>
using namespace std;

/**
 * @brief Main function
 *
 * This program demonstrates the behavior of different data types in C++,
 * including integer, floating-point, and character arrays (strings).
 * It also highlights common pitfalls and deprecated practices.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  // Integer variable demonstration
  int fVarA;
  // fVarA = 7; // Uncomment to assign an integer value
  fVarA = 7.3;  // Implicit conversion from double to int (value truncated to 7)

  cout << "fVarA: " << fVarA << endl;  // Output: 7 (truncated value)

  // Uncomment the following section to demonstrate floating-point behavior

  /* float fVarB;
   * fVarB = 7;   // Integer assigned to float (implicit conversion)
   * fVarB = 7.3; // Double assigned to float (implicit conversion)
   * cout << "fVarB: " << fVarB << endl; // Output: 7.3 */

  // Character array (string) demonstration
  char fVarC[10];  // Declaration of a character array with a length of 10
  char fVarD[] =
      "Tutaj jakis napis";  // Declaration with automatic length determination

  //--------------------------
  // Deprecated or problematic practices (commented out for reference)

  /* char *fVarE = "A tutaj inny napis"; // Deprecated: ISO C++ forbids
   * converting
   *                                     // a string constant to 'char*'
   * char fVarF = 'Inny'; // Warning: multi-character constant; only 'I' is
   * stored */

  //--------------------------
  // Uncomment the following section to demonstrate user input for character
  // arrays

  /* cout << "Set fVarC variable: ";
   * cin >> fVarC; // User input for fVarC
   * cout << "fVarC: " << fVarC << endl; */

  // Uncomment the following section to print character arrays
  /*
  cout << "fVarD: " << fVarD << endl;
  cout << "fVarE: " << fVarE << endl;
  cout << "fVarF: " << fVarF << endl;
  */

  return 0;
}
