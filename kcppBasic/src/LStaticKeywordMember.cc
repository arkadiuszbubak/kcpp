/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10 v0.01, 2023.04.12 v0.02
 * \brief Static member w C++
 * v0.02
 */

#include <iostream>
using namespace std;

class LBox {
public:
  static int iObjectCount;

  /* static const int staticConstVar = 42; // Allowed in class
   * static constexpr double pi = 3.14159; // Allowed in class
   * static std::string message;           // Definition must be done outside
   * class */

  //! Constructor definition
  LBox(double l = 2.0, double w = 2.0, double h = 2.0) {
    cout << "Constructor called" << endl;
    dLength = l;
    dWidth = w;
    dHeight = h;

    //! Increase every time object is created
    iObjectCount++;
  }
  double Volume() { return dLength * dWidth * dHeight; }
  // constexpr int Square(int x) { return x * x; }

private:
  double dLength; //!< Length of a box
  double dWidth;  //!< Width of a box
  double dHeight; //!< Height of a box
};

//! Initialize static member of class Box
int LBox::iObjectCount = 0;
//! Definition outside the class
// string LBox::message = "Hello, world!";

int main(void) {
  LBox objectBox1(3.3, 1.2, 1.5); //!< Declare object box1
  LBox objectBox2(8.5, 6.0, 2.0); //!< Declare object box2

  // LBox *objectBox3 = new LBox(1, 4, 5);
  // LBox objectBox4;

  /* constexpr int result = objectBox1.Square(5);
   * cout << "Results from Square function: " << result << endl; */

  //! Print total number of objects
  cout << "Total objects: " << LBox::iObjectCount << endl;

  return 0;
}
