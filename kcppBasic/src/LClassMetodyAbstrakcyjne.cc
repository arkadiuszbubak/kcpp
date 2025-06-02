/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.05.15
 * \brief Klasy: Metody abstrakcyjne w C++
 * v0.02
 */

#include <iostream>
using namespace std;

//------------------------------------------------------------------
class Figura {
public:
  virtual void Narysuj() = 0;
};
//------------------------------------------------------------------

//------------------------------------------------------------------
class Trojkat : public Figura {
public:
  void Narysuj() { cout << "Przepis na narysowanie trojkata" << endl; }
};

//------------------------------------------------------------------
// class Kwadrat : public Figura
class Kwadrat : public Figura {
public:
  void Narysuj() { cout << "Przepis na narysowanie kwadrata" << endl; }
};

//------------------------------------------------------------------
class Prostokat : public Figura {
public:
  void Narysuj() { cout << "Przepis na narysowanie prostokata" << endl; }
};

//------------------------------------------------------------------
int main() {
  // Kwadrat *objKwadrat = new Kwadrat();
  Figura *objKwadrat = new Kwadrat();
  objKwadrat->Narysuj();

  // Figura fig;    //ERROR
  // Figura *fig = new Figura();    //ERROR
}
