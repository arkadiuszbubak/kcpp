/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Dziedziczenie w C++
 * v0.01
 */

#include <iostream>
using namespace std;

//----------------------------------------------------------------------
class Przodek 
{
 public:
   int FunFromPrzodek(int zm);

   int   fM;
   float fN;   ///< fN ia only here in the class you inherit from
};



//----------------------------------------------------------------------
class Potomek : public Przodek 
{ 
 public:
   int fM;
   //int fN;
   
};


int Przodek::FunFromPrzodek(int zm)
{
   int result = zm + fN;
   return result;
}



//----------------------------------------------------------------------
int main()
{
   Przodek przObiekt;
   przObiekt.fN = 7;
   cout <<"przObiekt.fN: "<<przObiekt.fN << endl;
  
   //------------ 1 ------------------------
   Potomek potObiekt;
   potObiekt.fN = 8;
   cout <<"potObiekt.fN: "<< potObiekt.fN << endl;
   
   //------------ 2 ------------------------
   cout <<"przObiekt.fN: "<< przObiekt.fN << endl;
   
   //------------ 3 ------------------------
   int resA = przObiekt.FunFromPrzodek(3);
   cout << resA << endl;

   //------------ 4 ------------------------
   int resB = potObiekt.FunFromPrzodek(3);
   cout << resB << endl;


   //------------ 5 ------------------------
   potObiekt.fM = 3;
   cout <<"potObiekt.fM: "<< potObiekt.fM << endl;

   przObiekt.fM = 7;
   cout <<"przObiekt.fM: "<< przObiekt.fM << endl;
   cout <<"potObiekt.fM: "<< potObiekt.fM << endl;

   //------------ 6 ------------------------
   potObiekt.fN = 9;
   cout <<"potObiekt.fN: "<< potObiekt.fN << endl;

   potObiekt.fN = 9.6;
   cout <<"potObiekt.fN: "<< potObiekt.fN << endl;

}

