#include <cmath>
#include <iostream>
using namespace std;

const double PI = 3.141592653589793;

double pole(double bok) { // Kwadrat
  return bok * bok;
}

double pole(double bok1, double bok2) { // Prostokąt
  return bok1 * bok2;
}

double pole(double promien, bool kolo) { // Koło

  double polekola = (kolo == true) ? PI * promien * promien : 0;
  return polekola;
}

int main() {
  cout << "Pole kwadratu: " << pole(5.0) << endl;
  cout << "Pole prostokąta: " << pole(5.0, 10.0) << endl;
  cout << "Pole koła: " << pole(3, true) << endl;
  return 0;
}
