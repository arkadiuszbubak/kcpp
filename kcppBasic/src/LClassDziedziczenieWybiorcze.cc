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
 protected:
   int   fN;
   float fX;
   int FunProtected(int a, int zm) {
    return a+zm;
   };
   int FunProtected(int a, int zm, int zn) {
     return a+zm+zn;
   };
 public:
   int fM;
   int FunPublic(int m) {
      return m;
   };
};

class Potomek : private Przodek 
{ // class Potomek : Przodek { 
 protected:
   using Przodek::fX;
   using Przodek::FunProtected;
 public:
   using Przodek::fM; // Jesli linia zakomentowant to fM jest w klasie Potomek privat
   using Przodek::FunPublic; 
};

int main()
{

   Potomek potObiekt;
   potObiekt.fM = 8;
   cout << potObiekt.fM << endl;
   
   Przodek przObiekt;
   cout << przObiekt.fM << endl;
}

