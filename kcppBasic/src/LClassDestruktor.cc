/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23, 2022.05.04 (v.0.02)
 * \brief Klasy: ~Destruktor w C++
 * v0.02
 */

#include <iostream>
using namespace std;

class A 
{
   
 public:
   A() {};
   A(int zmienna);
   A(double zmienna) { fLicznikDouble = zmienna; };
   ~A();

   int    fLicznikInt;
   double fLicznikDouble;
};

A::A(int zmienna){
   fLicznikInt = zmienna;
}
        
A::~A(){
   cout <<"Obiekt zostal zniszczony"<< endl;
}

int  main(){
   A *obiektC = new A(444);
   A *obiektD = new A(444.1);
   A *obiektE = new A();
  
   A obiektF;
   /*  Destructor is called automaticaly then:
    *  1. The program finished execution.
    *  2. When a scope (the { } parenthesis) containing local variable ends.
    *  3. When you call the delete operator */

   cout << obiektC->fLicznikInt    << endl; 
   cout << obiektD->fLicznikDouble << endl; 
   cout << obiektE->fLicznikInt    << endl; 
 
   delete obiektC;  //sprawdzic co sie stanie gdy zakomentujemy ta linie
}
 
