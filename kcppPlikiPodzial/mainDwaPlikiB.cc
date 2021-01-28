#include "dwaPlikiB.hh"

KlasaA::KlasaA(){}
KlasaA::~KlasaA(){}

void KlasaA::DisplayZmienna()
{
   cout <<"Wartoss zmiennej: "<< fZmienna << endl;
}

//------------------------------------------------

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
