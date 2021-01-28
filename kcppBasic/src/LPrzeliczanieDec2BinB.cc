/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Przeliczanie dec_to_bin w C++
 * v0.01
 */

#include <cstdlib>
#include <iostream>
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

int main()
{
    int liczba;

    cout<<"Podaj liczbę: ";
    cin>>liczba;

    cout<<liczba<<" po zamianie na postać binarną: ";
    dec_to_bin(liczba);
    cout<<endl;

    //system("pause");
    return 0;
}
