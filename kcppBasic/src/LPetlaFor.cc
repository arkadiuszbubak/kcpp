/**
 * \author: Arkadiusz Bubak <arkadiusz@bubak.pl>
 * \date: 2025.05.08
 * \brief: Petla for w C++
 * \version: v0.01
 */

#include <iostream>
using namespace std;

int main() {
  // 1. Liczenie od 1 do 5
  cout << "Liczenie do przodu:\n";
  for (int i = 1; i <= 5; i++) {
    cout << i << " ";
  }
  cout << "\n\n";

  // 2. Liczenie wstecz od 5 do 1
  cout << "Liczenie wstecz:\n";
  for (int i = 5; i >= 1; i--) {
    cout << i << " ";
  }
  cout << "\n\n";

  // 3. Iterowanie po tablicy
  cout << "Iteracja po tablicy:\n";
  int tablica[] = {10, 20, 30, 40, 50};
  int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
  for (int i = 0; i < rozmiar; i++) {
    cout << "tablica[" << i << "] = " << tablica[i] << "\n";
  }
  cout << "\n";

  // 4. Pętla z wieloma zmiennymi
  cout << "Pętla z dwoma zmiennymi (1):\n";
  for (int i = 0, j = 10; i < 5; i++, j -= 2) {
    cout << "i: " << i << ", j: " << j << "\n";
  }
  cout << "\n";

  cout << "Pętla z dwoma zmiennymi (2):\n";
  for (int i = 0, j = 10; i <= j; i++, j--) {
    cout << "i: " << i << ", j: " << j << endl;
  }
  cout << "\n";

  cout << "Pętla z dwoma zmiennymi (3) i różnymi operacjami na zmiennych:\n";
  for (int x = 1, y = 1; x < 10 && y < 20; x += 2, y *= 2) {
    cout << "x: " << x << ", y: " << y << endl;
  }
  cout << "\n";

  // 5. Pętla nieskończona z break
  cout << "Pętla nieskończona z break:\n";
  int licznik = 0;
  for (;;) {
    cout << "Licznik: " << licznik << "\n";
    if (++licznik == 3)
      break;
  }

  return 0;
}
