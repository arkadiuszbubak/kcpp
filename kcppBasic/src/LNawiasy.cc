/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2024.06.25
 * \brief Demonstracja zakresów zmiennych i użycia nawiasów w C++
 * \details Program pokazuje działanie zmiennych w różnych zakresach
 * v1.0 (2024.06.25)
 */

#include <iostream>
using namespace std;

void demonstrateScope() {
  // Zmienne w zakresie głównym funkcji
  int var1 = 1;
  int var2 = 2;
  int var3 = 0;

  cout << "\nWartości początkowe w zakresie głównym:" << endl;
  cout << "var1: " << var1 << ", var2: " << var2 << ", var3: " << var3 << endl;

  // Nowy zakres wewnętrzny
  {
    int var1 = -4; // Przesłonięcie zmiennej var1 z zakresu zewnętrznego
    var3 = 10;     // Modyfikacja zmiennej z zakresu zewnętrznego

    cout << "\nWartości w zakresie wewnętrznym:" << endl;
    cout << "var1 (lokalne): " << var1 << ", var3: " << var3 << endl;
  }

  cout << "\nWartości po wyjściu z zakresu wewnętrznego:" << endl;
  cout << "var1: " << var1 << ", var3: " << var3 << endl;
}

void demonstrateConditional() {
  int var1 = 5;

  cout << "\nDemonstracja instrukcji warunkowej:" << endl;
  if (var1 > 0) {
    cout << "Podaj nową wartość var1 (obecna: " << var1 << "): ";
    cin >> var1;

    if (!cin) {
      cerr << "Błąd: Nieprawidłowe dane wejściowe!" << endl;
      cin.clear();
      var1 = 0;
    }

    cout << "Nowa wartość var1: " << var1 << endl;
  } else {
    cout << "var1 nie jest większe od 0" << endl;
  }
}

int main() {
  cout << "=== Demonstracja zakresów zmiennych i nawiasów w C++ ===" << endl;

  demonstrateScope();
  demonstrateConditional();

  cout << "\n=== Koniec programu ===" << endl;
  return 0;
}
