#include <iostream>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    
    // Obliczanie sumy
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        sum += *(ptr + i);
    }
    std::cout << "Suma: " << sum << std::endl;
    
    // Znajdowanie maksimum
    int max = *ptr;
    for(int i = 1; i < 10; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    std::cout << "Maksimum: " << max << std::endl;
    
    // Odwracanie tablicy
    int *start = arr;
    int *end = arr + 9;
    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    // Wyświetlanie odwróconej tablicy
    std::cout << "Tablica po odwroceniu: ";
    for(int i = 0; i < 10; i++) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
