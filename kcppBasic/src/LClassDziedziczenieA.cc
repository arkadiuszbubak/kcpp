/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Dziedziczenie w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class Przodek 
{
 public:
   int FunA(int zm);

   int   fM;
   float fN;
};

class Potomek : public Przodek 
{ 
 public:
   int fM;
   
};


int Przodek::FunA(int zm)
{
   int result = zm + 3;
   return result;
}



int main()
{
   Potomek potObiekt;
   potObiekt.fN = 8;
   cout << potObiekt.fN << endl;
   
   //------------ 1 ------------------------
   Przodek przObiekt;
   przObiekt.fN = 7;
   cout << przObiekt.fN << endl;
   
   //------------ 2 ------------------------
   cout << potObiekt.fN << endl;
   
   //------------ 3 ------------------------
   int resA = przObiekt.FunA(7);
   cout << resA << endl;

   //------------ 4 ------------------------
   int resB = potObiekt.FunA(8);
   cout << resB << endl;  
}

