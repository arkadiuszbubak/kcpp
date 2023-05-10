/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Strumienie: manipulatory w C++
 * v0.01
 */

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

  int x = 7;
  float y = 8.123456789;

  cout <<"1: "<<x << endl;
  cout << setfill('x') << setw (10);
  cout << setw(10) << y << endl;
  cout << y << endl;
  cout <<"4: "<<" "<< y << endl;
  cout <<"5: "<<"\t"<< y << endl;

  /* float   4   pojedyncza precyzja - dokładność 6 - 7 cyfr po przecinku
   * double  8   podwójna precyzja - dokładność 15 - 16 cyfr po przecinku
   * long double   12  liczby z ogromną dokładnością - 19 - 20 cyfr po przecinku */

  return 0;
}
