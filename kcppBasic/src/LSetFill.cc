/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Manipulatory: setfill w C++
 * v0.01
 */

// setfill example
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	cout << setfill ('x') << setw (10);
	cout << 77 << endl;

	return 0;
}
