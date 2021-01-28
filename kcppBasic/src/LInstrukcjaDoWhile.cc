/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.04.22
 * \brief Instrukcja While i Do-While w C++
 * v0.01
 */

#include <iostream>
using namespace std;

int main()
{   
  int i = 0;
  //int  iMaxLoop = 5; //<- Opcja 1
  int  iMaxLoop = i; //<- Opcja 2


  cout <<"\n--- While ---------------------"<< endl;
  cout <<" before: "<< i << endl;

  while(i < iMaxLoop){
    i++; //po wykonaniu petli i = 5
    cout <<" inside: "<< i << endl;
  }
  cout <<"  after: "<< i << endl;


  cout <<"\n--- Do While ------------------"<< endl;
  i = 0;
  cout <<" before: "<< i << endl;
  
  do {
    i++;
    cout <<" inside: "<< i << endl;
  } while (i < iMaxLoop);
  cout <<"  after: "<< i << endl;
}
