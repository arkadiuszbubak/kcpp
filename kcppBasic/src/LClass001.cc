/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class Samochod
{

  public:
    int fA;
    void MetodaPublicA() {}
    void MetodaPublicB() {
      MetodaPrivateA();
    }

  protected:
    int fB;
  private:
    int fC;
    void MetodaPrivateA() {}
};

int main()
{

  Samochod obiektSyrenka;      ///< tworzymy obiekt
  Samochod *wskSyrenka = new Samochod();
  obiektSyrenka.fA = 1;        ///<  OK
  //obiektSyrenka.fB = 1;        ///<  Error
  //obiektSyrenka.fC = 1;        ///<  Error

  obiektSyrenka.MetodaPublicA();      ///<  OK

  wskSyrenka->fA = 1;          ///<  OK
  //wskSyrenka->fB = 1;          ///<  Error
  //wskSyrenka->fC = 1;          ///<  Error

  wskSyrenka->MetodaPublicA();       ///<  OK
  wskSyrenka->MetodaPublicB();       ///<  OK
  // wskSyrenka->MetodaPrivateA();      ///<  Error


  delete wskSyrenka;
}
