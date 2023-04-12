/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.16 v0.01, 2023.04.12 v0.02
 * \brief Roznica pomiedzy g++ i gcc
 * v0.02
 */


#include <stdio.h>

void Funkcja(void)
{
   printf("Hello World!\n");
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
