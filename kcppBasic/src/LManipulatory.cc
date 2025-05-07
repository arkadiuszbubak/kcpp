/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2024.06.25
 * \brief Demonstracja manipulatorów setprecision, setfill i setw w C++
 * \details Program pokazuje formatowanie liczb i tekstu przy użyciu manipulatorów strumieniowych
 * v1.0 (2024.06.25)
 */

#include <iostream>
#include <iomanip>  // Manipulatory strumieniowe
#include <cmath>    // Stała M_PI
using namespace std;

void pokazFormatowanieLiczb() {
    const long double pi = M_PI;
    
    cout << "\nFORMATOWANIE LICZB (setprecision):\n";
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
    cout << "\nFORMATOWANIE TEKSTU (setfill/setw):\n";
    
    cout << "1. Podstawowe użycie:\n";
    cout << "|" << setfill(' ') << setw(15) << "Hello" << "|" << endl;
    
    cout << "2. Różne znaki wypełnienia:\n";
    cout << "|" << setfill('*') << setw(15) << "C++" << "|" << endl;
    cout << "|" << setfill('.') << setw(15) << 123 << "|" << endl;
    
    cout << "3. Wyrównanie do lewej:\n";
    cout << left << "|" << setfill('-') << setw(15) << "Left" << "|" << endl << endl;
}

void pokazLaczoneFormatowanie() {
    cout << "\nFORMATOWANIE ŁĄCZONE:\n";
    
    cout << "|" << setfill(' ') << setw(10) << fixed << setprecision(2) << 3.14159 << "|\n";
    cout << "|" << setfill('*') << setw(15) << scientific << setprecision(4) << 123.456 << "|\n";
    cout << "|" << left << setfill('_') << setw(20) << "Połączone" << "|\n";
}

int main() {
    cout << "DEMONSTRACJA MANIPULATORÓW STRUMIENIOWYCH\n";
    cout << "=========================================\n";
    
    pokazFormatowanieLiczb();
    pokazFormatowanieTekstu();
    pokazLaczoneFormatowanie();
    
    cout << "\nPodsumowanie precyzji:\n";
    cout << "float:\t\t6-7 cyfr znaczących\n";
    cout << "double:\t\t15-16 cyfr znaczących\n";
    cout << "long double:\t19-20 cyfr znaczących\n";
    
    return 0;
}
