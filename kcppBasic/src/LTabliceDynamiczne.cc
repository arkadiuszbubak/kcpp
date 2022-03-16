/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Tablica dynamiczne w C++
 * v0.01
 */

#include <iostream>
#include <string.h>
using namespace std;

void tablice();

int main(){

  tablice();

  return 0;
}

void tablice(){
  int k;

  int   *tInt   = new int[7];
  float *tFloat = new float[7];
  char  *tChar  = new char[7];

  tInt[0] = 0;

  *(tInt+1) = 1;
  *(tFloat) = 3.14;

  strcpy(tChar, "abcd");

  for(k = 0; k < 7; k++){
    cout <<"tInt["<< k <<"]=" << *(tInt+k)<< endl;
  }

  cout <<"tFloat["<< 0 <<"]=" << *(tFloat+0)<< endl;

  delete tInt;
  delete [] tFloat;
  delete [] tChar;

}
