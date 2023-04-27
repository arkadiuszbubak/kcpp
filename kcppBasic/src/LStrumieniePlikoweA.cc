/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10 v0.01; 2023.04.27 v0.02
 * \brief Strumienie w C++
 * v0.02
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
  ofstream f("log.txt");

  string fullName;

  cout << "Type your full name (then press Enter): \n";
  cin >> fullName;
  //getline (cin, fullName);

  cout << "Your name is: " << fullName << endl;;

  if (f.good())
  {
    f << fullName;
    f.close();
  }
  return 0;
}
