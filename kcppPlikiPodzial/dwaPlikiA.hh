#include <iostream>
using namespace std;

class KlasaA 
{
public:
   KlasaA() {}
   ~KlasaA() {}
   
   void DisplayZmienna() {
      cout <<"Wartosc zmiennel: "<< fZmienna << endl;
   }
   int  GetZmienna() { return fZmienna; }
   void SetZmienna(int zmienna) { fZmienna = zmienna; }
   
private:
   int fZmienna;
};
