/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Instrukcja While w C++
 * v0.01
 */

#include <iostream>
using namespace std;

int main()
{   
  int i = 5;
  cout << i << endl;

  while(i < 10) i++; ///< po wykonaniu petli i = 10
  cout << i << endl;

  while(i++){
    cout << i << " ";
    if(i==15) break; ///< jesli wynosi 15 to przerywamy wykonywanie petli
  }

  while(true) goto etykieta1; ///< skok do etykiety
  cout <<"Czy kiedykolwiek sie pojawie?"<< endl;

etykieta1:
  cout << endl;
  while(i <= 20) { ///< wyswietla liczby 15, 16, 17, 19 i 20
    if(i==18) {
      i++;
      continue; 
    }
    cout << i++ <<" ";
  }
  cout << endl;
}
