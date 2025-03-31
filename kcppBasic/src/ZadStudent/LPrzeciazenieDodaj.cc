#include <iostream>
#include <string>
using namespace std;

int dodaj(int a, int b) { return a + b; }

double dodaj(double a, double b) { return a + b; }

std::string dodaj(string a, string b) { return a + b; }

int main() {
  cout << dodaj(3, 5) << endl;
  cout << dodaj(3.5, 2.3) << endl;
  cout << dodaj("Hello, ", "World!") << endl;
  return 0;
}
