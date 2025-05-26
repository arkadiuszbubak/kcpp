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
  int FunFromPrzodek(int zm);

  int fN;
  float fM;
};

//----------------------------------------------------------------------
class Potomek : public Przodek {
public:
  int fN;
  // float fM;
};

int Przodek::FunFromPrzodek(int zm) {
  // int result = zm + fN;
  int result = fN;
  return result;
}

//----------------------------------------------------------------------
int main() {
  Przodek przObiekt;
  przObiekt.fN = 7;
  cout << "0. przObiekt.fN: " << przObiekt.fN << endl;

  //------------ 1 ------------------------
  Potomek potObiekt;
  potObiekt.fN = 8;
  cout << "1. potObiekt.fN: " << potObiekt.fN << endl;

  //------------ 2 ------------------------
  cout << "2. przObiekt.fN: " << przObiekt.fN << endl;

  //------------ 3 ------------------------

  cout << "3. Value from object Przodek (FunFromPrzodek): "
       << przObiekt.FunFromPrzodek(3) << endl;

  cout << "3. Value from object Potomek (FunFromPrzodek): "
       << potObiekt.FunFromPrzodek(3) << endl;

  //------------ 4 ------------------------
  potObiekt.fM = 3;
  cout << "4. potObiekt.fM: " << potObiekt.fM << endl;

  przObiekt.fM = 7;
  cout << "4. przObiekt.fM: " << przObiekt.fM << endl;
  cout << "4. potObiekt.fM: " << potObiekt.fM << endl;

  //------------ 5 ------------------------
  potObiekt.fN = 9;
  cout << "5. potObiekt.fN: " << potObiekt.fN << endl;

  potObiekt.fN = 9.6;
  cout << "5. potObiekt.fN: " << potObiekt.fN << endl;
}
