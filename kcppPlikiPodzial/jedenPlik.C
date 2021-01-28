#include <iostream>
using namespace std;

class KlasaA 
{
public:
   KlasaA() {}
   ~KlasaA() {}
   
   void DisplayZmienna() {
      cout <<"Wartosc zmiennej: "<< fZmienna << endl;
   }
   int  GetZmienna() { return fZmienna; }
   void SetZmienna(int zmienna) { fZmienna = zmienna; }
   
private:
   int fZmienna;
};

int main()
{
   int zmienna = 0;
   KlasaA *obj = new KlasaA();

   cout <<"Podaj zmienna: ";
   cin >> zmienna;
   obj->SetZmienna(zmienna);
   obj->DisplayZmienna();
   
   int innaZmienna = obj->GetZmienna() + 7;
   cout <<"Wartosc zmiennej: "<< innaZmienna << endl;
   cout <<"Wartosc zmiennej: "<< obj->GetZmienna() << endl; 

   return 0;
}
