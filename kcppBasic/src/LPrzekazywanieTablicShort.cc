/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2024.04.10
 * \brief Przekazywanie tablic w C++
 * v0.01
 */

#include <iostream>
#include <iterator>
using namespace std;


//---------------------------------
void przekaz1D(int tab[], int size){ ///Przekazywanie tablic 1D
  /* for (int i = 0; i < size; i++){
   *   cout << i << ":\t" << tab[i] << endl;
   * } */
  tab[1] = 37;
  //tab[3] = 377;
}


//---------------------------------
void przekaz1Dwsk(int *tab, int size){ ///Przekazywanie tablic 1D
  /* for (int i = 0; i < size; i++){
   *   cout << i << ":\t" << tab[i] << endl;
   * } */
  tab[1] = 39;
  //tab[3] = 399;
}

//-------------------------------
int main() {

  int tablica1D[3] = {1,2,3};
  int size = 3;

  //----------------------------------------------------------
  przekaz1D(tablica1D, size);
  for (int i = 0; i < size; i++){
    cout << i << ":\t" << tablica1D[i] << endl;
  }
  //----------------------------------------------------------

  cout <<"--------------"<< endl;

  przekaz1Dwsk(tablica1D, size);
  
  for (int i = 0; i < size; i++){
    cout << i << ":\t" << tablica1D[i] << endl;
  }

  //----------------------------------------------------------

  return 0;
}
