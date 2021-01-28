/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.16
 * \brief Roznica pomiedzy g++i  gcc
 * v0.01
 */


//#include <stdio.h>
#include <iostream>

void Funkcja(void)
{
   //printf("Hello World!\n");
   std::cout <<"Hello, world!"<< std::endl;
}

int main(void)
{
   Funkcja();

   /* try:
    *   gcc LDifferenceGPPandGCCb.cc  -o gccb.out //ERROR
    *      when gcc compiles *.cc file, it will employ C++ compiler,
    *      but it only use defaults C and gcc helpers libraries during linkage stage,
    *      and won’t use stdc++ library so add -lstd++ 
    *   gcc LDifferenceGPPandGCCb.cc -lstdc++ -o gccb1.out
    *   g++ LDifferenceGPPandGCCb.cc -o gccb2.out
    *
    * run:
    *   readelf -s gccb1.out  | grep Funkcja
    *   readelf -s gccb2.out  | grep Funkcja
    *
    * */

}
