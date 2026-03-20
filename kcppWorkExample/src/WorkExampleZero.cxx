/* Author: Arkadiusz Bubak
   mail: arkadiusz@buabk.pl
   date: 2026.02.22, v0.01
 */

#include "WorkExampleZero.h"
#include <iostream>
using namespace std;

WorkExampleZero::WorkExampleZero() {
  cout << "The WorkExampleZero Object has been created" << endl;
};
WorkExampleZero::~WorkExampleZero() {
  cout << "The WorkExampleZero Object has been destroyed" << endl;
};

void WorkExampleZero::Print() {

  cout << "---------------------------------------" << endl;
  cout << "All about me:" << endl;
  cout << "---------------------------------------" << endl;
  cout << "Plate No.:     " << fPlate << endl;
  cout << "FakePlate No.: " << fFakePlate << endl;
  cout << "Color:         " << fColor << endl;
  cout << "---------------------------------------\n\n" << endl;
}
