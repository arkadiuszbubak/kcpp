#include <iostream>

int main() {
    const int size = 5;
    float arr1[size], arr2[size], arr3[size];
    float *ptr1 = arr1;
    float *ptr2 = arr2;
    float *ptr3 = arr3;
    
    // Wczytywanie danych do pierwszej tablicy
    std::cout << "Podaj " << size << " liczb dla pierwszej tablicy:\n";
    for(int i = 0; i < size; i++) {
        std::cin >> *(ptr1 + i);
    }
    
    // Wypełnianie drugiej tablicy (wartości * 2)
    for(int i = 0; i < size; i++) {
        *(ptr2 + i) = *(ptr1 + i) * 2;
    }
    
    // Obliczanie sumy do trzeciej tablicy
    for(int i = 0; i < size; i++) {
        *(ptr3 + i) = *(ptr1 + i) + *(ptr2 + i);
    }
    
    // Wyświetlanie wyników
    std::cout << "Tablica 1: ";
    for(int i = 0; i < size; i++) {
        std::cout << *(ptr1 + i) << " ";
    }
    std::cout << "\nTablica 2: ";
    for(int i = 0; i < size; i++) {
        std::cout << *(ptr2 + i) << " ";
    }
    std::cout << "\nTablica 3 (suma): ";
    for(int i = 0; i < size; i++) {
        std::cout << *(ptr3 + i) << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
