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
  int age;
  float salary;
};


//---------------------------------------------
/* Second struct creation method */
/* struct Person
 * {
 *   char name[50];
 *   int age;
 *   float salary;
 * } person1, person2;
 *  */

int main()
{
  //-------------------------------------------
  struct Person person1, person2;
  person1.age = 59;

  //struct Person person1 = { "Olaf", "Arek", 4, 4.5};   ///< ok
  //struct Person person2 = { "Olaf", "Arek", 4, 4.5};   ///< ok


  //person1.name1 = "Olaf";   ///< Error
  //struct Person person1 = { "Olaf", "Bart", "Arek", 4, 4.5}; ///< Warning: ISI C++11 does not allow conversion string literal to 'char *'

  
  strncpy(person1.name1, "Olaf", 5);
  //strncpy(person2.name1, "Arek", 5);
  //person1.name3 = "Arek";  ///< Warning: ISI C++11 does not allow conversion string literal to 'char *'

  cout << person1.name1 << endl;
  //cout << person1.name2 << endl;
  //-------------------------------------------
  cout << person1.age << endl;

  return 0;
}
