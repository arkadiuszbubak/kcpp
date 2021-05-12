/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2021.05.12
 * \brief Klasy: Default Konstruktor w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class A 
{
  public:
    //A() {};    ///< It has to be created if another construtor (with non-zero amount arguments exist)
    int fLicznik;
    int Pusta();
};


int A::Pusta(){
  return 0;
}

int main()
{   
  A objektA;
  objektA.fLicznik = 7;

  cout << objektA.fLicznik << endl;
}
