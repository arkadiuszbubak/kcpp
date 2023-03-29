/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10 (0.01), 2023.03.29 (0.02)
 * \brief Przekazywanie przez wartosc w C++
 * v0.02
 */

#include<iostream>
using namespace std;



//---------------------------------------------------------------------
void swapA(int a, int b) { /// Przekazywanie zmiennych przez wartość
	cout <<"---> Przez wartosc:"<< endl;
	int temp = a;
	a = b;
	b = temp;    
	cout <<"W:\tA = "<< a <<" B = "<< b << endl;
}

//---------------------------------------------------------------------
void swapB(int &a, int &b) { /// Przekazywanie przez referencje
	cout <<"---> Przez referencje:"<< endl;
	int temp = a;
	a = b;
	b = temp;
	cout <<"W:\tA = "<< a <<" B = "<< b << endl;
}

//---------------------------------------------------------------------
void swapC(int *a, int *b) { /// Przekazywanie przez wskaźnik
  cout <<"---> Przez wskaznik:"<< endl;
  int temp = *a;
  *a = *b;
  *b = temp;
  /* *a = *a * 3;
   * *b = *b * 3; */
	cout <<"W:\tA = "<< *a   <<" B = "<< *b << endl;
	//cout <<"W swapC: A = "<< temp <<" B = "<< *b << endl;
}



//---------------------------------------------------------------------
int main() {

	int A = 4;   
	int B = 6;


  //--- przez zmienne (copia) --------------
	cout <<"\nPrzed: A = "<< A <<" B = "<< B << endl;
  swapA(A, B);
	cout <<"Po:\tA = "<< A <<" B = "<< B << endl;


  //--- przez referencje -------------------
	cout <<"\nPrzed: A = "<< A <<" B = "<< B << endl;
	swapB(A, B);    
	cout <<"Po:\tA = "<< A <<" B = "<< B << endl;


	//--- przez wskaznik ----------------------
	int *wskA = &A;
	int *wskB = &B;
	cout <<"\nPrzed: A = "<< A <<" B = "<< B << endl;
	swapC(wskA, wskB);    
	cout <<"Po:\tA = "<< A <<" B = "<< B << endl;

	cout <<"\nPrzed: A = "<< A <<" B = "<< B << endl;
	swapC(&A, &B);    
	cout <<"Po:\tA = "<< A <<" B = "<< B << endl;


	return 0;
}
