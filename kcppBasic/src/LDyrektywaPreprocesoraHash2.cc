/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2024.04.15
 * \brief Characters w C++
 * v0.01
 */

#include <iostream>
using namespace std;

#define c1Variable(L,N,K) int L##N[K];

int main()
{

  c1Variable(f,Zmienna,30);

  fZmienna[5] = 7;
  cout <<"Value: " fZmienna[5] << endl;

  return 0;
}
