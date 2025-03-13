/**
 * @file LChar.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2019.02.10, 2025.03.13 (v0.02)
 * @brief Demonstration of character arrays (C-style strings) in C++
 * @version v0.02
 *
 * This program demonstrates the use of C-style strings (character arrays) in
 * C++. It shows how to initialize, assign, and manipulate strings using
 * functions like `strcpy` and `strncpy`. It also highlights potential pitfalls,
 * such as buffer overflows, when working with C-style strings.
 */

#include <cstring> // For strcpy, strncpy
#include <iostream>
using namespace std;

/**
 * @brief Main function
 *
 * This is the entry point of the program. It demonstrates the use of C-style
 * strings, including initialization, assignment, and manipulation. It also
 * shows how to safely copy strings and avoid buffer overflows.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  // Initialize C-style strings
  char mystring1[] = {'H', 'e', 'l',
                      'l', 'o', '\0'}; // Manually null-terminated
  char mystring2[] = "Dzień dobry";    // Automatically null-terminated
  char mystring3[12];                  // Uninitialized character array

  // Print the strings
  cout << "mystring1.0:  " << mystring1 << endl;
  cout << "mystring2.0:  " << mystring2 << endl;
  cout << "mystring3.0:  " << mystring3
       << endl; // Uninitialized, may contain garbage

  /* // Not allowed
   * char mystringA = "Hello"; // Error: Cannot assign a string literal to a
   * single char char mystringC = { 'H', 'e', 'l', 'l', 'o', '\0' }; // Error:
   * Cannot initialize a single char with an array
   */

  // Assigning values to strings
  mystring3[0] = 'H';
  mystring3[1] = 'e';
  mystring3[2] = 'l';
  mystring3[3] = 'l';
  mystring3[4] = 'o';
  mystring3[5] = '\0'; // Null-terminate the string

  // Use strcpy to copy strings
  strcpy(mystring3, "Dzien dobry"); // Safe copy
  strcpy(mystring3,
         "Dzien dobry wszystkim"); // Unsafe: Potential buffer overflow

  // Print the modified string and individual characters
  cout << "mystring3.1: " << mystring3 << endl;
  cout << "mystring3.2 (11): " << mystring3[11] << endl;
  cout << "mystring3.3 (12): " << mystring3[12] << endl;
  cout << "mystring3.4 (16): " << mystring3[16] << endl;
  cout << "mystring3.5 (39): " << mystring3[39] << endl; // Out-of-bounds access

  // Partial copy using strncpy
  char str1[] = "To be or not to be";
  char str2[10]; // Small buffer
  char str3[40]; // Larger buffer

  // Copy to a sized buffer (overflow-safe)
  strncpy(str2, str1,
          sizeof(str2) - 1);     // Copy up to sizeof(str2) - 1 characters
  str2[sizeof(str2) - 1] = '\0'; // Ensure null-termination

  // Partial copy (only 5 characters)
  strncpy(str3, str2, 5); // Copy the first 5 characters
  str3[5] = '\0';         // Ensure null-termination

  // Print the results
  cout << "str1:\t" << str1 << "\n"
       << "str2:\t" << str2 << "\n"
       << "str3:\t" << str3 << endl;

  /*   // Prosze sprawdzic co robi sizeof
   *   int iTab[10];
   *   double dTab[10];
   *
   *   cout <<"iTab: "<< sizeof(iTab) << endl;
   *   cout <<"dTab: "<< sizeof(dTab) << endl; */

  /* From cstring
   * https://www.programiz.com/cpp-programming/library-function/cstring/strlen
   * strxfrm()
   * strcoll()
   * strlen()
   * strerror()
   * memset()
   * strtok()
   * strstr()
   * strspn()
   * strrchr()
   * strpbrk()
   * strcspn()
   */

  return 0;
}
