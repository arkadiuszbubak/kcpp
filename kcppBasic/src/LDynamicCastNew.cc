/**
 * @file LDynamicCastNew.cc
 * @author Arkadiusz Bubak <arkadiusz@bubak.pl>
 * @date 2020.03.02
 * @brief Demonstration of `dynamic_cast` in C++
 * @version v0.02 (2025.02.28)
 *
 * This program demonstrates the use of `dynamic_cast` for safe downcasting in
 * C++. It shows how to cast a pointer from a base class to a derived class and
 * highlights the behavior of virtual functions in polymorphic classes.
 */

#include <iomanip>
#include <iostream>
using namespace std;

/**
 * @class Car
 * @brief Base class representing a generic car
 *
 * This class provides a basic implementation of a car with a `Run` method.
 */
class Car {
public:
  Car(){};          /**< Default constructor */
  virtual ~Car(){}; /**< Virtual destructor to ensure proper cleanup */

  /**
   * @brief Run method for the Car class
   *
   * This method prints a message indicating that the car is running.
   */
  virtual void Run() { cout << "Jestem w Car::Run" << endl; }
};

/**
 * @class Ford
 * @brief Derived class representing a Ford car
 *
 * This class inherits from the `Car` class and overrides the `Run` method.
 */
class Ford : public Car {
public:
  Ford(){};  /**< Default constructor */
  ~Ford(){}; /**< Destructor */

  /**
   * @brief Run method for the Ford class
   *
   * This method prints a message indicating that the Ford car is running.
   * The override keyword in C++ is used to indicate that a function in a
   * derived class overrides a virtual function from the base class. This helps
   * avoid errors such as accidentally overloading a function instead of
   * overriding it.
   */
  // void Run() { cout << "Jestem w Ford::Run" << endl; }
  void Run() override { cout << "Jestem w Ford::Run" << endl; }
};

/**
 * @brief Main function
 *
 * This program demonstrates the use of `dynamic_cast` to safely cast a pointer
 * from the base class (`Car`) to the derived class (`Ford`). It also shows the
 * behavior of virtual functions in polymorphic classes.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  // Create a Ford object
  Ford *fordTaurus = new Ford();
  fordTaurus->Run(); // Output: Jestem w Ford::Run

  // Use dynamic_cast to cast Ford* to Car*
  Car *car1 = dynamic_cast<Car *>(fordTaurus);
  if (car1) {
    car1->Run(); // Output: Jestem w Ford::Run (due to virtual function)
  } else {
    cout << "Dynamic cast failed!" << endl;
  }

  // Clean up dynamically allocated memory
  delete fordTaurus;

  return 0;
}
