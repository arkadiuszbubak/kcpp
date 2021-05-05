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
  int z1;
  float z2;
  double z3;
  //string st;  ///< Wrong 
} nz;




int main()
{
  // in one direction: first defined int
  nz.z1 = 6;
  cout <<"Correct int value:\t"<< nz.z1 << endl;

  nz.z2 = 18.1;
  cout <<"Correct int value:\t"<< nz.z2 << endl;
  cout <<"Wrong int value:\t"<< nz.z1 << endl;

  // and again
  nz.z1 = 7;
  cout <<"Correct int value:\t"<< nz.z1 << endl;
  cout <<"Wrong int value:\t"<< nz.z2 << endl;


/*   //---------------------------------------------------------
 *   // another way: first defined float
 *   nz.z2 = 6.7;
 *   cout <<"Correct int value:\t"<< nz.z2 << endl;
 *
 *   nz.z1 = 18;
 *   cout <<"Correct int value:\t"<< nz.z1 << endl;
 *   cout <<"Wrong int value:\t"<< nz.z2 << endl;
 *
 *   // and again
 *   nz.z2 = 7.8;
 *   cout <<"Correct int value:\t"<< nz.z2 << endl;
 *   cout <<"Wrong int value:\t"<< nz.z1 << endl; */

  return 0;
}
