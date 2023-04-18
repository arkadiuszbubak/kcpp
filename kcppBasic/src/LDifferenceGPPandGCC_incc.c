/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2022.04.14 v0.01,
 * \brief Roznica pomiedzy g++ i gcc
 * v0.01
 */


// #include<stdio.h>
#include<iostream>
using namespace std;

void Funkcja(void)
{
  // printf("Hello World!\n");
  cout << "Hello World" << endl;
}

int main(void)
{
   Funkcja();

   /* try:
    *   gcc LDifferenceGPPandGCC.c  -o gcc_c.out
    *   g++ LDifferenceGPPandGCC.c  -o gpp_c.out
    * and
    *   gcc LDifferenceGPPandGCC.cc -o gcc_cc.out 
    *   g++ LDifferenceGPPandGCC.cc -o gpp_cc.out
    * and
    *   gcc LDifferenceGPPandGCC.cxx -o gcc_cxx.out 
    *   g++ LDifferenceGPPandGCC.cxx -o gpp_cxx.out
    * and
    *   gcc LDifferenceGPPandGCC_bigC.C -o gcc_bigC.out 
    *   g++ LDifferenceGPPandGCC_bigC.C -o gpp_bigC.out
    *
    * run for each compilation:
    *   readelf -s gcc_c.out    | grep Funkcja
    *   readelf -s gpp_c.out    | grep Funkcja
    *
    *   readelf -s gcc_cc.out   | grep Funkcja
    *   readelf -s gpp_cc.out   | grep Funkcja
    *
    *   readelf -s gcc_cxx.out  | grep Funkcja
    *   readelf -s gpp_cxx.out  | grep Funkcja
    *
    *   readelf -s gcc_bigC.out   | grep Funkcja
    *   readelf -s gpp_bigC.out   | grep Funkcja
    * */

}
