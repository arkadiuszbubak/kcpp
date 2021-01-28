# Zajęcia zdalne

Zajęcia aż do odwołania odbywać będą się z wykorzystaniem Google Meet Hangout.  Odnośnik do dołączenia do zajęć:

   podany później

Uwagi:

  1. Dostęp tylko przy użyciu kont w domenie smcebi.edu.pl.
  2. Materiały pomocnicze do kursu: (github)
  3. Proszę zajrzeć przed samymi zajęciami na githuba. Link do zajeć może ulec zmianie. Aktualny zostanie umieszczony w README.md


# Pomocnicze materiały do kursu C++

1. Download:

   git clone https://github.com/arkadiuszbubak/kcpp.git

2. Zrozumiale napisana instrukcja korzystania z git:

   https://git-scm.com/book/pl/v2

3. Repozytorium składa się z kilku niezależnych części:

	1. kcppBasic - postawowe pliki użyte do omawiania poszczególnych zagadnień kursu
	2. kcppKviCar - przykład klasy w c++. Ten katalog i zagadnienia w nim będą wykorzystane w późniejszym terminie, przy omawianiu klas w c++
		1. kviCarMake  - przykład klasy i jej użycia. Kompilowanie "z użyciem Makefile"
		2. kviCarCMake - przykład klasy i jej użycia. Kompilowanie "z użyciem cmake"

# Doxygen

  Generacja dokumentacji z uzyciem doxygen. Uruchom z lini komend:
  
  doxygen Doxyfile

  Bazujac na aktualnej konfiguracji w pliku Doxyfile dokumentacja zostanie wygenerowana w:
  
  ../kcpp.doxygen/html
  
  (zmienna OUTPUT)

  Plik startowy do otworzenia w przegladarce: index.html
