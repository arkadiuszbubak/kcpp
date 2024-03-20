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
    Cadillac, 
    Ford,
    Jaguar, 
    Lexus, 
    Maybach = 13, 
    RollsRoyce, 
    Saab
  };



//----------------------------------------------------------------------------------------------
/*! Scoped enumerations (also known as strongly-typed enums) were introduced in C++11.
 * The enumerators are declared within the scope of the enumeration itself.
 * You need to qualify the enumerator names with the enumeration name.
 */

enum class ScopedTypes {
    Int,
    Double,
    String
};

enum UnscopedTypes {
    Int,
    Double,
    String
};
//----------------------------------------------------------------------------------------------



int main()
{
  e_acompany my_car_brand = Ford;
  // my_car_brand = Ford;            //! Można też tak
  // enum e_acompany my_car_brand;   //! Można też tak
  // my_car_brand = BMW;

  if(my_car_brand == Ford) { 
    cout << "Hello, Ford-car owner! Audi:       " << Audi << endl;
    cout << "Hello, Ford-car owner! BMW:        " << BMW  << endl;
    cout << "Hello, Ford-car owner! Cadillac:   " << Cadillac << endl;
    cout << "Hello, Ford-car owner! Ford:       " << Ford << endl;
    cout << "Hello, Ford-car owner! Maybach:    " << Maybach << endl;
    cout << "Hello, Ford-car owner! RollsRoyce: " << RollsRoyce << endl;
  }

  


//----------------------------------------------------------------------------------------------
 /* ScopedTypes a = ScopedTypes::Double; // Correct
  * // ScopedTypes b = Double; // Error: Requires qualification
  * UnscopedTypes c = UnscopedTypes::Double;
  * UnscopedTypes d = Double; */


 cout << UnscopedTypes::Int << endl;
 cout << UnscopedTypes::Double << endl;
 cout << UnscopedTypes::String << endl;
 cout << Int << endl;
 cout << Double << endl;
 cout << String << endl;

//----------------------------------------------------------------------------------------------

  return 0;                              
}
