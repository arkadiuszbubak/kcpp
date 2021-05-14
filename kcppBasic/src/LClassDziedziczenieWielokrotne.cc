/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Dziedziczenie wielokrotne w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class A    
{	
 public: 
   int fA, fI;
};

class B : public A   
{	
 public: 
   int fB, fI;
};

class C : public B 
{
 public:
   void Fun();    
};

void C::Fun(){
	
   fA = fB;          ///< poprawne
   fI = 7;           ///< blad (niejednoznaczne)
   A::fI = 1;        // poprawne
   //B::fI = 2;        // A czy to poprawne? :) Gdy odkomentujemy, to ile będzie wynosiło fI

   cout <<"fI:\t"<< fI << endl;
   cout <<"A::fI:\t"<< A::fI << endl;
   cout <<"B::fI:\t"<< B::fI << endl;
}


int main()
{
   C *obiekt = new C();
   obiekt->Fun();
}

