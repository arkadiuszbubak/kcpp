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
   A(int k) { }
   
   static int gLicznik;      // licznik obiektów
   static int GetValue() {   // Zlikwidujmy static i zobaczmy co sie stanie
      return gLicznik;
   }
   
};

int A::gLicznik = 0;         // konieczna definicja !

int main()
{
   
   cout << A::GetValue() << endl;
   /* A objectD;
    * cout << objectD.gLicznik << endl;  // A czy tak można? Proszę sprawdzić. */
   
   A objectA;
   cout << objectA.GetValue() << endl;
   
   A *objectB = new A();
   cout << objectB->GetValue() << endl;

   A *objectC = new A(0);
   cout << objectC->GetValue() << endl;
   
   return 0;
}
