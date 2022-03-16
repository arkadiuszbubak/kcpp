/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.02.21
 * \brief Type void in C++
 * v0.01
 */

#include<iostream>
using namespace std;

//------------------------------------
void FunctionA()
{
  cout <<"W funkcji FunctionA"<< endl;
  return;
}



//------------------------------------
void FunctionB(void)
{
  cout <<"W funkcji FunctionB"<< endl;
  //return;
}


//------------------------------------
int main()
{
  FunctionA();
  FunctionB();
  return 0;                              
}
