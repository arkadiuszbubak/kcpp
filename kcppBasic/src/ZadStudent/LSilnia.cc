#include <iostream>
using namespace std;

int main() {
  int liczba;
  long long silnia = 1; // long long, aby uniknąć przepełnienia

  cout << "Podaj liczbe do obliczenia silni: ";
  cin >> liczba;

  for (int i = 1; i <= liczba; i++) {
    silnia *= i;
  }

  cout << "Silnia z " << liczba << " wynosi: " << silnia << endl;

  return 0;
}
