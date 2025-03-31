#include <iostream>

int suma(int* tab, int rozmiar) {
    int sum = 0;
    for (int i = 0; i < rozmiar; ++i) {
        sum += *(tab + i);
    }
    return sum;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    std::cout << "Suma: " << suma(tablica, 5) << std::endl;
    return 0;
}
