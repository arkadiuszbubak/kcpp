/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Instrukcja if w C++
 * v0.01, v0.02 (2025.05.08)
 */

#include <iostream>
#include <string>
#include <type_traits>
#include <vector>

// Funkcja szablonowa z użyciem if constexpr – działa na etapie kompilacji
// (C++17+)
/* template <typename T> void wypiszTyp() {
 *   if constexpr (std::is_integral<T>::value) {
 *     std::cout << "Typ całkowity" << std::endl;
 *   } else {
 *     std::cout << "Inny typ" << std::endl;
 *   }
 * } */

int main() {
  // Tworzymy wektor liczb całkowitych
  std::vector<int> liczby = {1, 4, 7, 10, 13};

  // 1. Podstawowy if
  int a = 10;
  if (a > 5) {
    std::cout << "a jest większe niż 5" << std::endl;
  }

  // 2. if-else – wybór jednej z dwóch ścieżek
  int b = 3;
  if (b > 5) {
    std::cout << "b jest większe niż 5" << std::endl;
  } else {
    std::cout << "b jest mniejsze lub równe 5" << std::endl;
  }

  // 3. if - else if - else – wiele warunków
  int c = 5;
  if (c < 5) {
    std::cout << "c jest mniejsze niż 5" << std::endl;
  } else if (c == 5) {
    std::cout << "c jest równe 5" << std::endl;
  } else {
    std::cout << "c jest większe niż 5" << std::endl;
  }

  // 4. if bez nawiasów klamrowych – tylko jedna linia zostanie wykonana
  if (a > 0)
    std::cout << "a jest dodatnie" << std::endl;

  // 5. Zagnieżdżony if – warunek wewnątrz innego warunku
  if (a > 0) {
    if (a < 100) {
      std::cout << "a jest większe niż 0 i mniejsze niż 100" << std::endl;
    }
  }

  // 6. Operator trójargumentowy (ternary), operator warunkowy – krótka forma
  // if-else.
  std::string wynik = (a > 5) ? "Większe" : "Mniejsze lub równe";
  std::cout << "a: " << wynik << std::endl;

  // 7. if constexpr – działa na etapie kompilacji
  /* wypiszTyp<int>();    // Wypisze: Typ całkowity
   * wypiszTyp<double>(); // Wypisze: Inny typ */

  // 8. Pętla for-each z if – iterujemy po elementach wektora
  for (int liczba : liczby) {
    if (liczba > 5) {
      std::cout << liczba << " jest większe niż 5" << std::endl;
    }
  }

  // 9. Pętla for z indeksem – klasyczne iterowanie z dostępem do indeksu
  for (size_t i = 0; i < liczby.size(); ++i) {
    if (liczby[i] % 2 == 0) {
      std::cout << liczby[i] << " jest parzyste" << std::endl;
    }
  }

  // 10. Pętla while z if – mniej popularna, ale przydatna w niektórych
  // sytuacjach
  size_t i = 0;
  while (i < liczby.size()) {
    if (liczby[i] < 10) {
      std::cout << liczby[i] << " jest mniejsze niż 10" << std::endl;
    }
    ++i;
  }

  // 11. Pętla z użyciem iteratorów – typowe w kodzie STL
  for (auto it = liczby.begin(); it != liczby.end(); ++it) {
    if (*it % 2 != 0) {
      std::cout << *it << " jest nieparzyste" << std::endl;
    }
  }

  // 12. if z warunkiem złożonym – sprawdzanie kilku warunków naraz
  for (int x : liczby) {
    if (x > 5 && x < 12) {
      std::cout << x << " mieści się w zakresie (5, 12)" << std::endl;
    }
  }

  // 12. Operacja bitowa
  int bit;
  std::cout << "Podaj liczba calkowita: ";
  std::cin >> bit;

  if (bit & 1)
    std::cout << "Liczba nieparzysta." << std::endl;
  else
    std::cout << "Liczba parzysta." << std::endl;

  return 0;
}
