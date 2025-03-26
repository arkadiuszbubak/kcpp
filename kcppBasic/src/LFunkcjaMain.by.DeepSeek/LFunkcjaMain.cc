/**
 * @file LFunkcjaMain.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2019.02.10
 * @brief Demonstration of the `main` function in C++
 * @version v0.01
 *
 * This program demonstrates the use of the `main` function in C++ with
 * command-line arguments. It prints the number of arguments passed to the
 * program and lists each argument.
 */

#include <iostream>
using namespace std;

/**
 * @brief Main function
 *
 * This is the entry point of the program. It accepts command-line arguments and
 * prints the number of arguments along with their values.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of C-style strings containing the command-line
 * arguments.
 * @return int Returns 0 on successful execution.
 */
int main(int argc, char *argv[]) {
  // Print the number of command-line arguments
  cout << "Liczba argumentow: " << argc << endl;

  // Loop through and print each command-line argument
  for (int i = 1; i < argc; i++) {
    cout << argv[i] << endl;
  }

  return 0;
}
