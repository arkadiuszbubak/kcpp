/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2021.04.21
 * \brief Characters w C++
 * v0.01
 * from: https://www.cplusplus.com/doc/tutorial/preprocessor/
 */

#include <iostream>
using namespace std;

int main()
{
  cout << "This is the line number " << __LINE__  <<" of file " << __FILE__ << ".\n";
  cout << "Its compilation began "   << __DATE__  <<" at "      << __TIME__ << ".\n";
  cout << "The compiler gives a __cplusplus value of " << __cplusplus;

  return 0;
}
