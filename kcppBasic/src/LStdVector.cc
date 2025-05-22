/**
 * \author: Arkadiusz Bubak <arkadiusz@bubak.pl>
 * \date: 2025.05.08
 * \brief: std::vector in C++
 * \version: v0.01
 */

#include <algorithm> // Dla std::fill i std::remove
#include <iostream>
#include <vector>

int main() {
  // 1. Tworzenie wektorów

  // Pusty wektor liczb całkowitych
  std::vector<int> wektor1;
  std::cout << "Wektor 1 (pusty): ";
  for (int val : wektor1) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Wektor z predefiniowanym rozmiarem (elementy zainicjowane wartościami
  // domyślnymi, czyli 0 dla int)
  std::vector<int> wektor2(5);
  std::cout << "Wektor 2 (rozmiar 5, domyślne wartości): ";
  for (int val : wektor2) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Wektor z predefiniowanym rozmiarem i wartością początkową
  std::vector<int> wektor3(3, 10);
  std::cout << "Wektor 3 (rozmiar 3, wartość początkowa 10): ";
  for (int val : wektor3) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Wektor zainicjowany listą inicjalizacyjną
  std::vector<int> wektor4 = {1, 2, 3, 4, 5};
  std::cout << "Wektor 4 (inicjalizacja listą): ";
  for (int val : wektor4) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Kopia innego wektora
  std::vector<int> wektor5 = wektor4;
  std::cout << "Wektor 5 (kopia wektora 4): ";
  for (int val : wektor5) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // 2. Wypełnianie wektora

  // Dodawanie elementów na koniec wektora za pomocą push_back
  wektor1.push_back(10);
  wektor1.push_back(20);
  wektor1.push_back(30);
  std::cout << "Wektor 1 (po push_back): ";
  for (int val : wektor1) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Zmiana istniejących elementów za pomocą indeksów
  if (!wektor2.empty()) {
    wektor2[0] = 100;
    wektor2[2] = 200;
  }
  std::cout << "Wektor 2 (po zmianie elementów): ";
  for (int val : wektor2) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Wypełnianie całego wektora tą samą wartością
  std::fill(wektor3.begin(), wektor3.end(), 5);
  std::cout << "Wektor 3 (po fill): ";
  for (int val : wektor3) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // 3. Kasowanie elementów z wektora

  // Usunięcie ostatniego elementu
  if (!wektor4.empty()) {
    wektor4.pop_back();
    std::cout << "Wektor 4 (po pop_back): ";
    for (int val : wektor4) {
      std::cout << val << " ";
    }
    std::cout << std::endl;
  }

  // Usunięcie elementu z określonej pozycji (iterator)
  if (wektor5.size() > 2) {
    wektor5.erase(wektor5.begin() + 1); // Usuwa element na indeksie 1
    std::cout << "Wektor 5 (po erase): ";
    for (int val : wektor5) {
      std::cout << val << " ";
    }
    std::cout << std::endl;
  }

  // Usunięcie zakresu elementów (iteratory)
  std::vector<int> wektor6 = {1, 2, 3, 4, 5, 6, 7};
  wektor6.erase(wektor6.begin() + 2,
                wektor6.begin() + 5); // Usuwa elementy na indeksach 2, 3, 4
  std::cout << "Wektor 6 (po erase zakresu): ";
  for (int val : wektor6) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Usunięcie wszystkich elementów (wyczyszczenie wektora)
  wektor1.clear();
  std::cout << "Wektor 1 (po clear, rozmiar: " << wektor1.size() << "): ";
  for (int val : wektor1) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Usuwanie konkretnych wartości z wektora
  std::vector<int> wektor7 = {1, 2, 2, 3, 2, 4};
  // std::remove przenosi elementy do usunięcia na koniec wektora i zwraca
  // iterator do pierwszego z nich
  auto it = std::remove(wektor7.begin(), wektor7.end(), 2);
  // Następnie używamy erase, aby usunąć te elementy z końca
  wektor7.erase(it, wektor7.end());
  std::cout << "Wektor 7 (po usunięciu wartości 2): ";
  for (int val : wektor7) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // 4. Iterowanie po wektorze

  std::cout << "\nIterowanie po wektorze 4:\n";

  // Iteracja za pomocą indeksów (klasyczna pętla for)
  std::cout << "Za pomocą indeksów: ";
  for (size_t i = 0; i < wektor4.size(); ++i) {
    std::cout << wektor4[i] << " ";
  }
  std::cout << std::endl;

  // Iteracja za pomocą iteratorów
  std::cout << "Za pomocą iteratorów: ";
  for (std::vector<int>::iterator it = wektor4.begin(); it != wektor4.end();
       ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  // Iteracja za pomocą const_iterator (gdy nie chcemy modyfikować elementów)
  std::cout << "Za pomocą const_iterator: ";
  for (std::vector<int>::const_iterator cit = wektor4.cbegin();
       cit != wektor4.cend(); ++cit) {
    std::cout << *cit << " ";
  }
  std::cout << std::endl;

  // Iteracja za pomocą pętli for-each (zakresowej pętli for) - najprostszy
  // sposób
  std::cout << "Za pomocą pętli for-each: ";
  for (int val : wektor4) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  return 0;
}
