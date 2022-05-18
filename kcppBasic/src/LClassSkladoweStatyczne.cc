/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Skladowe statyczne w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class A 
{
 public:
   A() { gLicznik++; }
   A(int k) { k++;}
   
   static int GetValue() {   // Zlikwidujmy static i zobaczmy co sie stanie
      return gLicznik;
   }

 //private:
   static int gLicznik;      // licznik obiektów
};

int A::gLicznik = 0;         // konieczna definicja !

int main()
{
   
   cout <<"no object: get gLicznik by GetValue: "<< A::GetValue() << endl;
   //cout <<"no object: get gLicznik: "<< A::gLicznik << endl;
   
   A objectA;
   cout <<"objectA.GetValue: "<< objectA.GetValue() << endl;
   
   A *objectB = new A();
   cout <<"objectB.GetValue: "<< objectB->GetValue() << endl;

   A *objectC = new A(0);
   cout <<"objectC.GetValue: "<< objectC->GetValue() << endl;
 
   /* A objectD;
    * cout <<"objectD variable: "<< objectD.gLicznik << endl;  ///< A czy tak można? Proszę sprawdzić. */
   //cout <<"no object variable: "<< A::gLicznik++ << endl;
   //cout <<"no object variable: "<< ++A::gLicznik << endl;

   
   return 0;
}
