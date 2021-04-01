/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Manipulatory: setprecision w C++
 * v0.01
 */

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){

	//double f = 3.141592653589793238462643;
	long double f = M_PI; // wykorzystanie pi z biblioteki math.h
	cout << setprecision (5) << f << endl;
	cout << setprecision (9) << f << endl;
	cout << fixed;
	cout << setprecision (5) << f << endl;
	cout << setprecision (20) << f << endl;
	//cout << setprecision (60) << M_PI << endl;

  /* float   4   pojedyncza precyzja - dokładność 6 - 7 cyfr po przecinku
   * double  8   podwójna precyzja - dokładność 15 - 16 cyfr po przecinku
   * long double   12  liczby z ogromną dokładnością - 19 - 20 cyfr po przecinku */


	return 0;
}
