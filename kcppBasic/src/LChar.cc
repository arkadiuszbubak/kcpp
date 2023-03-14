/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Characters w C++
 * v0.01
 */

#include <iostream>
#include <cstring>
using namespace std;

int main(){

  char mystring1[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
  char mystring2[] = "Dzień dobry";
  char mystring3[12];	

  cout << "mystring1.0:  "<< mystring1 << endl;
  cout << "mystring2.0:  "<< mystring2 << endl;
  cout << "mystring3.0:  "<< mystring3 << endl;


  /* // Not allowed
   * char mystringA = "Hello";
   * char mystringC = { 'H', 'e', 'l', 'l', 'o', '\0' }; */


  // Assigning values to strings
  mystring3[0] = 'H';
  mystring3[1] = 'e';
  mystring3[2] = 'l';
  mystring3[3] = 'l';
  mystring3[4] = 'o';
  mystring3[5] = '\0';

  //Generally for assigning values to an array, and more specifically to a string of characters, a series of functions like strcpy are used. strcpy (string copy) is defined in the cstring (string.h) library and can be called the following way:
  //strcpy (string1, string2);

  strcpy(mystring3, "Dzien dobry");
  strcpy(mystring3, "Dzien dobry wszystkim"); ///<A co jesli tekst bedzie dluzszy niż 12 znaków?
  cout <<"mystring3.1: " <<mystring3 << endl;
  cout <<"mystring3.2: " <<mystring3[11] << endl;
  cout <<"mystring3.3: " <<mystring3[12] << endl;
  // cout <<"mystring3.4: " <<mystring3[37] << endl;


  // Partial copy
  char str1[]= "To be or not to be";
  char str2[40];
  char str3[40];

  /* copy to sized buffer (overflow safe): */
  strncpy ( str2, str1, sizeof(str2) );

  /* partial copy (only 5 chars): */
  strncpy ( str3, str2, 5 );

  cout <<"str1:\t"<< str1 << "\n"
    <<"str2:\t"<< str2 << "\n"
    <<"str3:\t"<< str3 << endl;

/*   //Prosze sprawdzic co robi sizeof
 *   int iTab[10];
 *   double dTab[10];
 *
 *   cout <<"iTab: "<< sizeof(iTab) << endl;
 *   cout <<"dTab: "<< sizeof(dTab) << endl; */


  /*from cstring
https://www.programiz.com/cpp-programming/library-function/cstring/strlen
strxfrm()
strcoll()
strlen()
strerror()
memset()
strtok()
strstr()
strspn()
strrchr()
strpbrk()
strcspn()
*/

  return 0;
}
