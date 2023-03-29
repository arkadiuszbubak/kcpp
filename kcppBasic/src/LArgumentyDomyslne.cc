/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.09
 * \brief Argumenty domyslne w C++
 * v0.01
 */

#include<iostream>
using namespace std;

int zwieksz(int a, int b = 1) {
	return a + b;
}


int zmniejsz(int a, int b = 1);

 //---------------------------------------------------------------
 // Czy możliwe jest przeciążenie funkcji 'zwieksz'?
 /* int zwieksz(int a){
  *   return a;
  * } */

 int zwiekszNew(int a, int b){
   return a + b;
 }

 int zwiekszNew(int a){
   return a;
 }
 //---------------------------------------------------------------



//---------------------------------------------------------------
int zmienA(int, int, int = 2){
  return 0;
}

//---------------------------------------------------------------
int zmienB(int*, int, int = 2);
int zmienB(int*, int, int){
  return 0;
}

//---------------------------------------------------------------
int zmienC(int, int, int = 2);
int zmienC(int a, int b, int c){
  return 0;
}
//---------------------------------------------------------------
int zmienD(int a, int b, int c = 2);
int zmienD(int, int, int){

  //int w = a+b;
  return 0;
}



int main(){
 
  //------------------------------
  zmienA(1,2);

  int *wskaznik;
  zmienB(wskaznik,2);
  zmienB(wskaznik,2,3);

  zmienC(1,2);

  zmienC(1,2);
  //------------------------------

	int wynik;
	wynik = zwieksz(2, 5);
	cout << "Wywolanie zwieksz(2, 5): "<< wynik << endl;

	wynik = zwieksz(2);
	cout << "Wywolanie zwieksz(2): "<< wynik << endl;

	wynik = zmniejsz(5, 2);
	cout << "Wywolanie zmniejsz(5, 2): "<< wynik << endl;

	wynik = zmniejsz(5);
	cout << "Wywolanie zmniejsz(5): "<< wynik << endl;

 
  cout <<"Czy możliwe jest przeciążenie funkcji 'zwieksz'"<< endl;
	return 0;
}

int zmniejsz(int a, int b) {

	return a - b;    
}
