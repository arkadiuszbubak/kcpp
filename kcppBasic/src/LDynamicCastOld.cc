/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.02
 * \brief Konwersja: dynamic_cast w C++
 * v0.01
 */

#include <iomanip>
#include <iostream>
using namespace std;

//-----------------------------
class Car {
public:
  Car(){};
  ~Car(){};

  inline void Run() { cout << "Jestem w Car::Run" << endl; }
};

class Ford : public Car {
public:
  Ford(){};
  ~Ford(){};

  inline void Run() { cout << "Jestem w Ford::Run" << endl; }
};

//-----------------------------
//

int main() {
  Ford *fordTaurus = new Ford();
  fordTaurus->Run();

  Car *car1 = dynamic_cast<Car *>(fordTaurus);
  car1->Run();
  // fordTaurus->Run();
  // Car *car2 = new Ford();
  // car2->Run();

  delete fordTaurus;
  // delete car1;
  // delete car2;

  return 0;
}
