/**
 * @file LString.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2019.02.10, 2020.02.29, 2025.03.13 (v0.03)
 * @brief Demonstration of string manipulation in C++
 * @version v0.03 ()
 *
 * This program demonstrates various string operations in C++, including
 * initialization, assignment, comparison, concatenation, and modification. It
 * also provides examples of lexicographical order and string manipulation
 * functions.
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Main function
 *
 * This is the entry point of the program. It demonstrates various string
 * operations, including initialization, assignment, comparison, concatenation,
 * and modification.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  /* Based on https://pl.wikibooks.org/wiki/C%2B%2B/String
   * Look also at: https://cplusplus.com/reference/string/string/ */

  // String initialization
  string napis1;
  napis1 = "text1";

  // Initialize a string at the time of creation
  string napis2("text2");

  // Use the assignment operator
  string napis3 = "text3";

  // Print the strings
  cout << "napis1: " << napis1 << endl
       << "napis2: " << napis2 << endl
       << "napis3: " << napis3 << endl;

  // Initialize a string with repeated characters
  string napis4(10, 'X');
  cout << "napis4: " << napis4 << endl;

  // String manipulation
  cout << endl << "Manipulacja stringami" << endl;
  cout << "----------------------------------------" << endl;
  string a1, b1;
  a1 = '1';
  b1 = '2';
  a1 = b1;
  cout << "a1 = b1: " << a1 << endl;

  // Check addresses
  cout << endl << "Sprawdzenie adresow" << endl;
  cout << "----------------------------------------" << endl;
  cout << "Address of a1: " << &a1 << endl;
  cout << "Address of b1: " << &b1 << endl;

  // String comparison
  string a, b, c;
  a = "gosia";
  b = "iza";
  c = "gosia";

  cout << endl << "Porownanie napisow" << endl;
  cout << "----------------------------------------" << endl;
  if (a == c)
    cout << "a i c sa takie same\n";
  if (a != b)
    cout << "a i b sa rozne\n";
  cout << "Address of a: " << &a << endl;
  cout << "Address of c: " << &c << endl;

  // Lexicographical order example
  cout << endl << "Przyklad porzadku leksykograficznego" << endl;
  cout << "----------------------------------------" << endl;
  a = "adad";
  b = "aeac";
  c = "gosia";

  cout << "napis a (" << a << ") poprzedza napis b (" << b << "): ";
  if (a < b)
    cout << "prawda\n";
  else
    cout << "nieprawda\n";

  // String concatenation
  a = "mal" + a;

  cout << "napis a (" << a << ") poprzedza napis b (" << b << "): ";
  if (a < b)
    cout << "prawda\n";
  else
    cout << "nieprawda\n";

  // String modification
  b[1] = '_';
  cout << "zmieniony wyraz b: " << b << '\n';

  /* Zadanie podczas zajec
   *   Napisz funkcje (osobny program) w ktorym zadeklarujesz string i uzyjesz
   * na nim funkcji manipulacyjnych:
   *   1. empty()     Zwraca wartosc true jezeli napis jest pusty.
   *   2. size(),length()     Zwraca ilosc znakow w napisie.
   *   3. at()     Zwraca znak o podanym polozeniu, tak jak operator [], z tym
   * ze ta metoda jest bezpieczniejsza - wyrzuca wyjatek w przypadku wyjscia
   * poza zakres stringa.
   *   4. clear()     Usuwa wszystkie znaki z napisu.
   *   5. erase(...)     Usuwa wybrane znaki.
   *   6. find(...)     Znajduje podciag w ciagu, sa tez bardziej rozbudowane
   * funkcje tego typu.
   *   7. swap(...)     Zamienia miejscami dwa stringi, a staje sie b, a b staje
   * sie a.
   *   8. substr(...)     Zwraca podciag na podstawie indeksu poczatkowego i
   * dlugosci podciagu.
   *   9. append(...) */

  return 0;
}
