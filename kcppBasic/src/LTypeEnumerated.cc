/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.02.21
 * \brief Typy danych w C++
 * v0.02 (2021.03.01)
 */

/* Information
 * ---------------------------------------------------------------------------------------------------
 *              enum name(optional) { enumerator = constexpr , enumerator = constexpr , ... }
 * since C++11: enum name(optional) : type { enumerator = constexpr , enumerator = constexpr , ... }
 * since C++11: enum name : type;
 * enum Foo { a, b, c = 10, d, e = 1, f, g = f + c };
 * //a = 0, b = 1, c = 10, d = 11, e = 1, f = 2, g = 12
 *
 * enum color { red, yellow, green = 20, blue };
 * color col = red;
 * int n = blue; // n == 21
 *
 * enum { a, b, c = 0, d = a + 2 }; // defines a = 0, b = 1, c = 0, d = 2
 * ----------------------------------------------------------------------------------------------------
 *  */

#include<iostream>
using namespace std;

enum e_acompany {
    Audi,
    BMW, 
    Cadillac,  //problem jesli nie zainicjalisuje sie wartoscia 
    Ford,
    Jaguar, 
    Lexus, 
    Maybach = 13, 
    RollsRoyce, 
    Saab
  };


int main()
{
  e_acompany my_car_brand;
  my_car_brand = Ford;
  //my_car_brand = BMW;

  if(my_car_brand == Ford) { 
    cout << "Hello, Ford-car owner!: " << Audi << endl;
    cout << "Hello, Ford-car owner!: " << BMW  << endl;
    cout << "Hello, Ford-car owner!: " << Cadillac << endl;
    cout << "Hello, Ford-car owner!: " << Ford << endl;
    cout << "Hello, Ford-car owner!: " << Maybach << endl;
    //cout << "Hello, Ford-car owner!: " << RollsRoyce << endl;
  }
  return 0;                              
}
