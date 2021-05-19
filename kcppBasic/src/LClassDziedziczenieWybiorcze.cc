/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Dziedziczenie wybiorcze w C++
 * v0.01
 * v0.02 (2021.05.14)
 */

#include <iostream>
using namespace std;

class Przodek 
{
  public:
    int fM;
    int FunPublic(int m) {
      return m;
    };
    /* int GetValue() {return fM;}
     * void SetValue(int fm) { fM = fm;} */
  protected:
    int   fN;
    float fX;
    int FunProtected(int a, int zm) {
      return a+zm;
    };
    int FunProtected(int a, int zm, int zn) {
      return a+zm+zn;
    };
};

class Potomek : private Przodek 
//class Potomek : Przodek    //< To samo co linia wyzej
{ 
  public:
    using Przodek::fM; // Jesli linia zakomentowant to fM jest w klasie Potomek privat
    using Przodek::FunPublic;
    //using Przodek::GetValue;
    //using Przodek::SetValue;
  protected:
    using Przodek::FunProtected;
};

int main()
{
  Potomek potObiekt;
  potObiekt.fM = 8;
  cout << potObiekt.fM << endl;
  
  /* Potomek potObiekt;
   * potObiekt.SetValue(56);
   * cout << potObiekt.GetValue() << endl; */

  Przodek przObiekt;
  cout << przObiekt.fM << endl;

  cout << potObiekt.FunPublic(3) << endl;
}

