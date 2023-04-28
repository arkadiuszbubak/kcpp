/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2023.04.28
 * \brief Bitowe operatory logiczne w C++. Short example of setting 1 at requested position
 * v0.01
 */

#include <iostream>
using namespace std;

void printBinary(const unsigned char val) {
	for(int i = 7; i >= 0; i--)
		if(val & (1 << i))
			cout << "1";
		else
			cout << "0";
}

#define PR(STR, EXPR) \
	cout << STR <<"\t"; printBinary(EXPR); cout << endl;

int main() {

  //-------------------------------------------
  int k = 0;
  PR("Primary value equal 0",k);

  int position;
  for(int iter = 0; iter < 8; iter++){
    cin >> position;;
    k = k | (1 << position);
    PR("value equal: ",k);
  }
  // cout << k << endl;
  //--------------------------------------------

  return 0;
}
