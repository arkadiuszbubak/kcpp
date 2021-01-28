/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Virtual w C++
 * v0.01
 */

#include <iostream>
using namespace std;

//----------------------------------
class A
{   
 public:
  char a[200];
};


//----------------------------------
class B : virtual A 
{
  char b[100];
};


//----------------------------------
class C : virtual A 
{
  char c[100];
};


//----------------------------------
class D : A 
{
  char d[100];
};


//----------------------------------
class E : B,C,D 
{
  char d[100];
};


//------------------------------------------------------------------
int main()
{ 
  cout << sizeof(A) << endl;
  cout << sizeof(B) << endl;
  cout << sizeof(C) << endl;
  cout << sizeof(D) << endl;
  cout << sizeof(E) << endl;

  return 0;
}
