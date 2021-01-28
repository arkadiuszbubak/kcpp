/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.02.21
 * \brief Typy danych w C++
 * v0.01
 */

#include<iostream>
using namespace std;

int main()
{
  int fVarA;
  fVarA = 7;
  fVarA = 7.3;

  cout << fVarA << endl;

  //float fVarA;              //Error
  //float fVarB;
  //fVarB = 7;
  //fVarB = 7.3;

  char fVarC[10];   //deklaracja stringu o długości 10 znaków
  char fVarD[] = "Tutaj jakis napis";  /*deklaracja napisu (następuje automatyczne przypisanie tekstu zmiennej oraz określenie jej długości) */
  //char *fVarE = "A tutaj inny napis";  //podobne do powyższej metody, deprecated

  cout << "fVarC: "<< fVarC << endl;
  cout << "fVarD: "<< fVarD << endl;

  return 0;                              
}
