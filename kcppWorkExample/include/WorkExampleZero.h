/* Author: Arkadiusz Bubak
mail: arkadiusz@buabk.pl
date: 2026.03.20, v0.01
*/

#ifndef WorkExampleZero_H
#define WorkExampleZero_H 1

class WorkExampleZero {
public:
  /** Default constructor **/
  WorkExampleZero();

  /** Default destructor **/
  ~WorkExampleZero();

  /** Modifiers **/
  void SetVariable(int rVariable) { fVariable = rVariable; };

  /** Accesors **/
  int GetVariable() { return fVariable; };

  void Print();

  // The function definition is in a separate file from the standard
  // function definitions for this class. This function definition
  // has been moved to a separate file, WorkExampleZeroOne.cxx, instead of
  // being in the WorkExampleZero.cxx class source file.
  void WorkExampleZeroA();
  void WorkExampleZeroB();
  void WorkExampleZeroC();

private:
  int fVariable;
};

#endif
