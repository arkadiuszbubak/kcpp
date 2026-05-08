/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2021.04.21 v0.01, 2026.05.08 v0.02
 * \brief Dyrektywa 'ifdef' and 'define' w C++
 * v0.02
 */

#include <iostream>

// Defining a constant for Pi
#define PI 3.14159
#define MAX_BUFFER_SIZE 1024

#define ZMIENNA 13
#define ANNEIMZ

void defineDirective() {
  double radius = 5.0;
  double area = PI * (radius * radius);

  std::cout << "The area is: " << area << std::endl;
  std::cout << "Buffer limit: " << MAX_BUFFER_SIZE << std::endl;
}

int main() {

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

#if !defined(ANNEIMZ) && (ZMIENNA < 6 * 4 - 3)
  std::cout << "C: yes\n";
#endif

  defineDirective();
}
