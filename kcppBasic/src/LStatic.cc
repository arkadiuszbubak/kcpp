/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Static w C++
 * v0.01
 */

#include <iostream>
using namespace std;

int comp(int c);

int main(){
	int a = 5, b = -10;

	cout << comp(a) << ' ' << comp(b);
	cout << "\nFunkcja zostala wywolana " << comp(0) << " razy.\n";

	return 0;
}

int comp(int c) {
	static int ncall = 0;
	ncall++;
	if(!c)
		return ncall;
	return c;
}
