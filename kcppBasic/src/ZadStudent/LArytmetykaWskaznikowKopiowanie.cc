#include <iostream>

void kopiujTablice(int* src, int* dest, int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        *(dest + i) = *(src + i);
    }
}

int main() {
    int tablica1[] = {1, 2, 3, 4, 5};
    int tablica2[5];

    kopiujTablice(tablica1, tablica2, 5);

    for (int i = 0; i < 5; ++i) {
        std::cout << tablica2[i] << " ";
    }
    return 0;
}
