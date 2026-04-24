/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Bitowe operatory logiczne w C++
 * v0.02 2026.04.24
 */

#include <iostream>
using namespace std;

// Student task: Pokazać jak można uniknąć przekazywania rozmiaru po którym
// będzie pętla. Napisz nową funkcje: printBinaryGeneralo
// 1. sposób
// template <typename T>
// void printBinaryGeneral(const T& val) {...

// 2. sposób
/* #include <bitset>
#include <climits>

template <typename T>
void printBinaryModern(const T& val) {
    constexpr size_t totalBits = sizeof(T) * CHAR_BIT;
    std::cout << std::bitset<totalBits>(val);
} */

void printBinary(const unsigned char val, int range = 7) {
  for (int i = range; i >= 0; i--)
    if (val & (1 << i))
      //(1 << i) "wstawia 1 na kolejnych pozycjach"
      //(zmienna << ilosc_miejsc)
      cout << "1";
    else
      cout << "0";
}

#define PR(STR, EXPR)                                                          \
  cout << STR << "\t";                                                         \
  printBinary(EXPR);                                                           \
  cout << endl;

int main() {
  unsigned int getval;
  unsigned char a, b;

  cout << "Podaj liczbe 'a' od 0 do 255: ";
  if (getval > 255) {
    cout << "Błąd! Podana liczba jest za duża." << endl;
    return 1;
  }
  cin >> getval;
  a = static_cast<unsigned char>(getval);

  cout << "Podaj liczbe 'b' od 0 do 255: ";
  cin >> getval;
  b = static_cast<unsigned char>(getval);

  PR("a w binarnej notacji: ", a);
  PR("b w binarnej notacji: ", b);

  PR("a | b = ", a | b); // Bitowa alternatywa OR
  PR("a & b = ", a & b); // Bitowa koniunkcja AND
  PR("a ^ b = ", a ^ b); // Bitowa róźnica symetryczna XOR
  PR("~a = ", ~a);       // Bitowa negacja NOT
  PR("~b = ", ~b);

  /* https://bytetool.web.app/en/ascii/code/0x5a/
   * https://stackoverflow.com/questions/75191/what-is-an-unsigned-char */
  unsigned char c = 0x5A;
  // unsigned char c = 90;

  PR("c w binarnej notacji: ", c);
  a |= c;

  cout << "----------------------------------------" << endl;
  PR("a w binarnej notacji: ", a);
  PR("b w binarnej notacji: ", b);
  PR("a |= c; \ta = ", a);
  b &= c;
  PR("b &= c; \tb = ", b);
  b ^= a;
  PR("b ^= a; \tb = ", b);

  return 0;
}
