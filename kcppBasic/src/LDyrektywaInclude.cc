/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Dyrektywa 'include' w C++
 * v0.01
 */

#include "LDyrektywaIncludeA.h"
#include <LDyrektywaIncludeB.h>
#include <iostream>
using namespace std;

int main() {
  WywolywanaFunkcjaA();
  WywolywanaFunkcjaB();

  return 0;
}
