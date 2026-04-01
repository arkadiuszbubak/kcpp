/**
 * @file LCharCstringExample.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2025.04.01 (v0.01)
 * @brief Demonstracja zaawansowanych funkcji z biblioteki <cstring> w C++
 * @version v0.01
 *
 * Ten program prezentuje praktyczne zastosowania zaawansowanych funkcji
 * do operacji na C-stringach, takich jak wyszukiwanie, tokenizacja,
 * porównywanie z uwzględnieniem lokalizacji oraz manipulacja pamięcią.
 */

#include <cerrno>  ///< Wymagane dla strerror
#include <clocale> ///< Wymagane dla strcoll i strxfrm
#include <cstring> ///< Główne funkcje do obsługi C-stringów
#include <iostream>

using namespace std;

int main() {
  // Ustawienie domyślnych ustawień regionalnych systemu
  // Ważne dla funkcji strcoll() oraz strxfrm()
  setlocale(LC_ALL, "");

  cout << "=== Demonstracja funkcji <cstring> ===\n\n";

  // 1. strlen() - Zwraca długość łańcucha znaków (bez znaku '\0')
  const char *text1 = "Witaj swiecie!";
  cout << "[strlen]\n";
  cout << "Dlugosc napisu '" << text1 << "' to: " << strlen(text1)
       << " znakow.\n\n";

  // 2. strcoll() - Porównuje dwa łańcuchy zgodnie z ustawieniami regionalnymi
  // (locale)
  const char *word1 = "arbuz";
  const char *word2 = "banan";
  cout << "[strcoll]\n";
  cout << "Wynik porownania '" << word1 << "' i '" << word2
       << "': " << strcoll(word1, word2)
       << " ( <0 oznacza, ze arbuz jest przed bananem)\n\n";

  // 3. strxfrm() - Przekształca łańcuch z uwzględnieniem locale, aby można go
  // było szybko porównywać używając zwykłego strcmp()
  char transformed[50];
  strxfrm(transformed, "Zażółć gęślą jaźń", sizeof(transformed));
  cout << "[strxfrm]\n";
  cout << "Przeksztalcony napis do sortowania: " << transformed << "\n\n";

  // 4. strerror() - Zwraca wskaźnik do napisu opisującego kod błędu
  cout << "[strerror]\n";
  cout << "Opis bledu nr 2 (ENOENT): " << strerror(2) << "\n\n";

  // 5. memset() - Wypełnia blok pamięci określoną wartością (bajtem)
  char buffer[] = "To jest testowy bufor";
  memset(buffer, '*', 7); // Zamień pierwsze 7 znaków na gwiazdki
  cout << "[memset]\n";
  cout << "Po uzyciu memset: " << buffer << "\n\n";

  // 6. strtok() - Dzieli łańcuch na tokeny (kawałki) na podstawie ograniczników
  char sentence[] = "Jablka, banany; pomarancze. gruszki";
  const char *delimiters =
      ",; ."; // Ograniczniki: przecinek, średnik, spacja, kropka
  cout << "[strtok]\n";
  char *token = strtok(sentence, delimiters);
  while (token != nullptr) {
    cout << "Token: " << token << "\n";
    token = strtok(nullptr, delimiters); // Kolejne wywołania z nullptr
  }
  cout << "\n";

  // 7. strstr() - Szuka pierwszego wystąpienia podciągu w łańcuchu
  const char *haystack = "Wlazl kotek na plotek i mruga";
  const char *needle = "kotek";
  const char *found = strstr(haystack, needle);
  cout << "[strstr]\n";
  if (found) {
    cout << "Znaleziono '" << needle << "' poczawszy od: '" << found << "'\n\n";
  }

  // 8. strspn() - Zwraca długość początkowego segmentu łańcucha,
  // który składa się WYŁĄCZNIE ze znaków ze zbioru dopuszczalnych
  const char *id = "12345ABC";
  const char *digits = "0123456789";
  size_t length = strspn(id, digits);
  cout << "[strspn]\n";
  cout << "Poczatkowa liczba cyfr w '" << id << "' to: " << length << "\n\n";

  // 9. strcspn() - Zwraca długość początkowego segmentu łańcucha,
  // który NIE zawiera ŻADNEGO ze znaków ze zbioru (szuka pierwszego
  // niedozwolonego)
  const char *filename = "moj_plik.txt";
  const char *invalid_chars = ".";
  size_t basename_len = strcspn(filename, invalid_chars);
  cout << "[strcspn]\n";
  cout << "Dlugosc nazwy przed kropka to: " << basename_len << " znakow.\n\n";

  // 10. strrchr() - Szuka OSTATNIEGO wystąpienia danego znaku w łańcuchu
  const char *path = "/usr/local/bin/skrypt.sh";
  const char *last_slash = strrchr(path, '/');
  cout << "[strrchr]\n";
  if (last_slash) {
    cout << "Nazwa pliku z uzyciem strrchr: " << (last_slash + 1) << "\n\n";
  }

  // 11. strpbrk() - Znajduje pierwszy znak w łańcuchu,
  // który należy do podanego zbioru znaków
  const char *text2 = "C++ jest super!";
  const char *vowels = "aeiouy"; // szukamy pierwszej samogłoski
  const char *first_vowel = strpbrk(text2, vowels);
  cout << "[strpbrk]\n";
  if (first_vowel) {
    cout << "Pierwsza samogloska w '" << text2 << "' to: '" << *first_vowel
         << "' reszta napisu: '" << first_vowel << "'\n\n";
  }

  return 0;
}
