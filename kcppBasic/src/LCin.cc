/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.04.02
 * \brief cin in c++
 * v0.01
 */

#include <cstring>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  if (argc > 1) {

    if (argv[1] == string("0")) {
      // if (string(argv[1]) == "0") { ... }  //Better use it
      char cVar0;
      cout << "Podaj wartosc: ";
      cin >> cVar0; // porównaj do "2"
      cout << "cVar0: " << cVar0 << endl;

      // Porównaj powyższe do: --------------------
      char cVar01;
      // cVar01 = "error";  ///< error
      // cVar01 = "e";      ///< error
      // cVar01 = 'error';  ///< warning
      cVar01 = 'e';
      cout << "cVar01: " << cVar01 << endl;
      //--------------------------------------------
    }

    if (argv[1] == string("1")) {
      char cVar1[10];
      cout << "Podaj wartosc (A): ";
      cin >> cVar1; // Dangerous - no input length check
      cout << "cVar1[10]: " << cVar1 << endl;
    }

    if (argv[1] == string("2")) {
      char *cVar2; // Uninitialized pointer!
      cout << "Podaj wartosc (B): ";
      /* cin >> cVar2 will try to write to whatever memory address the pointer
       * contains This will almost certainly cause a segmentation fault */
      cin >> cVar2; // Writing to random memory location
      cout << "cVar2: " << cVar2 << endl;
    }
  }
  return 0;
}
