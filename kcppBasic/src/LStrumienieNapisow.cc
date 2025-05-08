/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Strumienie w C++
 * v0.01
 */

#include <iostream>
#include <sstream>
#include <string>  // Jawnie dołączamy nagłówek <string>

using namespace std;

int main() {
  long x;           // Zmienna do przechowania liczby
  string napis;     // Zmienna do przechowania napisu
  stringstream ss;  // Strumień do napisów

  cout << "Podaj dowolną liczbę całkowitą: ";
  if (!(cin >> x)) {
    cerr << "Nieprawidłowe dane wejściowe. Oczekiwano liczby całkowitej."
         << endl;
    cin.clear();  // Czyścimy flagi błędów strumienia cin
    // cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorujemy błędne
    // dane z bufora
    return 1;  // Zwracamy kod błędu
  }

  ss << x;           // Do strumienia 'wysyłamy' podaną liczbę
  napis = ss.str();  // Zamieniamy zawartość strumienia na napis

  cout << "Długość napisu wynosi " << napis.size() << " znaków." << endl;

  return 0;
}
