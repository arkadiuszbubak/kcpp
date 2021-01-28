/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.02.21
 * \brief Typy danych w C++
 * v0.01
 */

#include<iostream>
using namespace std;

enum e_acompany {
    Audi,
    BMW, 
    Cadillac,  //problem jesli nie zainicjalisuje sie wartoscia 
    Ford,
    Jaguar, 
    Lexus, 
    Maybach = 7, 
    RollsRoyce, 
    Saab
  };

int main()
{
  e_acompany my_car_brand;
  my_car_brand = Ford;

  if (my_car_brand == Ford) 
    cout << "Hello, Ford-car owner!: " << BMW << endl;

  return 0;                              
}
