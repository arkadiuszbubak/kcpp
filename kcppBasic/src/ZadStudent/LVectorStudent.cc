#include <algorithm> // do sortowania i wyszukiwania
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> listaStudentow;
  int wybor;

  cout << "=== Program do zarzadzania lista studentow ===" << endl;

  do {
    cout << "\nMenu:" << endl;
    cout << "1. Dodaj studenta" << endl;
    cout << "2. Usun studenta" << endl;
    cout << "3. Wyswietl liste" << endl;
    cout << "4. Sortuj liste (alfabetycznie)" << endl;
    cout << "5. Sprawdz, czy student istnieje" << endl;
    cout << "0. Wyjdz" << endl;
    cout << "Wybierz opcje: ";
    cin >> wybor;
    cin.ignore(); // aby uniknąć problemów z getline()

    switch (wybor) {
    case 1: { // Dodawanie studenta
      string imie;
      cout << "Podaj imie studenta: ";
      getline(cin, imie);
      listaStudentow.push_back(imie);
      cout << "Dodano studenta!" << endl;
      break;
    }
    case 2: { // Usuwanie studenta
      if (listaStudentow.empty()) {
        cout << "Lista jest pusta!" << endl;
        break;
      }
      string imie;
      cout << "Podaj imie studenta do usuniecia: ";
      getline(cin, imie);
      auto it = find(listaStudentow.begin(), listaStudentow.end(), imie);
      if (it != listaStudentow.end()) {
        listaStudentow.erase(it);
        cout << "Usunieto studenta!" << endl;
      } else {
        cout << "Nie znaleziono studenta!" << endl;
      }
      break;
    }
    case 3: { // Wyświetlanie listy
      if (listaStudentow.empty()) {
        cout << "Lista jest pusta!" << endl;
      } else {
        cout << "\nLista studentow:" << endl;
        for (const auto &student : listaStudentow) {
          cout << "- " << student << endl;
        }
      }
      break;
    }
    case 4: { // Sortowanie listy
      sort(listaStudentow.begin(), listaStudentow.end());
      cout << "Posortowano liste!" << endl;
      break;
    }
    case 5: { // Sprawdzanie obecności studenta
      string imie;
      cout << "Podaj imie studenta do sprawdzenia: ";
      getline(cin, imie);
      bool istnieje = find(listaStudentow.begin(), listaStudentow.end(),
                           imie) != listaStudentow.end();
      cout << (istnieje ? "Student jest na liscie!"
                        : "Nie ma takiego studenta!")
           << endl;
      break;
    }
    case 0: {
      cout << "Koniec programu." << endl;
      break;
    }
    default: {
      cout << "Nieprawidlowa opcja!" << endl;
    }
    }
  } while (wybor != 0);

  return 0;
}
