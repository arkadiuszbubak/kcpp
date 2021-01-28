/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Bitowe operatory logiczne w C++
 * v0.01
 */

#include <iostream>
using namespace std;

void printBinaryShort(const unsigned char val) {

	for(int i = 7; i >= 0; i--)
		if(val & (1 << i))
			//(1 << i) "wstawia 1 na kolejnych pozycjach"
			//(zmienna << ilosc_miejsc)
			cout << "1";
		else
			cout << "0";
}

void printBinaryLong(const int val) {

	for(int i = 15; i >= 0; i--)
		if(val & (1 << i))
			//(1 << i) "wstawia 1 na kolejnych pozycjach"
			//(zmienna << ilosc_miejsc)
			cout << "1";
		else
			cout << "0";
}

#define PRS(STR, EXPR) \
	cout << STR <<"\t"; printBinaryShort(EXPR); cout << endl;

#define PRL(STR, EXPR) \
	cout << STR <<"\t"; printBinaryLong(EXPR); cout << endl;

int main() {

	unsigned int a = 16626;
	int w;

	w = a << 3;

	PRL("a w binarnej notacji: ", a);
	PRL("w w binarnej notacji: ", w);

	PRS("a w binarnej notacji: ", a);
	PRS("w w binarnej notacji: ", w);

	return 0;
}
