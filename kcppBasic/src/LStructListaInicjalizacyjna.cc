/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2021.05.12
 * \brief Struct: Lista inicializacyjna w C++
 * v0.01
 */

#include <iostream>
using namespace std;

struct A 
{   
   int fLicznikA;
   int fLicznikB;
   int fLicznikC;
};
struct B 
{   
   int fLicznikA = 1;
   int fLicznikB = 2;
   int fLicznikC = 3;
};

//--- Lista inicializacyjna -------

//--- 'Standardowy konstruktor' ---

int main()
{
  A obj1 = {1,2,3};
  A obj2 {1,2,3};
}  

