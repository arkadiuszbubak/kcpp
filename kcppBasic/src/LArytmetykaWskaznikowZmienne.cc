/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Arytmetyka wskaznikow (wskaznik zmienne) w C++
 * v0.01
 */

#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <LConversion.h>
using namespace std;

int main() { 
	int *wsk_int;
	float x;
	int c;
	int b;
	int a;
	//Rozne sposoby zapisu nowej wartosci do zmiennej b za pomoca wskaznika na b i sasiadujace zmienne

	// Wyswieltlenie adresow zmiennych
	//printf(" \n Adres zmiennej A = %u ", &a);

	//string a1 = std::to_string(0xa1a56);

	ostringstream sa;
	sa << &a; string a1 = sa.str();
	cout <<"Adres zminnej A: "<< &a << "\t dec: " << hextodec(a1) << endl;
	// lub prosciej
	unsigned long p = (unsigned long) &a;
	cout << dec << p << endl;

	ostringstream sb;
	sb << &b; string b1 = sb.str();
	cout <<"Adres zminnej B: "<< &b << "\t dec: " << hextodec(b1) << endl;

	ostringstream sc;
	sc << &c; string c1 = sc.str();
	cout <<"Adres zminnej C: "<< &c << "\t dec: " << hextodec(c1) << endl;

	ostringstream sx;
	sx << &x; string x1 = sx.str();
	cout <<"Adres zminnej X: "<< &x << "\t dec: " << hextodec(x1) << endl;

	cout <<"Adres zminnej WSK_INT: "<< &wsk_int << endl;




	//--------------------------------------------------
	a = b = c = 0; 
	cout <<"1. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	b = 10; 
	cout <<"2. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	wsk_int = &b;
	*wsk_int = 20;
	cout <<"3. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	wsk_int = &a;
	*(wsk_int-1) = 30;
	cout <<"4. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(&a - 1) = 40; 
	cout <<"5. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(&c + 1) = 50;
	cout <<"6. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*( (int*)&x + 2) = 60;
	cout <<"7. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(int*)( &x + 1) = 70;
	cout <<"8. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*((int*)&wsk_int - 2) = 80;
	cout <<"9. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(int*) (&wsk_int - 1) = 90;
	cout <<"10. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;


	return 0;
}
