/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Strumienie: manipulatory w C++
 * v0.01
 */

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	int x = 7;
	float y = 8.123456789;

	cout << x << endl;
	cout << setfill ('x') << setw (10);
	cout << setw (10) << y << endl;
	cout << y << endl;
  cout <<"  "<< y << endl;
  cout <<"\t"<< y << endl;


	return 0;
}
