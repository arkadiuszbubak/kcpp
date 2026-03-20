/* Author: Arkadiusz Bubak
   mail: arkadiusz@buabk.pl
   date: 2026.03.20, v0.01
*/

#include "WorkExampleOne.h"
#include <iostream>
using namespace std;

WorkExampleOne::WorkExampleOne() {
  // cout <<"The WorkExampleOne Object has been created" << endl;
};
WorkExampleOne::~WorkExampleOne() {
  // cout <<"The WorkExampleOne Object has been destroyed" << endl;
};

void WorkExampleOne::StealPlate() {

  cout << "I am bad descendant. I use this function to stole the plate" << endl;
}

void WorkExampleOne::MakeRobbery() {

  cout << "Now yours bank accounts are empty" << endl;
}
