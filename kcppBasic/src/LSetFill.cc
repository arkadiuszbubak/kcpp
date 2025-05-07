/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Manipulatory: setfill w C++
 * \details Program demonstruje działanie manipulatorów setfill i setw
 * v0.02 (2024.06.20)
 */

#include <iostream>
#include <iomanip>  // Dołącz bibliotekę dla manipulatorów setfill i setw
using namespace std;

int main() {
    // Demonstracja podstawowego użycia setfill i setw
    cout << "1. Podstawowe użycie setfill:" << endl;
    cout << setfill(' ') << setw(10) << 77 << endl << endl;

    // Pokazanie efektu setfill z różnymi znakami wypełnienia
    cout << "2. Różne znaki wypełnienia:" << endl;
    cout << "a) Gwiazdki: " << setfill('*') << setw(10) << 77 << endl;
    cout << "b) Kropki:   " << setfill('.') << setw(10) << 77 << endl;
    cout << "c) Zerami:   " << setfill('0') << setw(10) << 77 << endl << endl;

    // Demonstracja wyrównania (domyślnie do prawej)
    cout << "3. Wyrównanie tekstu:" << endl;
    cout << setfill('-') << setw(20) << "Tekst" << endl << endl;

    // Pokazanie działania na różnych typach danych
    cout << "4. Różne typy danych:" << endl;
    cout << "a) Liczba:  " << setfill(' ') << setw(10) << 12345 << endl;
    cout << "b) Znak:    " << setfill('^') << setw(10) << 'A' << endl;
    cout << "c) String:  " << setfill('_') << setw(10) << "C++" << endl << endl;

    // Resetowanie ustawień
    cout << "5. Przywrócenie domyślnych ustawień:" << endl;
    cout << setfill(' ') << setw(0);
    cout << "Normalny tekst bez formatowania" << endl;

    return 0;
}
