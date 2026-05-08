/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10 v0.01, 2024.05.15 v0.02
 * \brief Operator warunkowy w C++
 * v0.02
 */

#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Podaj liczbe calkowita:" << endl;
  cin >> x;
  cout << "Podałeś: " << x << endl;

  // ---- Liczba parzysta, nieparzysta -------------
  cout << ((x & 1) ? "Liczba nieparzysta." : "Liczba parzysta.") << endl;

  if ((x & 1) ? 0 : 1) {
    cout << "Liczba parzysta -> w if" << endl;
  } else {
    cout << "Liczba nieparzysta -> w else" << endl;
  }

  // ---- Większe od zera, mniejsze od zera -------
  cout << ((x >= 0) ? "Liczba większa od zera." : "Liczba mniejsza od zera")
       << endl;
  if ((x >= 0) ? 1 : 0) {
    cout << "Liczba większa od zera -> w if" << endl;
  } else {
    cout << "Liczba mniejsza od zera -> w else" << endl;
  }

  // Będzie czy nie bedize spełnione w porównaniu do operatora warunkowego
  // gdzie: "warunek nie jest spełniony wtedy i tylko wtedy gdy wartość ta
  // wynosi 0"
  int zmiennaUjemna = -7;
  if (zmiennaUjemna) {
    cout << "To be or not to be" << endl;
  }

  return 0;
}
