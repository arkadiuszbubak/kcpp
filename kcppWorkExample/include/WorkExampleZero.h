/* Author: Arkadiusz Bubak
mail: arkadiusz@buabk.pl
date: 2026.03.20, v0.01
*/

#ifndef WorlExampleZero_H
#define WorlExampleZero_H 1

class WorkExampleZero {
public:
  /** Default constructor **/
  WorkExampleZero();

  /** Default destructor **/
  ~WorkExampleZero();

  /** Modifiers **/
  void SetPlate(int rplate) { fPlate = rplate; };
  void SetFakePlate(int fplate) { fFakePlate = fplate; };
  void SetColor(int color) { fColor = color; };

  /** Accesors **/
  int GetPlate() { return fPlate; };
  int GetFakePlate() { return fFakePlate; };
  int GetColor() { return fColor; };

  void Print();

  // The function definition is in a separate file from the standard
  // function definitions for this class. This function definition
  // has been moved to a separate file, WorkExampleZeroOne.cxx, instead of
  // being in the WorkExampleZero.cxx class source file.
  void WorkExampleA();

private:
  int fPlate;
  int fFakePlate;
  int fColor;
};

#endif
