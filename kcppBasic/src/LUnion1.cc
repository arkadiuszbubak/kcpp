#include <iostream>
#include <cstdlib>
using namespace std;


void dec_to_bin(int liczba)
{
    int i=0,tab[31];

    while(liczba) //dopóki liczba będzie różna od zera
    {
        tab[i++]=liczba%2;
        liczba/=2;
    }

    for(int j=i-1;j>=0;j--)
        cout<<tab[j];
}

union elements {
  int amount;
  double weight;
};



int main(){
  elements e1;

  e1.weight = 33.44;
  cout << "e1.weight: " << e1.weight << endl;

  e1.amount = 12;
  cout << "e1.amount: " << e1.amount << endl;
  cout << "e1.weight: " << e1.weight << endl;
 
  cout << &e1 << ", " << &e1.weight << ", " << &e1.amount << endl;
  cout << sizeof(e1) << ", " << sizeof(e1.weight) << ", " << sizeof(e1.amount) << endl;
  dec_to_bin(12);
  return 0;
}

