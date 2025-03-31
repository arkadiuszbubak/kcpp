#include <iostream>

void przesun(int* tab, int rozmiar) {
    int ostatni = *(tab + rozmiar - 1);
    for (int i = rozmiar - 1; i > 0; --i) {
        *(tab + i) = *(tab + i - 1);
    }
    *tab = ostatni;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    przesun(tablica, 5);
    for (int i = 0; i < 5; ++i) {
        std::cout << tablica[i] << " ";
    }
    return 0;
}
