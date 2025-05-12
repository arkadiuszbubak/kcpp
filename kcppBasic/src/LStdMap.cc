/**
 * \author: Arkadiusz Bubak <arkadiusz@bubak.pl>
 * \date: 2025.05.08
 * \brief: std::map in C++
 * \version: v0.01
 */

#include <algorithm> // std::for_each
#include <iostream>
#include <map>
#include <string>

// Funkcja pomocnicza do wyświetlania mapy (range-based for)
void wyswietl(const std::map<std::string, int> &mapa, const std::string &opis) {
  std::cout << opis << ": " << std::endl;
  for (const auto &[klucz, wartosc] :
       mapa) { // structured bindings only available with -std=c++17
    std::cout << "  " << klucz << " => " << wartosc << std::endl;
  }
}

// Funkcja pokazująca różne sposoby iteracji po mapie
void iteracje(const std::map<std::string, int> &mapa, const std::string &opis) {
  std::cout << "\n" << opis << " - iteracje:" << std::endl;

  // 1. Range-based for
  std::cout << "Range-based for:" << std::endl;
  for (const auto &para : mapa) {
    std::cout << "  " << para.first << " => " << para.second << std::endl;
  }

  // 2. Iterator klasyczny
  std::cout << "Iterator klasyczny:" << std::endl;
  for (auto it = mapa.begin(); it != mapa.end(); ++it) {
    std::cout << "  " << it->first << " => " << it->second << std::endl;
  }

  // 3. Const iterator
  std::cout << "Const iterator:" << std::endl;
  for (std::map<std::string, int>::const_iterator it = mapa.cbegin();
       it != mapa.cend(); ++it) {
    std::cout << "  " << it->first << " => " << it->second << std::endl;
  }

  // 4. std::for_each z lambdą
  std::cout << "std::for_each:" << std::endl;
  std::for_each(mapa.begin(), mapa.end(), [](const auto &p) {
    std::cout << "  " << p.first << " => " << p.second << std::endl;
  });
}

int main() {
  // --- Różne sposoby tworzenia i wypełniania mapy ---

  // 1. Dodawanie za pomocą operatora []
  std::map<std::string, int> mapa1;
  mapa1["Ala"] = 25;
  mapa1["Bartek"] = 30;
  mapa1["Celina"] = 28;

  // 2. Inicjalizacja listą par
  std::map<std::string, int> mapa2 = {
      {"Adam", 20}, {"Beata", 22}, {"Cezary", 24}};

  // 3. Użycie insert
  std::map<std::string, int> mapa3;
  mapa3.insert({"Daniel", 18});
  mapa3.insert(std::make_pair("Ewa", 21));
  mapa3.insert(std::pair<std::string, int>("Filip", 23));

  // 4. Nadpisywanie i sprawdzanie kluczy
  mapa3["Filip"] = 99; // nadpisanie wartości
  if (mapa3.find("Ewa") != mapa3.end()) {
    std::cout << "\nEwa istnieje w mapa3 i ma wartość: " << mapa3["Ewa"]
              << std::endl;
  }

  // 5. Usuwanie elementu
  mapa3.erase("Daniel");

  // --- Wyświetlanie i iteracje ---

  wyswietl(mapa1, "mapa1 (operator [])");
  iteracje(mapa1, "mapa1");

  wyswietl(mapa2, "mapa2 (lista inicjalizacyjna)");
  iteracje(mapa2, "mapa2");

  wyswietl(mapa3, "mapa3 (insert, nadpisanie, erase)");
  iteracje(mapa3, "mapa3");

  return 0;
}
