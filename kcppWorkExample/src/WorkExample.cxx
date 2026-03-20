/* Author: Arkadiusz Bubak
   mail: arkadiusz@bubak.pl
   date: 2008.02.22
 */

#include "WorkExampleOne.h"
#include "WorkExampleZero.h"
#include <iostream>
using namespace std;

int main() {

  cout << "\n-----------------  WorkExampleZero -------------------------------"
       << endl;

  WorkExampleZero *myCar = new WorkExampleZero();
  myCar->SetPlate(100);
  myCar->SetFakePlate(101);
  myCar->SetColor(102);
  myCar->Print();

  cout << "Plate No:     " << myCar->GetPlate() << endl;
  cout << "FakePlate No: " << myCar->GetFakePlate() << endl;
  cout << "Color No:     " << myCar->GetColor() << endl;

  cout << "\n------------------ WorkExampleOne -------------------------------"
       << endl;

  WorkExampleOne *myVan = new WorkExampleOne();
  myVan->StealPlate();
  myVan->SetPlate(200);
  myVan->SetFakePlate(201);
  myVan->SetColor(202);

  cout << "Plate No:     " << myVan->GetPlate() << endl;
  cout << "FakePlate No: " << myVan->GetFakePlate() << endl;
  cout << "Color No:     " << myVan->GetColor() << endl;

  myCar->WorkExampleA();
}
