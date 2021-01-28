/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.09
 * \brief Instrukcja switch w C++
 * v0.01
 */

#include <iostream>
using namespace std;

int main()
{

  short x;

  cout << "Podaj cyfre od 0 do 5: ";
  cin >> x;

  switch(x) {	
    case 0:
      cout << "Wybrano 0" << endl;
      break;
    case 1:
      cout << "Wybrano 1" << endl;
      break;
    case 2:
      cout << "Wybrano 2" << endl;
      break;
    case 3:
    case 4:
    case 5:
      cout << "Wybrano 3, 4 lub 5" << endl;
      break;
    default:
      cout << "Wybrana liczba nie zawiera się w [0,5]" << endl;
  }

  return 0;
}
