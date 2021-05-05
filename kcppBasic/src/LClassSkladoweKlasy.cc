/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Skladowe klasy w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class Samochod
{

  public:
    int fA;
    inline void SetB(int Val) { fB = Val; }
    inline void SetC(int Val) { fC = Val; }
    inline int  GetB() { return fB; }
    inline int  GetC() { return fC; }

  protected:
    int fB;
  private:
    int fC;
};

int main()
{

  Samochod obiektSyrenka;            //tworzymy obiekt
  Samochod *wskSyrenka = new Samochod();

  //--------------------------------------------------
  obiektSyrenka.fA = 1;        //  OK
  //obiektSyrenka.fB = 1;        //  Error
  //obiektSyrenka.fC = 1;        //  Error
  cout << obiektSyrenka.fA << endl;

  //--------------------------------------------------
  obiektSyrenka.SetB(3);      //  OK
  cout << obiektSyrenka.GetB() << endl;      //  OK

  //--------------------------------------------------
  obiektSyrenka.SetC(4);      //  OK
  cout << obiektSyrenka.GetC() << endl;      //  OK

  /* wskSyrenka->SetC(4);      //  OK
   * cout << wskSyrenka->GetC() << endl;      //  OK */



  //--------------------------------------------------
  wskSyrenka->fA = 7;          //  OK
  //wskSyrenka->fB = 1;          //  Error
  //wskSyrenka->fC = 1;          //  Error
  cout << wskSyrenka->fA << endl;

  delete wskSyrenka;
}
