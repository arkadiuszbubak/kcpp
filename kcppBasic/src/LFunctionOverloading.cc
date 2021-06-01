/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2021.06.01
 * \brief Overloading function in C++
 * v0.01
 */

#include <iostream>
using namespace std;


//--------------------------------------------
void Print(int i) {
  cout << " Here is int " << i << endl;
}

//--------------------------------------------
void Print(double  f) {
  cout << " Here is floati (double) " << f << endl;
}

//--------------------------------------------
void Print(float  f) {
  cout << " Here is float " << f << endl;
}

//--------------------------------------------
void Print(char const *c) {
  cout << " Here is char* " << c << endl;
}



//--------------------------------------------
int main() {

  print(10);
  print(10.10);
  print("dziesiec");

  return 0;
}
