#include <iostream>
#include <cstdlib>
using namespace std;

/* Online converter
 * https://www.rapidtables.com/convert/number/decimal-to-binary.html */

void dec_to_bin(int liczba)
{
    cout <<"\nInside dec_to_bin function:"; 
    int i=0, tab[31];

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
  elements eName;

  eName.weight = 4.0;
  cout << "1. eName.weight: " << eName.weight << endl;

  eName.amount = 9;
  cout << "2. eName.amount: " << eName.amount << endl;
  cout << "2. eName.weight: " << eName.weight << endl;
  cout << "2. eName.amount: " << eName.amount << endl;
 
  cout << &eName << ", " << &eName.weight << ", " << &eName.amount << endl;
  cout << sizeof(eName) << ", " << sizeof(eName.weight) << ", " << sizeof(eName.amount) << endl;
  dec_to_bin(4);
  dec_to_bin(9);
  return 0;
}

