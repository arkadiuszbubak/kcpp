/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.16
 * \brief Roznica pomiedzy g++ i gcc
 * v0.01
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
    *   gcc LDifferenceGPPandGCCa.c  -o gcca.out
    *   g++ LDifferenceGPPandGCCa.c  -o gppa.out
    * and
    *   gcc LDifferenceGPPandGCCa.cc -o gcca1.out 
    *
    * run for each compilation:
    *   readelf -s gcca.out  | grep Funkcja
    *   readelf -s gppa.out  | grep Funkcja
    *   readelf -s gcca1.out | grep Funkcja
    *
    * */

}
