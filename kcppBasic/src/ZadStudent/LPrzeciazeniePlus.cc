#include <iostream>
using namespace std;

class Punkt {
public:
  int x, y;

  Punkt(int x, int y) : x(x), y(y) {}
  /* Punkt(int x, int y) {
   *   fX = x;
   *   fY = y;
   * } */

  Punkt operator+(const Punkt &other) {
    return Punkt(x + other.x, y + other.y);
    // return Punkt(fX + other.fX, fY + other.fY);
  }

  void wyswietl() { cout << "(" << x << ", " << y << ")" << endl; }
  /* void wyswietl() { cout << "(" << fX << ", " << fY << ")" << endl; }
   *
   * private:
   *   int fX;
   *   int fY; */
};

int main() {
  Punkt p1(2, 3), p2(4, 5);
  Punkt p3 = p1 + p2;
  p3.wyswietl();
  return 0;
}
