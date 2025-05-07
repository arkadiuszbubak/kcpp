/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.03 v0.01, 2023.05.10 v0.02
 * \brief Strumienie w C++
 * v0.02
 */

#include <iostream>
#include <string>
using namespace std;

// Pokazanie strumienia błedow: a.out 2>&1 | tee -a plikWynikowy.txt
// Pokazanie strumienia błedow: a.out >plikWynikowy.txt 2>&1
// Pokazanie strumienia błędów: a.out 2> plikWynikowy.err

void InputZeSpacjami() {
  cout << "--------------------" << endl;
  cout << "Input ze spacjami (zły)" << endl;
  cout << "Podaj tekst: ";
  string tekst;
  // cin >> tekst;  ///< ok
  getline(cin, tekst);  ///< problem
  cout << tekst << endl;
}

void InputZeSpacjamiPoprawny() {
  // Jeśli przed użyciem funkcji "getline" użyjemy obiektu "cin", ten ostatni
  // pozostawia zwykle znak końca wiersza '\n' w buforze klawiatury. Funkcja
  // "getline" napotykając ten znak natychmiast kończy działanie, więc żeby
  // uniknąć błędnego działania programu, należy wywołać funkcję cin.ignore().

  cout << "--------------------" << endl;
  cout << "Input ze spacjami (poprawny)" << endl;
  cout << "Podaj liczbę: ";
  int liczba;
  cin >> liczba;

  cout << "Podaj tekst: ";
  string tekst;
  cin.ignore();  // to wywołanie usunie z bufora znak '\n' pozostawiony przez
                 // obiekt "cin"
  getline(cin, tekst);
  // std::getline(std::cin, tekst);

  cout << tekst << endl;
  cout << liczba << ' ' << tekst << endl;
}

int main() {
  cout << "Test standardowego strumienia" << endl;
  cerr << "Test strumienia bledow" << endl;

  int A, B, C;

  cout << "Podaj wartosc: ";
  cin >> A;
  cout << "Wpisales: " << A << endl;

  cout << "Podaj dwie wartosci: ";
  cin >> B >> C;
  cout << "Wpisales: " << B << "\t" << C << endl;
  cout << "Wpisales: " << B << "\t" << A << endl;

  InputZeSpacjami();
  // InputZeSpacjamiPoprawny();

  return 0;
}
