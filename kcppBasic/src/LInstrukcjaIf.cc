/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Instrukcja if w C++
 * v0.01
 */

#include <iostream>
using namespace std;

int main()
{   
  int x;
  cout << "Podaj liczba calkowita: ";
  cin >> x;

  if(x & 1) cout <<"Liczba nieparzysta."<< endl;
  else cout <<"Liczba parzysta."<< endl;

  if(x >= 9) {
    cout <<"Jestesmy poza ukladem slonecznym."<< endl;
    cout <<"--> Pluton juz nie jest planeta."<< endl;
  } else {
    cout <<"Ziemniaku: Jestes ciagle blisko swej planety"<< endl;
  }

  return 0;
}
