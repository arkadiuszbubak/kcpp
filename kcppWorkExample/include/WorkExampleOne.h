/* Author: Arkadiusz Bubak
   mail: arkadiusz@buabk.pl
   date: 2026.03.20  v0.01
 */

#ifndef WorkExampleOne_H
#define WorkExampleOne_H 1

#include "WorkExampleZero.h"

class WorkExampleOne : public WorkExampleZero {
public:
  WorkExampleOne();
  ~WorkExampleOne();

  void StealPlate();
  void MakeRobbery();
};

#endif
