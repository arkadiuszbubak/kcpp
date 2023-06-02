/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Lista inicializacyjna w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class A 
{   
 public:
   /* A() {
    *   cout <<"Empty default constructor"<< endl;
    * }; */
   A(int zmiennaA, int zmiennaB);
   A(int zmiennaA, int zmiennaB, int zmiennaC);
   A(int zmiennaA, int zmiennaB, float zmiennaD);
   
   int fLicznikA;
   int fLicznikB;
   int fLicznikC;
   float fLicznikD;
};

//--- Lista inicializacyjna -------
A::A(int zmiennaA, int zmiennaB) : fLicznikA(zmiennaA), fLicznikB(zmiennaB)
{}
//Strange - useful?
A::A(int zmiennaA, int zmiennaB, float zmiennaD) : fLicznikA(zmiennaA), fLicznikB(zmiennaB)
{
  fLicznikD = zmiennaD;
}

//--- 'Standardowy konstruktor' ---
A::A(int zmiennaA, int zmiennaB, int zmiennaC){
  fLicznikA = zmiennaA;
  fLicznikB = zmiennaB;
  fLicznikC = zmiennaC;
}
//---------------------------------------------------------------

int main()
{
   int zm = 5;
   A *obiektN = new A(7, 4, zm);
   cout << obiektN->fLicznikA <<"\t"
        << obiektN->fLicznikB <<"\t"
        << obiektN->fLicznikC << endl;;
  
   float zn = 7.1;
   A *obiektO = new A(3, 4, zn);
   A *obiektM = new A(3, 6);
   cout << obiektM->fLicznikA <<"\t"
        << obiektM->fLicznikB <<"\t"
        << obiektM->fLicznikC <<"\t"
        << endl;
   // A *obiekt1 = new A();
   // A obiekt2;

}   

