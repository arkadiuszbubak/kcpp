/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2024.06.25
 * \brief Demonstracja manipulatorów setprecision, setfill i setw w C++
 * \details Program pokazuje formatowanie liczb i tekstu przy użyciu
 * manipulatorów strumieniowych v1.0 (2024.06.25)
 */

#include <cmath> // Stała M_PI
// #include <format> //C++20 lub nowszy
#include <iomanip> // Manipulatory strumieniowe
#include <iostream>
using namespace std;

void pokazFormatowanieLiczb() {
  const long double pi = M_PI;

  cout << "\n\nFORMATOWANIE LICZB (setprecision):\n";
  cout << "1. Domyślne wyświetlanie:\t" << pi << endl;

  cout << fixed;
  cout << "2. Notacja stałopozycyjna:\n";
  cout << "   Precision 5:\t\t" << setprecision(5) << pi << endl;
  cout << "   Precision 9:\t\t" << setprecision(9) << pi << endl;

  cout << scientific;
  cout << "3. Notacja naukowa:\n";
  cout << "   Precision 5:\t\t" << setprecision(5) << pi << endl;
  cout << "   Precision 9:\t\t" << setprecision(9) << pi << endl << endl;
}

void pokazFormatowanieTekstu() {
  cout << "\n\nFORMATOWANIE TEKSTU (setfill/setw):\n";

  cout << "1. Podstawowe użycie:\n";
  cout << "|" << setfill(' ') << setw(15) << "Hello" << "|" << endl;

  cout << "2. Różne znaki wypełnienia:\n";
  cout << "|" << setfill('*') << setw(15) << "C++" << "|" << endl;
  cout << "|" << setfill('.') << setw(15) << 123 << "|" << endl;

  cout << "3. Wyrównanie do lewej:\n";
  cout << left << "|" << setfill('-') << setw(15) << "Left" << "|" << endl
       << endl;
}

void pokazLaczoneFormatowanie() {
  cout << "\n\nFORMATOWANIE ŁĄCZONE:\n";

  cout << "|" << setfill(' ') << setw(10) << fixed << setprecision(2) << 3.14159
       << "|\n";
  cout << "|" << setfill('*') << setw(15) << scientific << setprecision(4)
       << 123.456 << "|\n";
  cout << "|" << left << setfill('_') << setw(20) << "Połączone" << "|\n";
}

void pokazLaczoneFormatowanie2() {
  cout << "\n\n";
  // Użycie setw(10) zamist /t/t
  // Rezerwacja 10 znaków dla pierwszej kolumny
  std::cout << std::left; // Wyrównanie do lewej (opcjonalnie)
  std::cout << std::setw(10) << "Id" << "Nazwa" << '\n';
  std::cout << std::setw(10) << "1" << "Klawiatura" << '\n';
  std::cout << std::setw(10) << "100" << "Myszka" << '\n';
}

void pokazLaczoneFormatowanie3() {
  cout << "\n\n";
  // Wyrównanie do lewej strony (domyślnie jest do prawej)
  std::cout << std::left;
  // Powrót do domyślnego wypełnienia
  std::cout << std::setfill(' ');

  // Nagłówki - przed każdym używamy setw(10)
  std::cout << std::setw(10) << "ID" << std::setw(10) << "Imie" << std::setw(10)
            << "Punkty" << '\n';

  // Prosta linia (3 kolumny po 10 znaków = 30 myślników)
  std::cout << "------------------------------\n";

  // Wiersze z danymi
  std::cout << std::setw(10) << 1 << std::setw(10) << "Anna" << std::setw(10)
            << 1450 << '\n';

  std::cout << std::setw(10) << 24 << std::setw(10) << "Tomasz" << std::setw(10)
            << 980 << '\n';

  std::cout << std::setw(10) << 312 << std::setw(10) << "Katarzyna"
            << std::setw(10) << 2105 << '\n';
}

// C++20 lub nowszy
/* void pokazLaczoneFormatowanieC20
  // {:<10} oznacza: "zarezerwuj 10 znaków i wyrównaj do lewej"
  std::cout << std::format("{:<10} {}\n", "Id", "Nazwa");
  std::cout << std::format("{:<10} {}\n", 1, "Klawiatura");
  std::cout << std::format("{:<10} {}\n", 100, "Myszka");
} */

int main() {
  cout << "DEMONSTRACJA MANIPULATORÓW STRUMIENIOWYCH\n";
  cout << "=========================================\n";

  pokazFormatowanieLiczb();
  pokazFormatowanieTekstu();
  pokazLaczoneFormatowanie();
  pokazLaczoneFormatowanie2();
  pokazLaczoneFormatowanie3();

  cout << "\nPodsumowanie precyzji:\n";
  cout << "float:\t\t6-7 cyfr znaczących\n";
  cout << "double:\t\t15-16 cyfr znaczących\n";
  cout << "long double:\t19-20 cyfr znaczących\n";

  return 0;
}
