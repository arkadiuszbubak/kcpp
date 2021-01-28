/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.05.08
 * \brief Klasy: Virtual destruktor w C++
 * v0.01
 */

#include<iostream>
using namespace std;

class Base
{
  public:
    Base(){ cout<<"Constructor: Base"<<endl;}
    ~Base(){ cout<<"Destructor : Base"<<endl;}
    //virtual ~Base(){ cout<<"Destructor : Base"<<endl;}
};

class Derived: public Base
{
  public:
    Derived() { cout<<"Constructor: Derived"<<endl;}
    ~Derived() { cout<<"Destructor:  Derived"<< endl;}
};


int main()
{
  Derived *Var1 = new Derived();
  delete Var1;

  cout <<"--------------------"<< endl;

  Base *Var2 = new Derived();
  delete Var2;
}
