/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Strumienie w C++
 * v0.01
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   string a;
   cout << "Nacisnij Enter aby zakonczyc zapis.\n";
   ofstream f("log.txt");
   cin >> a;
   if (f.good())
   {
      f << a;
      f.close();
   }
   return 0;
}
