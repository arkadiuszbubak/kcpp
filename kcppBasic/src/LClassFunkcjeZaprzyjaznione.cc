/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Funkcje zaprzyjaznione w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class Pudelko 
{   
  public:
    Pudelko(float d, float s, float w) : fD(d), fS(s), fW(w) { }
    //float GetValueD() { return fD; }; 
    friend int Equalsize(Pudelko a, Pudelko b);

  private:
    float fD, fS, fW;
};


int Equalsize(Pudelko a, Pudelko b) {

  // Funkcja nie bedaca metoda klasy Pudelko korzysta ze
  // skladowych prywatnych klasy Pudelko

  //if( a.GetValueD() == b.GetValueD()) return 1;    // A czy to zadziała?
  if( a.fD * a.fS * a.fW == b.fD * b.fS * b.fW) return 1;
  else return 0;

}

int main()
{
  Pudelko objA(1, 2, 3);
  Pudelko objB(1, 2, 3);    // 1.
  //Pudelko objB(1, 4, 3);  // 2. Linie 1.to zamienmy na linie 2.

  //cout << objA.fD << endl;
  //cout << objA.GetValueD() << endl;

  cout << Equalsize(objA, objB) << endl;
}

