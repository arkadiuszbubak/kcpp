/**
 * @file LArgumentyDomyslne.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2019.04.09
 * @brief Demonstration of default arguments in C++
 * @version v0.01
 *
 * This program demonstrates the use of default arguments in C++ functions. It
 * shows how to define functions with default arguments and how to overload
 * functions.
 */

#include <iostream>
using namespace std;

/**
 * @brief Function to increment a number by a specified value
 *
 * This function increments the value of `a` by `b`. If `b` is not provided, it
 * defaults to 1.
 *
 * @param a The base value.
 * @param b The increment value (default is 1).
 * @return int The result of `a + b`.
 */
int zwieksz(int a, int b = 1) { return a + b; }

/**
 * @brief Function to decrement a number by a specified value
 *
 * This function decrements the value of `a` by `b`. If `b` is not provided, it
 * defaults to 1.
 *
 * @param a The base value.
 * @param b The decrement value (default is 1).
 * @return int The result of `a - b`.
 */
int zmniejsz(int a, int b = 1);

/* //---------------------------------------------------------------
 * // Czy mozliwe jest przecizenie funkcji 'zwieksz'?
 * int zwieksz(int a){
 *   return a;
 * } */

/**
 * @brief Overloaded function to increment a number by a specified value
 *
 * This function increments the value of `a` by `b`.
 *
 * @param a The base value.
 * @param b The increment value.
 * @return int The result of `a + b`.
 */
int zwiekszNew(int a, int b) { return a + b; }

/**
 * @brief Overloaded function to return the base value
 *
 * This function returns the value of `a` without any modification.
 *
 * @param a The base value.
 * @return int The value of `a`.
 */
int zwiekszNew(int a) { return a; }
//---------------------------------------------------------------

/**
 * @brief Function with default arguments
 *
 * This function demonstrates the use of default arguments. The third argument
 * `c` defaults to 2.
 *
 * @param a The first argument.
 * @param b The second argument.
 * @param c The third argument (default is 2).
 * @return int Always returns 0.
 */
int zmienA(int, int, int = 2) { return 0; }

/**
 * @brief Function with default arguments
 *
 * This function demonstrates the use of default arguments. The third argument
 * `c` defaults to 2.
 *
 * @param a Pointer to an integer.
 * @param b The second argument.
 * @param c The third argument (default is 2).
 * @return int Always returns 0.
 */
int zmienB(int *, int, int = 2);
int zmienB(int *, int, int) { return 0; }

/**
 * @brief Function with default arguments
 *
 * This function demonstrates the use of default arguments. The second argument
 * `b` defaults to 1, and the third argument `c` defaults to 2.
 *
 * @param a The first argument.
 * @param b The second argument (default is 1).
 * @param c The third argument (default is 2).
 * @return int The result of `a + c`.
 */
int zmienC(int, int = 1, int = 2);
int zmienC(int a, int b, int c) {
  int w = a + b + c;
  return w;
}

int zmienE(int, int = 1, int = 2);
int zmienE(int a = 1, int b, int c) {
  int w = a + c + b;
  return w;
}

/**
 * @brief Function with default arguments
 *
 * This function demonstrates the use of default arguments. The third argument
 * `c` defaults to 2.
 *
 * @param a The first argument.
 * @param b The second argument.
 * @param c The third argument (default is 2).
 * @return int Always returns 0.
 */
int zmienD(int a, int b, int c = 2);
int zmienD(int, int, int) {
  // int w = a + b;
  return 0;
}

/**
 * @brief Main function
 *
 * This is the entry point of the program. It demonstrates the use of default
 * arguments and function overloading.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  // Demonstrate functions with default arguments
  zmienA(1, 2);

  int wsk = 9;
  int *wskaznik = &wsk;
  zmienB(wskaznik, 2);
  zmienB(wskaznik, 2, 3);

  zmienC(1);
  zmienC(1, 2);
  zmienC(1, 2, 3);

  // Demonstrate the `zwieksz` and `zmniejsz` functions
  int wynik;
  wynik = zwieksz(2, 5);
  cout << "Wywolanie zwieksz(2, 5): " << wynik << endl;

  wynik = zwieksz(2);
  cout << "Wywolanie zwieksz(2): " << wynik << endl;

  wynik = zmniejsz(5, 2);
  cout << "Wywolanie zmniejsz(5, 2): " << wynik << endl;

  wynik = zmniejsz(5);
  cout << "Wywolanie zmniejsz(5): " << wynik << endl;

  cout << zmienC(2) << endl;

  cout << "Czy możliwe jest przeciżenie funkcji 'zwieksz'?" << endl;

  wynik = zmienE();
  cout << "Wywolanie zmenE(): " << wynik << endl;
  wynik = zmienE(1);
  cout << "Wywolanie zmenE(): " << wynik << endl;
  wynik = zmienE(1, 2);
  cout << "Wywolanie zmenE(): " << wynik << endl;
  wynik = zmienE(1, 2, 3);
  cout << "Wywolanie zmenE(): " << wynik << endl;

  return 0;
}

/**
 * @brief Function to decrement a number by a specified value
 *
 * This function decrements the value of `a` by `b`. If `b` is not provided, it
 * defaults to 1.
 *
 * @param a The base value.
 * @param b The decrement value (default is 1).
 * @return int The result of `a - b`.
 */
int zmniejsz(int a, int b) { return a - b; }
