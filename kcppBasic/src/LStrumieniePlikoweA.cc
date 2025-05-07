/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10 v0.01; 2023.04.27 v0.02
 * \brief Strumienie w C++
 * v0.02
 */

#include <iostream>
#include <fstream>
#include <string>
#include <limits> // Potrzebne dla std::numeric_limits

using namespace std;

int main() {
    ofstream f("log.txt", ios::app); // Otwieramy w trybie dopisywania (ios::app)

    if (!f.is_open()) {
        cerr << "Nie można otworzyć pliku log.txt!" << endl;
        return 1; // Zwracamy kod błędu
    }

    string fullName;

    cout << "Wpisz swoje pełne imię i nazwisko (naciśnij Enter): \n";
    getline(cin >> ws, fullName); // Używamy getline do wczytania całej linii, >> ws usuwa białe znaki z początku

    cout << "Twoje imię to: " << fullName << endl;

    f << fullName << endl; // Dodajemy znak nowej linii po zapisie
    if (f.fail()) {
        cerr << "Błąd podczas zapisu do pliku log.txt!" << endl;
    } else {
        cout << "Twoje imię zostało zapisane do pliku log.txt" << endl;
    }

    f.close();
    return 0;
}
