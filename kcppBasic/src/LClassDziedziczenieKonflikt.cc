/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Dziedziczenie, konflik w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class A                    
{                          
  public:                  
    int fA, fI;
};

class B
{
  public:
    int fB, fI;
};

class C : public A, public B 
{
  public:
    void Fun() {
      fA = fB;          ///< poprawne
      //fI = 0;            ///< błąd (niejednoznaczne)
      A::fI = 7;        ///< poprawne
      //B::fI = 2;        ///< A czy to poprawne? :)
    }
};



int main()
{
  C *obiekt = new C();
  obiekt->Fun();
  cout << obiekt->A::fI << endl;
  cout << obiekt->B::fI << endl;
  //cout << obiekt->B::fB << endl;
}

