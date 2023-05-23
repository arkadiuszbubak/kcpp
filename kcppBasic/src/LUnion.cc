/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2021.05.06
 * \brief Union w C++
 * v0.01
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

union Nazwa
{
  int iVariable;
  float fVariable;
  double dVariable3;
  //string st;  ///< Wrong 
} nz;




int main()
{
  // in one direction: first defined int
  nz.iVariable = 6;
  cout <<"Correct int value:\t"<< nz.iVariable << endl;

  nz.fVariable = 18.1;
  cout <<"Correct float value:\t"<< nz.fVariable << endl;
  cout <<"Wrong int value:\t"<< nz.iVariable << endl;

  // and again
  nz.iVariable = 7;
  cout <<"Correct int value:\t"<< nz.iVariable << endl;
  cout <<"Wrong float value:\t"<< nz.fVariable << endl;


/*   //---------------------------------------------------------
 *   // another way: first defined float
 *   nz.fVariable = 6.7;
 *   cout <<"Correct float value:\t"<< nz.fVariable << endl;
 *
 *   nz.iVariable = 18;
 *   cout <<"Correct int value:\t"<< nz.iVariable << endl;
 *   cout <<"Wrong float value:\t"<< nz.fVariable << endl;
 *
 *   // and again
 *   nz.fVariable = 7.8;
 *   cout <<"Correct float value:\t"<< nz.fVariable << endl;
 *   cout <<"Wrong int value:\t"<< nz.iVariable << endl; */

  return 0;
}
