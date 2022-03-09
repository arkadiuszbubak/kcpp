/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Przestrzenie nazw w C++
 * v0.01
 */

#include <iostream>
using namespace std;

//---------------------------
namespace nasza {
	int k = 7;
}
using namespace nasza;
//---------------------------



int main(){
	//std::cout << "Test" << std::endl;
	cout << "Test" << endl;

  int k = 6;

  cout << nasza::k << endl;
  cout << k << endl;


	return 0;
}
