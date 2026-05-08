/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10 v0.01; 2023.04.27 v0.02; 2026.05.07 v0.03
 * \brief Strumienie w C++
 * v0.03
 */

#include <filesystem> //C++17
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
// namespace fs = std::filesystem;

int main() {

  // ----- Przykład zapisu do pliku ------------------
  string fileName = "log.txt";
  ofstream f(fileName, ios::app); // Otwieramy w trybie dopisywania (ios::app)

  if (!f.is_open()) {
    cerr << "Nie można otworzyć pliku" << fileName << endl;
    return 1; // Zwracamy kod błędu
  }

  string fullName;
  cout << "Wpisz swoje pełne imię i nazwisko (naciśnij Enter): \n";
  getline(cin >> ws, fullName); // Używamy getline do wczytania całej linii, >>
                                // ws usuwa białe znaki z początku

  cout << "Twoje imię to: " << fullName << endl;

  f << fullName << endl; // Dodajemy znak nowej linii po zapisie
  if (f.fail()) {
    cerr << "Błąd podczas zapisu do pliku " << fileName << endl;
  } else {
    cout << "Twoje imię zostało zapisane do pliku " << fileName << endl;
  }
  f.close();

  // ----- Przykład czytania z pliku ------------------
  ifstream plik(fileName);
  string linia;

  if (plik.is_open()) {
    while (getline(plik, linia)) { // Czytaj dopóki są linie
      cout << "Twoje imię zostało odczytane z pliku " << fileName << endl;
      cout << "Odczytana lina z pliku: " << linia << endl;
    }
    plik.close();
  } else {
    cerr << "Nie udało się otworzyć pliku " << fileName << endl;
  }

  // ----- Usuwanie pliku ----------------------------
  // C++17
  /* if (std::filesystem::remove(fileName)) {
    cout << "Plik " << fileName << " został pomyślnie usunięty." << endl;
  } else {
    cout << "Plik " << fileName << " nie istnieje lub nie mógł zostać usunięty."
         << endl;
  }

  // Przed C++17: std::remove returns 0 on success
  if (std::remove("log.txt") == 0) {
    cout << "Plik " << fileName << " został pomyślnie usunięty.\n";
  } else {
    // perror prints the specific reason for failure
    perror("Plik log.txt nie istnieje lub nie mógł zostać usunięty.");
  } */

  return 0;
}
