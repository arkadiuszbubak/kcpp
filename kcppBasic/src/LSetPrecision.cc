/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Manipulatory: setprecision w C++
 * modified from: https://www.cplusplus.com/reference/iomanip/setprecision/
 * v0.02 (2023.05.10)
 */

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){

  // double f = 3.14159;
  // double f = 3.141592653589793238462643;
	//double f = 30.14159;
  long double f = M_PI; // wykorzystanie pi z biblioteki math.h
  cout << f << endl;
  //------------------------------------------------
  // float w = 16.0;
  cout << fixed;
  // cout << "Float with/without fixed stream  manipulator:<< "w << endl;
  //------------------------------------------------
	cout <<"Set precision: 5\t"<< setprecision (5) << f << endl;
	cout <<"Set precision: 9\t"<< setprecision (9) << f << endl;
	cout <<"Set scientific"<< scientific << endl;;
	cout <<"Set precision: 5\t"<< setprecision (5) << f << endl;
	cout <<"Set precision: 9\t"<< setprecision (9) << f << endl;
  //cout << setprecision (60) << M_PI << endl;

  /* float   4   pojedyncza precyzja - dokładność 6 - 7 cyfr po przecinku
   * double  8   podwójna precyzja - dokładność 15 - 16 cyfr po przecinku
   * long double   12  liczby z ogromną dokładnością - 19 - 20 cyfr po przecinku */


	return 0;
}
