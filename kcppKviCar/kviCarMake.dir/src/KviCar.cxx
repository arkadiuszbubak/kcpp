/* Author: Arkadiusz Bubak
   mail: arkadiusz@buabk.pl
   date: 2008.02.22, v0.01
     		 2019.02.27, v0.02
 */
 
#include "KviCar.h"
#include <iostream>
using namespace std;

//ClassImp(KviCar);

KviCar::KviCar() {
  cout <<"The KviCar Object has been created" << endl;
};
KviCar::~KviCar() {
  cout <<"The KviCar Object has been destroyed" << endl;
};

void KviCar::Print() {

  cout <<"---------------------------------------"<< endl;
  cout <<"All about me:"<< endl;
  cout <<"---------------------------------------"<< endl;
  cout <<"Plate No.:     "<< fPlate     << endl;
  cout <<"FakePlate No.: "<< fFakePlate << endl;
  cout <<"Color:         "<< fColor     << endl;
  cout <<"---------------------------------------\n\n"<< endl;

}
