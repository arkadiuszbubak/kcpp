/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.049
 * \brief instrukcja goto w C++
 * v0.01
 */

#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
tryAgain:           // etykieta
  cout << "Wpisz dodatnia liczbe: ";

  double dX;
  cin >> dX;

  if (dX < 0.0) goto tryAgain;

  cout << "The sqrt of " << dX << " is " << sqrt(dX) << endl;
}
