/* Author: Arkadiusz Bubak
   mail: arkadiusz@bubak.pl
   date: 2008.02.22
 */

#include "WorkExampleZero.h"
#include <iostream>
using namespace std;

int main() {

  cout << "\n-----------------  WorkExampleZero -------------------------------"
       << endl;

  WorkExampleZero *myWork = new WorkExampleZero();
  myWork->SetVariable(100);

  cout << "Work no:     " << myWork->GetVariable() << endl;

  myWork->WorkExampleZeroA();
}
