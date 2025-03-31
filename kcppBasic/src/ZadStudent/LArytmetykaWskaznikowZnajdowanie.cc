#include <iostream>

int* maxElement(int* tab, int rozmiar) {
    int* max = tab;
    for (int i = 1; i < rozmiar; ++i) {
        if (*(tab + i) > *max) {
            max = tab + i;
        }
    }
    return max;
}

int main() {
    int tablica[] = {2, 8, 1, 10, 5};
    std::cout << "Największy element: " << *maxElement(tablica, 5) << std::endl;
    return 0;
}
