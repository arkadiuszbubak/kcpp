#include<iostream>
using namespace std;

//------------------------------------------------
int funkcja(){
   
  int iWynik;
  float fzmienna_ktora_cos_znaczy;
  int   iZmiennaKtoraCosZnaczy;
  int iA = 1;
  int iB = 2;
  iWynik = iA+iB;

  return iWynik;
}

//------------------------------------------------
int main(){

  int zmienna = 7;
  cout << zmienna << endl;

  int zm = funkcja();
  cout << zm << endl;
  cout << funkcja() << endl;

  return 0;
}

