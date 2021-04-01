/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Zastepstwo instrukcji goto C++
 * v0.01
 */

#include <iostream>
using namespace std;

void GotoInstead(){
  cout <<"Inside function"<< endl;
  int k;

  cout <<"Podaj wartość: ";
  cin >> k;
  if(k<0){
    GotoInstead();
  }
}

int main()
{
  GotoInstead();

  return 0;
}
