#include <cmath>
#include <iostream>
using namespace std;

int potega(int x, int y) { return std::pow(x, y); }

double potega(double x, double y) { return std::pow(x, y); }

int main() {
  cout << potega(2, 3) << endl;
  cout << potega(2.5, 3.0) << endl;
  return 0;
}
