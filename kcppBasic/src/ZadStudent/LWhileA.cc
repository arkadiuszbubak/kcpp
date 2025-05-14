#include <iostream>
using namespace std;

int main() {
  int liczba, suma = 0;

  cout << "Wprowadzaj liczby (0 konczy program):" << endl;
  cin >> liczba;

  while (liczba != 0) {
    suma += liczba;
    cin >> liczba;
  }

  cout << "Suma wprowadzonych liczb: " << suma << endl;

  return 0;
}
