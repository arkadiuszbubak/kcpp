/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Przeciazenie funkcji w C++
 * v0.01
 */

#include <iostream>
using namespace std;

void dzialanie(int a, int b) {
   
   int r = a + b;
   cout <<"Dzialanie na int: "<< r << endl;
}

void dzialanie(double a, double b) {

   double r = a + b;
   cout <<"Dzialanie na double: "<< r << endl;
}

/* void dzialanie(int a, int b, int c = 0) {
 *
 *    int r = a - b;
 *    cout <<"Dzialanie na int: "<<  r << endl;
 * } */



int main()
{
   dzialanie(2,2);
   // dzialanie(2,2,2);
   dzialanie(2.1 ,2.2);
}
