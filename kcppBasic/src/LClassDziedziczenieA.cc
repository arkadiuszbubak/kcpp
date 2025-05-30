/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Dziedziczenie w C++
 * v0.01
 */

#include <iostream>
using namespace std;

//----------------------------------------------------------------------
class Przodek {
public:
  // Przodek() : fN(56), fM(57.0) { cout << "Przodek: Konstruktor" << endl; }
  int FunFromPrzodek();
  int fN;
  float fM;
};

//----------------------------------------------------------------------
class Potomek : public Przodek {
public:
  Potomek() { cout << "Potomek: Konstruktor" << endl; }
  // int fN;
  // float fM;
};

int Przodek::FunFromPrzodek() { return fN; }

//----------------------------------------------------------------------
int main() {
  Przodek przObiekt;
  przObiekt.fN = 7;
  cout << endl;
  cout << "0. przObiekt.fN: " << przObiekt.fN << endl;

  //------------ 1 ------------------------
  Potomek potObiekt;
  // potObiekt.fN = 7;
  cout << "1. potObiekt.fN: " << potObiekt.fN << endl;

  //------------ 2 ------------------------
  cout << "2. przObiekt.fN: " << przObiekt.fN << endl;

  //------------ 3 ------------------------
  potObiekt.fM = 3;
  cout << endl << "3. potObiekt.fM: " << potObiekt.fM << endl;

  przObiekt.fM = 7;
  cout << "3. przObiekt.fM: " << przObiekt.fM << endl;
  cout << "3. potObiekt.fM: " << potObiekt.fM << endl;

  //------------ 4 ------------------------
  przObiekt.fN = 91;
  cout << "4. przObiekt.fN: " << przObiekt.fN << endl;

  potObiekt.fN = 92;
  cout << endl << "4. potObiekt.fN: " << potObiekt.fN << endl;

  //------------ 5 ------------------------
  cout << endl
       << "5. Value from object Przodek (FunFromPrzodek): "
       << przObiekt.FunFromPrzodek() << endl;

  cout << "5. Value from object Potomek (FunFromPrzodek): "
       << potObiekt.FunFromPrzodek() << endl;
  cout << endl;
}
