/* Author: Arkadiusz Bubak
mail: arkadiusz@bubak.pl
date: 2023.03.17, v0.01
*/

#include<iostream>
using namespace std;

class ClassExample
{
  public:
    /** Default constructor **/
    ClassExample() {
      cout << "Object created" << endl;
    };

    /** Default destructor **/
    ~ClassExample() {
      cout << "Object deleted" << endl;
    };

    /** Modifiers **/
    inline void SetVariable(int rvariable) {
      for(int i = 0; i < 10; i++) cout << i << endl;
      fVariable     = rvariable;
    };
    // void SetVariable(int rvariable)       { fVariable     = rvariable; };

    /** Accesors **/
    int GetVariable()     { return fVariable; };

  private:
    int fVariable;

};


int main(){

  ClassExample *object = new ClassExample();

  object->SetVariable(10);
  /* object->SetVariable(10);
   * object->SetVariable(10);
   * object->SetVariable(10); */

  int var = object->GetVariable();
  cout << var << endl;

  delete object;
}
