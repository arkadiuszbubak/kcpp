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
  cout << " Here is float (double) " << f << endl;
}

/* //--------------------------------------------
 * void Print(float  f) {
 *   cout << " Here is float " << f << endl;
 * } */

//--------------------------------------------
void Print(char const *c) {
  cout << " Here is char* " << c << endl;
}



//--------------------------------------------
int main() {

  Print(13);
  Print(13.10);
  Print("trzynascie");

  return 0;
}
