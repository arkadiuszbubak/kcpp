/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Strumienie w C++
 * v0.01
 * Example from https://commons.wikimedia.org/wiki/File:XOR_texture.png
 */

#include <fstream>
#include <iostream> // Dla cerr

using namespace std;

int main() {
    ofstream file("xor.ppm");

    if (!file.is_open()) {
        cerr << "Nie można otworzyć pliku xor.ppm do zapisu!" << endl;
        return 1; // Zwracamy kod błędu
    }

    file << "P2 256 256 255\n";

    for (int i = 0; i < 256; ++i) {
        for (int j = 0; j < 256; ++j) {
            file << (i ^ j) << (j == 255 ? "" : " "); // Dodajemy spację, chyba że to ostatni piksel w rzędzie
        }
        file << '\n'; // Nowa linia po każdym rzędzie pikseli
    }

    if (file.fail()) {
        cerr << "Wystąpił błąd podczas zapisu do pliku xor.ppm!" << endl;
    } else {
        cout << "Obraz XOR został zapisany do pliku xor.ppm" << endl;
    }

    file.close();
    return 0;
}
