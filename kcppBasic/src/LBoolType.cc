/**
 * \file LBoolType.cc
 * \author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * \date 2025.03.05
 * \brief Program to show example of Bool type in C++
 * \version v0.01 (2025.03.05)
 */

#include <iostream>
using namespace std;

int main() {
  bool isCodingFun = true;
  bool isSkyGreen = false;

  cout << "Is coding fun? " << isCodingFun << endl;
  cout << "Is the sky green? " << isSkyGreen << endl;

  // Boolean values in C++ are internally represented as integers (0 for false,
  // 1 for true)
  cout << "True is represented as: " << true << endl;
  cout << "False is represented as: " << false << endl;

  // Using boolean in conditional statements
  if (isCodingFun) {
    cout << "Yes, coding is fun!" << endl;
  } else {
    cout << "No, coding is not fun." << endl;
  }

  return 0;
}
