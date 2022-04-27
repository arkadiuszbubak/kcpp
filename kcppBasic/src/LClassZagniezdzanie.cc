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

    inline void FunkcjaA(){   ///<Deklaracjai jednocześnie definicja
      cout <<"FunkcjaA"<< endl;
    }
    void FunkcjaB();          ///< Deklaracja funkcji, definicja poza klasą

    //--- klasa zagnieżdżona ------
    class Akcje
    {
      public:
        int fZmienna;
    };
    //-------------------------------
};



//-----------------------------------------------------------
void Samochod::FunkcjaB(){
  cout <<"FunkcjaB" << endl;
}



//-----------------------------------------------------------
int main()
{
  Samochod Volvo;
  Volvo.fZmienna = 7;

  Samochod *Ford = new Samochod();
  Ford->fZmienna = 8;

  //Akcje Trab;                 //Error
  //Trab.fZmienna = 5;         //Error


  Samochod::Akcje Trab;
  Trab.fZmienna = 5;

  cout << Volvo.fZmienna << endl;
  cout << Ford->fZmienna << endl;
  //cout << Trab.fZmienna  << endl;
  Volvo.FunkcjaA();
  Ford->FunkcjaB();
}
