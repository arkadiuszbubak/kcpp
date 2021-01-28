/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.09
 * \brief Cout whole array in C++
 * v0.01
 */

#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>
 
int main()
{
   int  iArray[] = {1,2,3,4,5,6,7};

   int iSize = sizeof(iArray)/sizeof(iArray[0]);
   //int iSize = *(&iArray + 1) - iArray;

   std::copy(iArray, iArray+iSize, std::ostream_iterator<int>(std::cout," "));
   //std::copy(std::begin(iArray), std::end(iArray), std::ostream_iterator<int>(std::cout," "));
   
   std::cout << std::endl;

   /* Wyjasnienie drugiego sposoby dostanie wielkosci tablicy bez uzycia sizeof
    * &arr              ==> Pointer to an array of 6 elements.
    * (&arr + 1)        ==> Address of 6 integers ahead as pointer type is pointer to array of X integers.
    * *(&arr + 1)       ==> Same address as (&arr + 1), but type of pointer is "int *"
    * *(&arr + 1) - arr ==> Since *(&arr + 1) points to the address X integers ahead of arr, the difference  between two is X      */
}
