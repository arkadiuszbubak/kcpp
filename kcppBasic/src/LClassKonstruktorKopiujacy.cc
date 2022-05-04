/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.05.08
 * \brief Klasy: Konstruktor kopiujacy w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class A 
{   
 public:
   A(int x, int y) : fX(x), fY(y) {}
   A(int x){
       fX = x;
   }
   A() {
      fX = fY = 0; 
   }

   /** Konstruktor kopiujacy **/
   // A co jesli go wcale nie zdefiniujemy? 
   A(const A &c) {
      fX = c.fX;
      fY = c.fY;
   }

   void Wypisz();
   
   int fX, fY;
};

A c0(3, 6);  //statyczny
  
void A::Wypisz(){
   cout <<"fX: "<< fX << endl;
   cout <<"fY: "<< fY << endl;
}


int main()
{
   //--------- automatyczne -------
   A c1(4, -1);
   A c2;
   A c3 = c1; // kopiujący <=> c3(c1)
  
   
   cout << "Wypis danych z obiektu c1"<<endl;
   c1.Wypisz();
   cout << "Wypis danych z obiektu c3"<<endl;
   c3.Wypisz();

   

   //-------- dynamiczne ----------
   A *p1, *p2, *p3;
   p1 = new A(4, -1);
   p2 = new A();
   p3 = new A(*p1);

   cout << "\nWypis danych z obiektu p1"<<endl;
   p1->Wypisz();
   cout << "Wypis danych z obiektu p3"<<endl;
   p3->Wypisz();
   
   delete p1;
   delete p2;
   delete p3;
   
   return 0;
}

