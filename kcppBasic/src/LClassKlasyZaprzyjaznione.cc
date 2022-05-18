/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Klasy zaprzyjaznione w C++
 * v0.01
 */

#include <iostream>
using namespace std;

//-----------------------------------------------------------
class A 
{
  public:
    void SetValue(int A, int B) {
      fZmiennaA = A;
      fZmiennaB = B;
    }
    void SetABZero() {
      fZmiennaA = fZmiennaB = 4;
    }

    friend void Pokaz(A&);
    friend class B;

  private:
    int fZmiennaA, fZmiennaB;

};

//-----------------------------------------------------------
class B 
{
  public:
    void ZerujA(A &obj) {
      obj.fZmiennaA = obj.fZmiennaB = 0;
      //obj.SetABZero(); //Gdy class B nie jest zaprzyjaźniona 
    }

};


//-----------------------------------------------------------
void Pokaz(A &obj){
  cout << obj.fZmiennaA << " " << obj.fZmiennaB << endl;;
}



//-----------------------------------------------------------
int main()
{
  A objA;
  objA.SetValue(7,8);
  Pokaz(objA);

  B objB;
  objB.ZerujA(objA);
  Pokaz(objA);

}
