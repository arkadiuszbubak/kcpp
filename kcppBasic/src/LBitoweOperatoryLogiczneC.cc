/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2023.04.28
 * \brief Bitowe operatory logiczne w C++
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
  //Short example of setting 1 at requested position
  //Proszę napisać samodziely program który jako argument będzie przyjmował tablice 8
  //elementową, gdize na poszczególnych pozycjach tablicy będize 0 lub 1. Program będzie
  //zwracał liczbę, która w formi bonarnej będzie miała ustawione 1 na pozycjach odpowiadających
  //pozycjom 1 w tablicy. Wystarczy zmodyfikować poniższy program
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
