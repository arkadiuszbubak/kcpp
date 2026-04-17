/* Author: Arkadiusz Bubak
mail: arkadiusz@bubak.pl
date: 2023.03.17, v0.01
*/

#include <iostream>
using namespace std;

class ClassExample {
public:
  /** Default constructor **/
  ClassExample() { cout << "Object created" << endl; };

  /** Default destructor **/
  ~ClassExample() { cout << "Object deleted" << endl; };

  /** Modifiers **/
  inline void SetVariable(int rvariable) {
    for (int i = 0; i < 7; i++) {
      cout << i << "\t";
    }
    cout << endl;
    fVariable = rvariable;
  };
  inline void SetVariableSingle(int rvariable) { fVariable = rvariable; };

  /** Accesors **/
  inline int GetVariable() { return fVariable; };

private:
  int fVariable;
};

int main() {

  ClassExample *object = new ClassExample();

  object->SetVariable(7);
  object->SetVariable(7);
  object->SetVariable(7);
  object->SetVariable(7);

  int var = object->GetVariable();
  cout << var << endl;

  delete object;
}
