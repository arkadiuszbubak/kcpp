/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2024.04.15
 * \brief Characters w C++
 * v0.01
 * example: paper/physics/pisa/PISA.dekodowanie/pisaSource2004.2022/decoder/src/DataStore.cc
 */

#include <iostream>
using namespace std;


int main()
{

  //--------------------------------------------------------------
#define to_string( s ) # s
  cout << to_string(Hello World!) << endl;



  //--------------------------------------------------------------
#define c1Variable(L,N,K) int L##N[K];
  c1Variable(f,Zmienna,30);

  fZmienna[5] = 7;
  cout <<"Value: "<< fZmienna[5] << endl;

  
#define concatenate(a, b) a ## b
	int xy = 10;
	cout << concatenate(x, y) << endl;
	cout << xy << endl;




  return 0;
}
