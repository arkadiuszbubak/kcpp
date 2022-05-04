/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2021.04.09
 * \brief Struct w C++
 * v0.01
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//---------------------------------------------
/* First struct creation method */
struct Person
{
  char name1[50];
  string name2;
  //char *name3;
  int age = 7;
  float salary;
};


//---------------------------------------------
/* Second struct creation method */
/* struct Person
 * {
 *   char name1[50];
 *   string name2;
 *   int age;
 *   float salary;
 * } person1, person2; */


/* Constructor in struct  */
struct PersonSt
{
  char name1[50];
  string name2;
  int age;
  float salary;
  /* PersonSt(){
   *   age = 18;
   * } */
  //PersonSt(int fAge, float fSalary) : age(fAge), salary(fSalary) {}
  //PersonSt() : age(18), salary(153) { }
} personSt1;
//};




//---- Union example -------------------------------------
union Nazwa
{
  int z1;
  float z2;
  double z3;
}nz;
//--------------------------------------------------------


int main()
{
  //-------------------------------------------
  Person person1, person2, person3;
  //struct Person person1, person2, person3;    ///< It is allowed as well
  //Person person3;
  //person1.age = 59;

  //struct Person person1 = { "Olaf", "Arek", 4, 4.5};   ///< ok
  //struct Person person2 = { "Olaf", "Arek", 4, 4.5};   ///< ok


  //person1.name1 = "Leon";   ///< Error using char (name1), ok in string (name2)
  //struct Person person1 = { "Olaf", "Bart", "Arek", 4, 4.5}; ///< Warning: ISO C++11 does not allow conversion string literal to 'char *'

  
  //strncpy(person1.name1, "Olaf", 5);
  //strncpy(person2.name1, "Arek", 5);
  //person1.name3 = "Arek";  ///< Warning: ISI C++11 does not allow conversion string literal to 'char *'

  cout << person1.name1 << endl;
  cout << person1.name2 << endl;
  //-------------------------------------------
  cout << person1.age << endl;

  
  //PersonSt personSt2(3, 18);
  //cout <<"Struct with initialization: "<<  personSt2.age << endl;




  //----- Union example ------------------------------------
  nz.z1 = 6;
  cout <<"nz.z1: "<< nz.z1 << endl;

  nz.z2 = 18;
  cout << nz.z2 << endl;

  cout << nz.z1 << endl;
  //--------------------------------------------------------


  return 0;
}
