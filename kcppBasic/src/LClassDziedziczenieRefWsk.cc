/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: ~Dziedziczenie, referencja, wskazniki w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class A {
  public:
    void Funkcja() { cout <<"Metoda z klasy A"<< endl; }
};

class B : public A {
  public:
    void Funkcja() { cout <<"Metoda z klasy B"<< endl; } // metoda zredefiniowana
};

int main() {

  A a;
  B b;


#define ZMIANA

/* O metodzie decyduje typ wskaznika, a nie obiektu (porownanie z virtual) */
#ifdef ZMIANA
  A *p1 = &a;
  B *p2 = &b;
  A &r1 = a;
  B &r2 = b;
#else   
  A *p1 = &a;
  A *p2 = &b;
  A &r1 = a;
  A &r2 = b;
#endif

  a.Funkcja();
  b.Funkcja();
  p1->Funkcja();
  p2->Funkcja();
  r1.Funkcja();
  r2.Funkcja();


};
