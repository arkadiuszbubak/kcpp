/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Funkcja main w C++
 * v0.01
 */

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

  cout <<"Liczba argumentow: "<< argc << endl;
	for (int i = 1; i < argc; i++) {
		cout << argv[i] << endl;
	}

	return 0;     
}
