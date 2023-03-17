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
    void SetVariable(int rvariable)       { fVariable     = rvariable; };

    /** Accesors **/
    int GetPlate()     { return fVariable; };

  private:
    int fVariable;

};


int main(){

  ClassExample *object = new ClassExample();

}
