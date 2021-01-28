#ifndef DWAPLIKIC_H
#define DWAPLIKIC_H

#include <iostream>
using namespace std;

class KlasaA 
{
public:
   KlasaA();
   ~KlasaA();
   
   void DisplayZmienna();
   
   inline int  GetZmienna() { return fZmienna; }
   inline void SetZmienna(int zmienna) { fZmienna = zmienna; }
   
private:
   int fZmienna;
};

#endif
