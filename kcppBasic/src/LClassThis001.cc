/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: This w C++
 * v0.01
 * v0.02 2026.04.10
 */

#include <iostream>
using namespace std;

class A {
public:
  int fIndex;
  void Ustaw(int x) {
    fIndex = x; ///< dostęp do przesłoniętej składowej klasy
  }
};

class B {
public:
  int fIndex;
  void Ustaw(int fIndex) {
    this->fIndex = fIndex; ///< dostęp do przesłoniętej składowej klasy
    // cout << &fIndex << endl;
    // cout << &(this->fIndex) << endl;
    // fIndex = fIndex; ///< dostęp do przesłoniętej składowej klasy
  }
};

int main() {
  A objektA;
  objektA.Ustaw(7);
  cout << objektA.fIndex << endl;

  B objektB;
  objektB.Ustaw(3);
  cout << objektB.fIndex << endl;

  return 0;
}
