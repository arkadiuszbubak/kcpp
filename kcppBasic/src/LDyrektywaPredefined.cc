/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2021.04.21
 * \brief Characters w C++
 * v0.01
 * from: https://www.cplusplus.com/doc/tutorial/preprocessor/
 */

/* Standard	Wartość __cplusplus
C++11	201103L
C++14	201402L
C++17	201703L
C++20	202002L
C++23	202302L */

#include <iostream>

#if __cplusplus >= 202002L
#include <source_location> // Wymaga C++20
// #else
// #error "Ten projekt wymaga kompilacji ze standardem C++20 (-std=c++20)!"
#endif

using namespace std;

//------------------------------------------------------------------------------
// Wymaga C++20
// Komilacja: g++ std=c++20 LDyrektywaPredefined.cc
#if __cplusplus >= 202002L
void log_error(const char *msg, const std::source_location location =
                                    std::source_location::current()) {
  std::cerr << "[ERROR] " << msg << " w pliku: " << location.file_name()
            << ", linia: " << location.line() << std::endl;
}
// #else
// #error "Ten projekt wymaga kompilacji ze standardem C++20 (-std=c++20)!"
#endif

//------------------------------------------------------------------------------
// Używamy makra, aby __LINE__ zostało rozwinięte w miejscu wywołania
#define LOG_ERROR(msg)                                                         \
  std::cerr << "[ERROR] " << msg << " w pliku: " << __FILE__                   \
            << ", linia: " << __LINE__ << std::endl

//------------------------------------------------------------------------------
int main() {
  // Standardowe makra informacyjne
  cout << "This is the line number " << __LINE__ << " of file " << __FILE__
       << ".\n";
  cout << "Its compilation began " << __DATE__ << " at " << __TIME__ << ".\n";
  cout << "The compiler gives a __cplusplus value of " << __cplusplus;

  // Makra pomocnicze i diagnostyczne
  /* __func__ (lub __FUNCTION__ w MSVC):
   Przechowuje nazwę aktualnie wykonywanej funkcji. Technicznie w C++11 i
  nowszych jest to predefiniowany identyfikator lokalny, a nie makro
  preprocesora, ale działa analogicznie.

  __STDC_HOSTED__
  Przyjmuje wartość 1, jeśli implementacja jest "hostowana" (posiada pełną
  bibliotekę standardową i system operacyjny), lub 0 w przypadku systemów
  wbudowanych (tzw. freestanding). */

  // Makra zależne od kompilatora (Specyficzne)
  /* System operacyjny: _WIN32, _WIN64, __linux__, __APPLE__.
  Kompilator: __GNUC__ (GCC), __clang__ (Clang), _MSC_VER (Microsoft Visual
  C++). */

  if (__cplusplus >= 202002L) {
    std::cout << "Używasz nowoczesnego standardu C++20 lub nowszego!"
              << std::endl;
  }

  LOG_ERROR("Błąd");
  LOG_ERROR("Błąd");

#if __cplusplus >= 202002L
  log_error("Błąd w C++20"); // Magicznie wypisze poprawną linię!
// #else
// #error "Ten projekt wymaga kompilacji ze standardem C++20 (-std=c++20)!"
#endif

  return 0;
}
