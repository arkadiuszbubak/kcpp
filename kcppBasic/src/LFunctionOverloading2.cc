/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Przeciazenie funkcji w C++
 * v0.01
 */

#include <iostream>
using namespace std;

void dzialanie(int a, int b) {
   
   cout <<"Dzialanie na int"<< endl;
   int r = a + b;
   cout << r << endl;
}

void dzialanie(double a, double b) {

   cout <<"Dzialanie na double"<< endl;   
   double r = a + b;
   cout << r << endl;
}

/* void dzialanie(int a, int b, int c = 0) {
 *
 *    cout <<"Dzialanie na int"<< endl;
 *    int r = a - b;
 *    cout << r << endl;
 * } */



int main()
{
   dzialanie(2,2);
   dzialanie(2.1 ,2.2);
}
