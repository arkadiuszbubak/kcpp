# Zajęcia zdalne

Zajęcia aż do odwołania odbywać będą się z wykorzystaniem Google Meet Hangout.  Odnośnik do dołączenia do zajęć:

   podany później

Uwagi:

  1. Dostęp tylko przy użyciu kont w domenie smcebi.edu.pl
  2. Materiały pomocnicze do kursu: (github)
  3. Proszę zajrzeć przed samymi zajęciami na githuba. Link do zajeć może ulec zmianie. Aktualny zostanie umieszczony w README.md


# Materiały pomocnicze do kursu C++

1. Download:

   git clone https://github.com/arkadiuszbubak/kcpp.git

2. Zrozumiale napisana instrukcja korzystania z git:

   https://git-scm.com/book/pl

3. Repozytorium składa się z kilku niezależnych części:

	1. kcppBasic - postawowe pliki użyte do omawiania poszczególnych zagadnień kursu. Aktualne pliki mogą i z pewnością ulegną zmianie w trakcie semestru.
	2. kcppKviCar - przykład klasy w c++. Ten katalog i zagadnienia w nim będą wykorzystane w późniejszym terminie (i także mogą/ulegną zmianie), przy omawianiu klas w C++
		1. kviCarMake  - przykład klasy i jej użycia. Kompilowanie "z użyciem Makefile"
		2. kviCarCMake - przykład klasy i jej użycia. Kompilowanie "z użyciem cmake"

# Generowanie dokumentacji: Doxygen

  Generacja dokumentacji z użyciem doxygen. Uruchom z lini komend:
  
  doxygen Doxyfile

  Bazując na aktualnej konfiguracji (zmienna OUTPUT w pliku Doxyfile) dokumentacja zostanie wygenerowana w:
  
  ../kcpp.doxygen/html
  
  Plik startowy do otworzenia w przegladarce: index.html
