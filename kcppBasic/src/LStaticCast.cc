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
  float c;

  //--C-like ----------------------------------------
  c = a/b;
  cout <<"-1: "<< c << endl;
  cout <<" 0: "<< a/b << endl;
  cout <<" 1: "<< (double)(a)/double(b) << endl;
  cout <<" 2: "<< (double)(a)/b << endl;
  cout <<" 3: "<< a/(double)(b) << endl;

  cout <<" 4: "<< (double)(a/b) << endl;   ///< niepoprawne
  cout <<" 5: "<< (double) a/b << endl;

  cout <<" 6: "<< double(a)/b  << endl;
  cout <<" 7: "<< a/double(b)  << endl;
  //-------------------------------------------------

  //--C++like----------------------------------------
  double c1 = static_cast<double>(a) / static_cast<double>(b);
  double c2 = static_cast<double>(a) /b;
  double c3 = static_cast<double>(a/b);  ///< niepoprawne rzutowanie
  // double c4 = static_cast<double> a/b; ///< ERROR
  //-------------------------------------------------
  std::cout << endl << ">> C++like" << endl;
  std::cout <<"c1: "<< c1 << endl;
  std::cout << std::fixed << std::setprecision(3)  <<"c1: "<< c1 << endl;
  std::cout << std::fixed << std::setprecision(6)  <<"c2: "<< c2 << endl;
  std::cout << std::fixed << std::setprecision(9)  <<"c2: "<< c2 << endl;
  std::cout << std::fixed << std::setprecision(12) <<"c3: "<< c3 << "\t << niepoprawne rzutowanie" <<endl;

  
  //--------------------------------------------------
  cout << endl;

/*   int i1 = 6;
 *   cout <<" i1.0: "<< i1 << endl;
 *   std::cout << std::fixed << std::setprecision(3) <<" i1.1: "<< i1 << endl;
 *   cout << endl;
 *
 *   double d1 = (double)i1;               ///< C-like
 *   cout <<" d1.1: "<< d1 << endl;
 *   std::cout << std::fixed << std::setprecision(3) <<" d1.2: "<< d1 << endl;
 *   cout << endl;
 *
 *   double d2 = static_cast<double>(i1);  ///< C++-like
 *   cout <<" d2.1: "<< d2 << endl;
 *   std::cout << std::fixed << std::setprecision(3) <<" d2.2: "<< d1 << endl;
 *   cout << endl;
 *
 *   double pi  = 3.14159265;
 *   cout <<" pi: "<< pi << endl;
 *   std::cout << std::fixed << std::setprecision(3) <<" pi: "<< pi << endl;
 *   cout << endl;
 *
 *   int    p1 = static_cast<int>(pi);
 *   cout <<" p1: "<< p1 << endl;
 *   std::cout << std::fixed << std::setprecision(3) <<" p1: "<< p1 << endl; */

	return 0;
}
