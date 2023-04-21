/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Arytmetyka wskaznikow (wskaznik zmienne) w C++
 * v0.01
 * TODO: add hextodec which works wit double
 */

#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include "LConversion.h"
/* //4 includes
 * #include <string>
 * #include <vector>
 * #include <stdint.h>
 * #include <math.h> */
using namespace std;


/* //in order to avoid include LConversion.h. Remember to add 4 includes
 * unsigned long hextodec(string hex)
 * {
 *     unsigned long result = 0;
 *     for (unsigned int i=0; i<hex.length(); i++) {
 *         if (hex[i]>=48 && hex[i]<=57)
 *         {
 *             result += (hex[i]-48)*pow(16,hex.length()-i-1);
 *         } else if (hex[i]>=65 && hex[i]<=70) {
 *             result += (hex[i]-55)*pow(16,hex.length( )-i-1);
 *         } else if (hex[i]>=97 && hex[i]<=102) {
 *             result += (hex[i]-87)*pow(16,hex.length()-i-1);
 *         }
 *     }
 *     return result;
 * }
 *  */

void SizeofPointer(){
  int a;
  int *wsk = &a;
  cout <<"Address(zmienna,wskaznik): "<< &a <<"\t"<< &wsk << endl;
  cout <<"Sizeof(zmienna,wskaznik):  "<< sizeof(a) <<"\t"<< sizeof(wsk) << endl;
}


//----------------------------------
int main() { 
	int a;
	int b;
	int c;
	float x;
  double y;
	int *wsk_int;
	//Rozne sposoby zapisu nowej wartosci do zmiennej b za pomoca wskaznika na b i sasiadujace zmienne
  cout <<"Size of intiger: "<< sizeof(int)    << endl;
  cout <<"Size of float:   "<< sizeof(float)  << endl;
  cout <<"Size of double:  "<< sizeof(double) << endl;


	// Wyswieltlenie adresow zmiennych
  printf("\n--- C --------------------------------");
	// printf(" \nAdres zmiennej A: %u",   &a);   //!< %u is unsigned integer
	/* printf(" \nAdres zmiennej A: %d",   &a);   //!< %d is signed integer
	 * printf(" \nAdres zmiennej A: %p\n", &a);
   * cout << &a << endl; */


	//string a1 = std::to_string(0xa1a56);

  //-----------------------------------
  cout <<"--- C++ ------------------------------"<< endl;
	ostringstream sa;
	sa << &a;
  string a1 = sa.str();
	cout <<"Adres zmiennej A: "<< &a << "\t dec: " << hextodec(a1) << endl;

	//--- lub prosciej ------------------
	unsigned long p = (unsigned long) &a;
	//long p = (long) &a;
	cout <<"Adres zmiennej A: "<< &a << "\t dec: " << p  << endl;
	//cout <<"Adres zmiennej A: "<< &a << "\t dec: " << dec << &a << endl;
	//cout << dec << &a << endl;

  //-----------------------------------
	ostringstream sb;
	sb << &b; string b1 = sb.str();
	cout <<"Adres zmiennej B: "<< &b << "\t dec: " << hextodec(b1) << endl;

  //-----------------------------------
	ostringstream sc;
	sc << &c; string c1 = sc.str();
	cout <<"Adres zmiennej C: "<< &c << "\t dec: " << hextodec(c1) << endl;

  //-----------------------------------
	ostringstream sx;
	sx << &x; string x1 = sx.str();
	cout <<"Adres zmiennej X: "<< &x << "\t dec: " << hextodec(x1) << endl;

  /* //-----------------------------------
	 * ostringstream sy;
	 * sx << &y; string y1 = sy.str();
	 * cout <<"Adres zmiennej Y: "<< &x << "\t dec: " << hextodec(y1) << endl; */

  //-----------------------------------
	cout <<"Adres zmiennej WSK_INT: "<< &wsk_int << endl;




	//--------------------------------------------------
	a = b = c = 0; 
	cout <<"1. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	b = 10; 
	cout <<"2. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	wsk_int = &b;
	*wsk_int = 20;
	cout <<"3. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	wsk_int = &a;
	*(wsk_int+1) = 30;
	cout <<"4. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(&a + 1) = 40; 
	cout <<"5. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

  //wsk_int = &c;
	//*(wsk_int - 1) = 50;
	*(&c - 1) = 50;
	cout <<"6. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*( (int*)&x - 2) = 60;
	cout <<"7. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(int*)( &x - 1) = 70;
	cout <<"8. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*((int*)&wsk_int - 2) = 80;
	cout <<"9. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(int*) (&wsk_int - 1) = 90;
	cout <<"10. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;


  SizeofPointer();  

  //Zadanie 3.1

	return 0;
}
