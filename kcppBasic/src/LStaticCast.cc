/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.02.21
 * \brief Konwersja: static_cast w C++
 * v0.02
 */

#include <iostream>
#include <iomanip>
using namespace std;



int main(){
	int a = 3;
	int b = 9;
  // float c;

	//------------------------------------------
  // c = a/b;
  // cout <<"-1: "<< c << endl;
  // cout <<" 0: "<< a/b << endl;
  cout <<" 1: "<< (double)(a)/double(b) << endl;
	cout <<" 2: "<< (double)(a)/b << endl;
	cout <<" 3: "<< (double)(a/b) << endl;
	cout <<" 4: "<< (double) a/b << endl;
  // cout <<"5: "<< double(a)/b  << endl;
	// cout <<"6: "<< a/double(b)  << endl;
	//------------------------------------------

	//------------------------------------------
	double c1 = static_cast<double>(a) / static_cast<double>(b);
	double c2 = static_cast<double>(a) /b;
	double c3 = static_cast<double>(a/b);
  // double c4 = static_cast<double> a/b; //ERROR
	//------------------------------------------
  std::cout << std::fixed << std::setprecision(2) <<"c1: "<< c1 << endl;
  std::cout << std::fixed << std::setprecision(2) <<"c2: "<< c2 << endl;
  std::cout << std::fixed << std::setprecision(2) <<"c3: "<< c3 << endl;

  
	//------------------------------------------
  cout << endl;
  
  int i = 6;
	double d1 = (double)i;               //C-style cist
	cout <<"d1: "<< d1 << endl;

	double d2 = static_cast<double>(i);  //C++ cast
	cout <<"d2: "<< d2 << endl;

	double d = 3.14159265;
	int    k = static_cast<int>(d);
	cout <<"k: "<< k << endl;

	return 0;
}
