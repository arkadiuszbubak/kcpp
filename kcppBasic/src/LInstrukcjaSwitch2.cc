/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2025.05.14
 * \brief Instrukcja switch w C++
 * v0.01
 */

#include <iostream>
using namespace std;

int main() {
  int choice;

  do {
    cout << "\n==== MENU ====\n";
    cout << "1. Opcja 1\n";
    cout << "2. Opcja 2\n";
    cout << "3. Opcja 3\n";
    cout << "4. Opcja 4\n";
    cout << "5. Wyjscie\n";
    cout << "Wybierz opcje: ";
    cin >> choice;

    switch (choice) {
    case 1:
      // kod dla opcji 1
      break;
    case 2:
      // kod dla opcji 2
      break;
    // ... inne przypadki
    default:
      cout << "Nieprawidlowy wybor!\n";
    }
  } while (choice != 5);

  return 0;
}
