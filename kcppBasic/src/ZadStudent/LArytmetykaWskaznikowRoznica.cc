#include <iostream>

int main() {
    int tablica[10] = {0};
    int* p1 = &tablica[2];
    int* p2 = &tablica[7];
    
    std::cout << "Różnica indeksów: " << p2 - p1 << std::endl;
    return 0;
}
