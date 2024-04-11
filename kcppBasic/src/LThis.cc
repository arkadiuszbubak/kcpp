/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.11
 * \brief Wskaznik this in C++
 * v0.01
 */

#include<iostream>
using namespace std;

class LClassThis
{
  public:
    inline void Method1() { cout << "Address: " << this << endl; }
    void Method2();
    void Method3(LClassThis &var);
};


//-----------------------------------------------
void LClassThis::Method2()
{
  cout << "Address: " << this << endl;
  return;
}


//-----------------------------------------------
void LClassThis::Method3(LClassThis &var) {
  if(this == &var){
    cout <<"The same object"<< endl;
  }
  else {
    cout <<"Different object"<< endl;
  }
}




//-----------------------------------------------
int main()
{
  LClassThis object1, object2;
  object1.Method1();
  object1.Method2();
  object2.Method1();

  object1.Method3(object1);
  object2.Method3(object1);


  return 0;
}
