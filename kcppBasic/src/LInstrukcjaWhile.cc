/**
 * \author: Arkadiusz Bubak <arkadiusz@bubak.pl>
 * \date: 2019.04.23
 * \brief: Instrukcja while w C++
 * \version: v0.01
 */

#include <iostream>
using namespace std;

int main() {
  int i = 5;
  cout << i << endl;

  // Prosta pętla while – zwiększa i do wartości 10
  while (i < 10)
    i++;
  cout << i << endl; // i = 10

  // Pętla while z inkrementacją przed sprawdzeniem warunku
  i = -2;
  while (i++) {
    cout << i << " ";
    if (i == 15)
      break; // Przerywa, gdy i = 15
  }
  cout << endl;

  // ---------- Kod, którego nie powinno się stosować ----------
  // Uwaga: użycie 'goto' jest złym stylem programowania
  while (true)
    goto etykieta1;

  cout << "Czy kiedykolwiek się pojawię?" << endl;

etykieta1:
  cout << endl;

  // Pętla while wyświetlająca liczby 15–20 z pominięciem 18
  while (i <= 20) {
    if (i == 18) {
      i++;
      continue; // Pomija 18
    }
    cout << i++ << " ";
  }

  cout << endl;

  cout << "\nPętla while z dwoma zmiennymi:" << endl;
  int k = 0, l = 5;
  while (k <= l) {
    cout << "k: " << k << ", l: " << l << endl;
    k++;
    l--;
  }
  cout << endl;

  return 0;
}
