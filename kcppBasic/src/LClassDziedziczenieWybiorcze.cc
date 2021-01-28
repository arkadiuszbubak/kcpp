/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Dziedziczenie wybiorcze w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class Przodek 
{
 protected:
   int   fN;
   float fX;
   void FunProtected(float*, int &) {};
   void FunProtected(float*, int zm, int zn) {};
 public:
   int fM;
   float *FunPublic(int m) {
      float *zm;
      return zm;
   };
};

class Potomek : private Przodek 
{ // class Potomek : Przodek { 
 protected:
   Przodek::fX;
   Przodek::FunProtected;
 public:
   Przodek::fM; // Jesli linia zakomentowant to fM jest w klasie Potomek privat
   Przodek::FunPublic;
   
};

int main()
{

   Potomek potObiekt;
   potObiekt.fM = 8;
   cout << potObiekt.fM << endl;
   
   Przodek przObiekt;
   cout << przObiekt.fM << endl;
}

