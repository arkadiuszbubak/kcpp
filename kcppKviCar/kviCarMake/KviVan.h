/* Author: Arkadiusz Bubak
   mail: arkadiusz@buabk.pl
   date: 2008.02.22  v0.01
         2019.02.27. v0.02
 */
 
#ifndef KVIVAN_H
#define KVIVAN_H 1

#include "KviCar.h"

class KviVan : public KviCar
{
 public:
  KviVan();
  ~KviVan();

  void StealPlate();
  void MakeRobbery();

  //ClassDef(KviVan,1)
};

#endif
