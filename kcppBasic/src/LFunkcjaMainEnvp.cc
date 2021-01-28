/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.06
 * \brief Funkcja main w C++
 * v0.01
 */

#include <iostream>
using namespace std;

#include <stdio.h>


/* The third argument envp gives the program’s environment;
 * it is the same as the value of environ. POSIX.1 does not allow this three-argument form,
 * so to be portable it is best to write main to take two arguments, and use the value of environ. 
*/

int main(int argc, char *argv[], char *envp[])
{

  cout <<"Liczba argumentow: "<< argc << endl;
  for (int i = 1; i < argc; i++) {
      cout << argv[i] << endl;
   }


  while(*envp) {
     printf("%s\n",*envp++);
  }

  return 0;
}
