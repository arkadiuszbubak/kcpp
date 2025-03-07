/**
 * @file LThis.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.03.11
 * @brief Demonstration of the `this` pointer in C++
 * @version v0.01
 *
 * This program demonstrates the use of the `this` pointer in C++. The `this`
 * pointer is a special pointer that holds the address of the current object. It
 * is used to access the object's members and to compare objects.
 */

#include <iostream>
using namespace std;

/**
 * @class LClassThis
 * @brief A class to demonstrate the use of the `this` pointer
 *
 * This class contains methods that use the `this` pointer to print the address
 * of the current object and to compare objects.
 */
class LClassThis {
public:
  /**
   * @brief Method to print the address of the current object
   *
   * This method uses the `this` pointer to print the address of the current
   * object.
   */
  inline void Method1() { cout << "Address: " << this << endl; }

  /**
   * @brief Method to print the address of the current object
   *
   * This method uses the `this` pointer to print the address of the current
   * object.
   */
  void Method2();

  /**
   * @brief Method to compare the current object with another object
   *
   * This method uses the `this` pointer to compare the current object with
   * another object passed as a reference.
   *
   * @param var A reference to another object of type `LClassThis`.
   */
  void Method3(LClassThis &var);
};

/**
 * @brief Implementation of `Method2`
 *
 * This method prints the address of the current object using the `this`
 * pointer.
 */
void LClassThis::Method2() {
  cout << "Address: " << this << endl;
  return;
}

/**
 * @brief Implementation of `Method3`
 *
 * This method compares the current object with another object using the `this`
 * pointer. It prints whether the objects are the same or different.
 *
 * @param var A reference to another object of type `LClassThis`.
 */
void LClassThis::Method3(LClassThis &var) {
  if (this == &var) {
    cout << "The same object" << endl;
  } else {
    cout << "Different object" << endl;
  }
}

/**
 * @brief Main function
 *
 * This is the entry point of the program. It creates two objects of the
 * `LClassThis` class and demonstrates the use of the `this` pointer by calling
 * the class methods.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  // Create two objects of the `LClassThis` class
  LClassThis object1, object2;

  // Call `Method1` and `Method2` to print the addresses of the objects
  object1.Method1();
  object1.Method2();
  object2.Method1();

  // Call `Method3` to compare the objects
  object1.Method3(object1); // Compare object1 with itself
  object2.Method3(object1); // Compare object2 with object1

  return 0;
}
