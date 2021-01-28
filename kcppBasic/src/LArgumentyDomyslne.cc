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

/*  //---------------------------------------------------------------
 *  // Czy możliwe jest przeciążenie funkcji 'zwieksz'?
 *  int zwieksz(int a){
 *    return a;
 *  }
 *
 *  int zwiekszNew(int a, int b){
 *    return a + b;
 *  }
 *
 *  int zwiekszNew(int a){
 *    return a;
 *  }
 *  //--------------------------------------------------------------- */



int main(){

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
