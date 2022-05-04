/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Konstruktor w C++
 * v0.02
 */

#include <iostream>
using namespace std;

class A 
{
  public:
    A() {};    ///< It has to be created if another construtor (with non-zero amount arguments exist)
    A(int zmienna);
    int fLicznik;
    int Pusta();
};

A::A(int zmienna) {
  fLicznik = zmienna;
}

int A::Pusta(){
  return 0;
}

int main()
{   
  A objektA;
  A objektB(7);
  A *objektC = new A(9);

  objektA.fLicznik = 3;
  cout << objektA.fLicznik  << endl;
  cout << objektB.fLicznik  << endl;
  cout << objektC->fLicznik << endl;
}
