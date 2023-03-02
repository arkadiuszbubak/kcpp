# Zajęcia w formie kontaktowej

Zajęcia odbywają się w sposób kontaktowy


# Materiały pomocnicze do kursu C++

1. Download

   git clone https://github.com/arkadiuszbubak/kcpp

2. Zrozumiale napisana instrukcja korzystania z git

   https://git-scm.com/book/pl  (2nd Edition 2014)

3. Repozytorium składa się z kilku niezależnych części

	1. kcppBasic - postawowe pliki użyte do omawiania poszczególnych zagadnień kursu. Aktualne pliki mogą i z pewnością ulegną zmianie w trakcie semestru.
	2. kcppKviCar - przykład klasy w c++. Ten katalog i zagadnienia w nim będą wykorzystane w późniejszym terminie (i także mogą/ulegną zmianie), przy omawianiu klas w C++
		1. kviCarMake  - przykład klasy i jej użycia. Kompilowanie "z użyciem Makefile"
		2. kviCarCMake - przykład klasy i jej użycia. Kompilowanie "z użyciem cmake"

# Generowanie dokumentacji: Doxygen

  Generacja dokumentacji z użyciem doxygen. Uruchom z lini komend:
  
  doxygen Doxyfile

  Bazując na aktualnej konfiguracji (zmienna HTML_OUTPUT w pliku Doxyfile) dokumentacja zostanie wygenerowana w:
  
  ../kcpp.doxygen/html
  
  Katalog 'kcpp.doxygen', na ścieżce '../' trzeba utowrzyć ręcznie. Katalog 'html' tworzony jest automatycznie. Plik startowy do otworzenia w przegladarce: index.html
