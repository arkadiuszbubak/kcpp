/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Strumienie w C++
 * v0.01
 */

#include <iostream>
#include <sstream>
using namespace std;

int main () {
    long x;           // Zmienna do przechowania liczby
    string napis;     // Zmienna do przechowania napisu
    stringstream ss;  // Strumień do napisów

    cout << "Podaj dowolna liczbe calkowita: ";
    cin >> x;

    ss << x;   // Do strumienia 'wysyłamy' podaną liczbę
    napis = ss.str();   // Zamieniamy zawartość strumienia na napis

    cout << "Dlugosc napisu wynosi " << napis.size() << " znakow." << endl;


    return 0;
}
