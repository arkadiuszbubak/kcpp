/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Przekazywanie tablic w C++
 * v0.01
 */

#include <iostream>
#include <iterator>
using namespace std;

//---------------------------------
void przekaz1D(int tab[]){ ///Przekazywanie tablic 1D
    for (int i = 0; i < 6; i++){
        cout << i << "\t" << tab[i] << endl;
     }
    cout <<"Zmienić tablice w funkcji. Wypisać poza funkcją."<< endl;
    cout <<"Czy wartości poza funkcją się zmieniły?"<< endl;
    cout <<"-------------------"<< endl;
}

//---z zachowaniem rozmiaru --------
// Zadanie
/* void przekaz1DA(...){ ///Przekazywanie tablic 1D
   int iSize = sizeof(iArray)/sizeof(iArray[0]);
 *      //jak?
 *      //Zadanie: 10 minut
 * } */


//---------------------------------
void przekaz1Dwsk(int *tab){ ///Przekazywanie tablic 1D
    //Pass an array. Array decays to a pointer. Thus you lose size information
    //int iSize = *(&tab + 1) - tab;
    //cout <<"Tab size: "<< iSize << endl;
    for (int i = 0; i < 6; i++){
        cout << i << "\t" << tab[i] << endl;
    }
    cout <<"Zmienić tablice w funkcji. Wypisać poza funkcją."<< endl;
    cout <<"Czy wartości poza funkcją się zmieniły?"<< endl;
    cout <<"-------------------"<< endl;
}


//--------------------------------
void przekaz2D(int tab[3][3]) {///Przekazywanie tablic 2D
	for (int i = 0; i<3; i++){
		for (int j = 0; j<3;j++) {
			cout <<"("<< i <<", "<< j <<")\t"<< tab[i][j] << endl;
		}
	}
  cout <<"-------------------"<< endl;
}





//-------------------------------
int main() {

	int tablica1D[6] = {1,2,3,4,5,6};

    // nazwa tablicy to wskaźnik na tablica[0]
    przekaz1D(tablica1D);
    przekaz1Dwsk(tablica1D);


    //--------------------------------------
	int tablica2D[3][3];

	//Wypelnienie tablicy 2D
	for (int i = 0; i<3; i++){
		for (int j = 0; j<3;j++){
			tablica2D[i][j] = i+j;
		}
	}
	przekaz2D(tablica2D);

	return 0;
}
