/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Zagniezdzanie w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class Samochod
{
  public:
    int fZmienna;

    class Akcje
    {
      public:
        int fZmienna;
    };
};


int main()
{
  Samochod Volvo;
  Volvo.fZmienna = 7;

  Samochod *Volvo1 = new Samochod();
  Volvo1->fZmienna = 8;

  //Akcje Trab;                 //Error
  //Trab.fZmienna = 5;         //Error

  Samochod::Akcje Trab;
  Trab.fZmienna = 5;

  cout << Volvo.fZmienna << endl;
  cout << Volvo1->fZmienna << endl;
  cout << Trab.fZmienna  << endl;
}
