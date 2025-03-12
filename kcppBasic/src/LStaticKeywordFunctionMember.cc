/**
 * @file LStaticKeywordMemberFunction.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.03.11 v0.01, 2025.02.28 v0.02
 * @brief Demonstration of static member functions in C++
 * @version v0.02
 *
 * By declaring a function member as static, you make it independent of any
 * particular object of the class. A static member function can be called even
 * if no objects of the class exist, and the static functions are accessed using
 * only the class name and the scope resolution operator `::`. A static member
 * function can only access static data members, other static member functions,
 * and any other functions from outside the class. Static member functions have
 * a class scope and do not have access to the `this` pointer of the class.
 * You could use a static member function to determine whether some objects of
 * the class have been created or not.
 */

#include <iostream>
using namespace std;

/**
 * @class LBox
 * @brief Represents a box with length, width, and height
 *
 * This class demonstrates the use of a static member function to access a
 * static data member that tracks the number of objects created.
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
    cout << "Constructor called." << endl;
    dLength = l;
    dWidth = w;
    dHeight = h;

    // Increment the object count every time an object is created
    iObjectCount++;
  }

  /**
   * @brief Destructor for LBox
   */
  ~LBox() {}

  /**
   * @brief Calculates the volume of the box
   *
   * @return double Volume of the box (length * width * height)
   */
  inline double GetVolume() { return dLength * dWidth * dHeight; }

  /**
   * @brief Static member function to get the object count
   *
   * This function can be called without an object and returns the number of
   * objects created so far.
   *
   * @return int Number of objects created
   */
  static int GetCount() { return iObjectCount; }

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
 * This program demonstrates the use of a static member function in a class to
 * access a static data member that tracks the number of objects created. It
 * creates two `LBox` objects and prints the total number of objects before and
 * after their creation.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  // Print the total number of objects before creating any objects
  cout << "Initial Stage Count: " << LBox::GetCount() << endl;

  // Create two LBox objects
  LBox objectBox1(4.1, 2.2, 3.6); // Declare object objectBox1
  LBox objectBox2(4.7, 2.3, 4.1); // Declare object objectBox2

  // Print the total number of objects after creating objects
  cout << "Final Stage Count outside of object:       " << LBox::GetCount()
       << endl;
  cout << "Final Stage Count call as object function: " << objectBox1.GetCount()
       << endl;

  return 0;
}
