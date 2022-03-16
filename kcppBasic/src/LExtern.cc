/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.05
 * \brief Extern "C" C++
 * v0.01
 */

#include<iostream>
using namespace std;


void a() {}
void b() {}
void b(int zmienna) {
  zmienna = 0;
}


#ifdef __cplusplus
extern "C" {
#endif
  void ca() {}
  void cb() {}
  //void cb(int a) {}  // Error
#ifdef __cplusplus
}
#endif


extern "C" void cc(){}

//------------------------------------------
void h()
{
  b();
  cb();
  cc();
  //b(2);
}


int main()
{
  cout <<"Samodzielna kompilacja:"<< endl;
  cout <<"  g++ -c -std=c++11 -Wall -Wextra -pedantic -o LExtern.o ../src/LExtern.cc"<< endl; 
  cout <<"Rozmontowanie/odwiklanie (diassemble):"<< endl;
  cout <<"  readelf -s LExtern.o\n" << endl;

  cout <<"Lub jesli z uzyciem cmake:"<< endl;
  cout <<"  readelf -s CMakeFiles/LExtern.dir/src/LExtern.cc.o\n"<< endl;

  cout <<"'Unmangle' nazw funkcji:"<< endl;
  cout <<"  c++filt _Z1fv"<< endl;

  return 0;                              
}
