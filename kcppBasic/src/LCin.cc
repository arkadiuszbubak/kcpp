/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.04.02
 * \brief cin in c++
 * v0.01
 */

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]){

  if(argc > 1){

    if(argv[1] == string("0")){
      char cVar0;
      cout << "Podaj wartosc: ";
      cin >> cVar0;                 // porównaj do "2"
      cout <<"cVar0: "<< cVar0 << endl;


     // Porównaj powyższe do: --------------------
     char cVar01;
     //cVar01 = "error";  ///<error
     //cVar01 = "e"; ///< error
     //cVar01 = 'errorx'; ///< warning
     cVar01 = 'e';
     cout <<"cVar01: "<< cVar01 << endl;
    //--------------------------------------------
    }

    if(argv[1] == string("1")){
      char cVar1[10];
      cout << "Podaj wartosc: ";
      cin >> cVar1;
      cout <<"cVar1[10]: "<< cVar1 << endl;
    }


    if(argv[1] == string("2")){
      char *cVar2;
      cout << "Podaj wartosc: ";
      cin >> cVar2;                     ///< ERROR, ale nie podczas kompilacji
    }
  }
  return 0;
}
