/**
 * @file LFunkcjaMainEnvp.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.03.06
 * @brief Demonstration of the `main` function in C++ with environment variables
 * @version v0.01
 *
 * This program demonstrates the use of the `main` function in C++ with
 * command-line arguments and environment variables. It prints the number of
 * arguments passed to the program, lists each argument, and optionally prints
 * the environment variables.
 */

#include <iostream>
using namespace std;

#include <stdio.h>

/**
 * @brief Main function
 *
 * This is the entry point of the program. It accepts command-line arguments and
 * environment variables. It prints the number of arguments and their values.
 * Optionally, it can also print the environment variables.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of C-style strings containing the command-line
 * arguments.
 * @param envp An array of C-style strings containing the environment variables.
 * @return int Returns 0 on successful execution.
 */
int main(int argc, char *argv[], char *envp[]) {
  // Print the number of command-line arguments
  cout << "Number of arguments: " << argc << endl;

  // Loop through and print each command-line argument
  for (int i = 1; i < argc; i++) {
    cout << argv[i] << endl;
  }

  // Uncomment the following block to print environment variables
  /*
  while (*envp) {
    printf("%s\n", *envp++);
  }
  */

  return 0;
}
