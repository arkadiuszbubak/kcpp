/**
 * @file LStaticKeywordMember.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2019.02.10 v0.01, 2023.04.12 v0.02, 2025.02.28 v0.03
 * @brief Demonstration of static members in C++
 * @version v0.03
 */

#include <iostream>
using namespace std;

/**
 * @class LBox
 * @brief Represents a box with length, width, and height
 *
 * This class demonstrates the use of a static member to track the number of
 * objects created.
 */
class LBox {
public:
  static int
      iObjectCount; /**< Static member to count the number of objects created */

  /**
   * @brief Constructor for LBox
   *
   * Initializes the dimensions of the box and increments the object count.
   *
   * @param l Length of the box (default: 2.0)
   * @param w Width of the box (default: 2.0)
   * @param h Height of the box (default: 2.0)
   */
  LBox(double l = 2.0, double w = 2.0, double h = 2.0) {
    cout << "Constructor called" << endl;
    dLength = l;
    dWidth = w;
    dHeight = h;

    // Increment the object count every time an object is created
    iObjectCount++;
  }

  /**
   * @brief Calculates the volume of the box
   *
   * @return double Volume of the box (length * width * height)
   */
  double Volume() { return dLength * dWidth * dHeight; }

private:
  double dLength; /**< Length of the box */
  double dWidth;  /**< Width of the box */
  double dHeight; /**< Height of the box */
};

// Initialize the static member of class LBox
int LBox::iObjectCount = 0;

/**
 * @brief Main function
 *
 * This program demonstrates the use of a static member variable in a class to
 * track the number of objects created. It creates two `LBox` objects and prints
 * the total number of objects.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  // Create two LBox objects
  LBox objectBox1(3.3, 1.2, 1.5); /**< Declare object box1 */
  LBox objectBox2(8.5, 6.0, 2.0); /**< Declare object box2 */

  // Print the total number of objects created
  cout << "Total objects: " << LBox::iObjectCount << endl;

  return 0;
}
