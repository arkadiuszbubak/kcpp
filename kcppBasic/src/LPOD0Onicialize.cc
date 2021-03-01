/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2021.02.01
 * \brief POD 0 inicialization in C++
 * v0.01
 */

#include<iostream>
using namespace std;

struct does_not_default_initialize
{
  int x;          // does not default initialize
  std::string s;  // default initializes
};

struct default_initializes
{
  int x;
  std::string s;
  default_initializes(): x{0} { } // default ctor initializes x
};


int main()
{
  int a;
  int b = 7;
  cout <<"a: " << a << endl;
  cout <<"b: " << b << endl;

  does_not_default_initialize DNDI;
  cout <<"int from struct: " << DNDI.x << endl;
  cout <<"str from struct: " << DNDI.s << endl;

  //napisz swoj wlasny program z deklaracja int (tylko i wylacznie z jedna deklaracja) i sprawdz
  return 0;
}
