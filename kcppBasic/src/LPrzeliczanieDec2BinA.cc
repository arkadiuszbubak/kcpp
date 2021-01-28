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
    int i=31;
    bool ok=false;
    while(i--)
    {
        //warunek, który pozwoli ominąć początkowe zera
        if(liczba>>i&1&!ok) 
            ok=true;

        if(ok)
            cout<<((liczba>>i)&1);

    }
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
