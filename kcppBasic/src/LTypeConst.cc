/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2021.03.01
 * \brief Typy danych w C++: const
 * v0.01
 */

#include<iostream>
using namespace std;

//--- Const function --------------------------------
const int FunA()
{
  return 73;
}


//--------------------------------------------------
void FunB(const int t)
{
  //t++; //error
}


//--------------------------------------------------
int main()
{

  const int i = 10;
  const int j = i + 10;     // works fine
  //i++;    // this leads to Compile time error 

  //Pointer to a const variable. This means that the pointer is pointing to a const variable.
  const int* u1;  //u1 is a pointer that can point to a const int type variable.

  //Można też tak
  int const* u2;
  char const* v;


  //To make a pointer constant, we have to put the const keyword to the right of the *
  int x = 37;
  int* const w1 = &x;
  cout << *w1 << endl;

  const int *w2 = &x;
  cout << *w1 << endl;

  cout <<"Call FunA function: "<< FunA() << endl;


  return 0;                              
}
