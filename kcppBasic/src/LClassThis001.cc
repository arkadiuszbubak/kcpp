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
  void UstawOne(int fIndex) {
    this->fIndex = fIndex; ///< dostęp do przesłoniętej składowej klasy
  }
  void UstawTwo(int fIndex) {
    // cout << &fIndex << endl;
    // cout << &(this->fIndex) << endl;
    fIndex = fIndex; ///< A tu so sie dzieje?
  }
};

int main() {
  A objektA;
  objektA.Ustaw(7);
  cout << objektA.fIndex << endl;

  B objektBOne;
  objektBOne.UstawOne(3);
  cout << objektBOne.fIndex << endl;

  B objektBTwo;
  objektBTwo.UstawTwo(9);
  cout << objektBTwo.fIndex << endl;

  return 0;
}
