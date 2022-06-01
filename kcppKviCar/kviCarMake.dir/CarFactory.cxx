/* Author: Arkadiusz Bubak
   mail: arkadiusz@bubak.pl
   date: 2008.02.22
 */

#include "KviCar.h"
#include "KviVan.h"
#include <iostream>
using namespace std;

int main() {



  cout <<"\n-----------------  KviCar -------------------------------"<< endl;

  KviCar *myCar = new KviCar();
  myCar->SetPlate(100);
  myCar->SetFakePlate(101);
  myCar->SetColor(102);
  myCar->Print();

  cout <<"Plate No:     "<< myCar->GetPlate()     << endl;
  cout <<"FakePlate No: "<< myCar->GetFakePlate() << endl;
  cout <<"Color No:     "<< myCar->GetColor()     << endl;
  

  cout <<"\n------------------ KviVan -------------------------------"<< endl;

  KviVan *myVan = new KviVan();
  myVan->StealPlate();
  myVan->SetPlate(200);
  myVan->SetFakePlate(201);
  myVan->SetColor(202);

  cout <<"Plate No:     "<< myVan->GetPlate()     << endl;
  cout <<"FakePlate No: "<< myVan->GetFakePlate() << endl;
  cout <<"Color No:     "<< myVan->GetColor()     << endl;
}	
