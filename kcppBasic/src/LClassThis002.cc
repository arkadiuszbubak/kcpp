/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: This w C++
 * v0.01
 * v0.02 (2021.05.06)
 * v0.03 (2026.04.09)
 */

#include <iostream>
using namespace std;

class Licznik {

public:
  //   Licznik() : fN(0) { };
  Licznik &Zwieksz() { // (1)
    ++fN;
    return *this;
  }
  Licznik &ZwiekszNew();

  Licznik &Ustaw(int n) { // (1) (3)
    // this->fN = n;
    fN = n;
    return *this;
  }
  int Pokaz() { return fN; }

private:
  int fN;
};

Licznik &Licznik::ZwiekszNew() {
  ++fN;
  return *this;
}

int main() {
  Licznik obiekt;
  int zmienna;
  // cin >> zmienna;
  zmienna = 7;

  cout << "Ustaw.Zwieksz.Pokaż:\t" << obiekt.Ustaw(zmienna).Zwieksz().Pokaz()
       << endl; // (2)
  /* cout << "Ustaw.ZwiekszNew.Pokaz:\t"
       << obiekt.Ustaw(zmienna).ZwiekszNew().Pokaz() << endl;        // (2)
  cout << "Ustaw.Pokaż:\t" << obiekt.Ustaw(zmienna).Pokaz() << endl; // (2)
  cout << "Pokaż:\t" << obiekt.Pokaz() << endl; */

  obiekt.Ustaw(4);
  obiekt.Zwieksz();
  cout << "Pokaż:\t" << obiekt.Pokaz() << endl;

  /* obiekt.Zwieksz();
  cout << "Pokaż:\t" << obiekt.Pokaz() << endl;

  obiekt.Ustaw(13);
  cout << "Pokaż:\t" << obiekt.Pokaz() << endl; */

  return 0;
}
