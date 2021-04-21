/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2021.04.21
 * \brief Dyrektywa 'ifdef' w C++
 * v0.01
 */

#define ZMIENNA 13
#include <iostream>

int main()
{

#ifdef ZMIENNA
  std::cout << "A: yes\n";
#else
  std::cout << "A: no\n";
#endif

#ifndef ZMIENNA
  std::cout << "B: no\n";
#elif ZMIENNA == 13
  std::cout << "B: yes\n";
#else
  std::cout << "B: no\n";
#endif

#if !defined(ANNEIMZ) && (ZMIENNA < 6*4-3)
  std::cout << "C: yes\n";
#endif

}
