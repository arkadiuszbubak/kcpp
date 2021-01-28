/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.05.15
 * \brief no Template w C++
 * v0.01
 */

#include <iostream>
using namespace std;


/*   // ----- Wersja 2 -----------
 *   int AddInt(int t1, int t2) {
 *      return t1 +t2;
 *   }
 *
 *   float AddFloat(float t1, float t2) {
 *    return t1 +t2;
 *  //----------------------------*/



/*   // ----- Wersja 1 -----------
 *  int Add(int t1, int t2) {
 *      return t1 +t2;
 *   }
 *
 *   float Add(float t1, float t2) {
 *      return t1 +t2;
 *   }
 *  //----------------------------*/


int main() {
   
    
   /* // ----- Wersja 2 -----------
    * cout << AddInt(2,3)       << endl;
    * cout << AddFloat(2.6,3.2) << endl;  // wywolanie szablonu max<double> (dedukcja typu argumentów)
    * cout << AddInt(2,13)      << endl;  // wywolanie szablonu max<int> (dedukcja typu argumentów)
    * cout << AddFloat(2,14)    << endl;  // wywolanie szablonu max<double> (bez dedukcji typu)
    * //--------------------------- */

  /*  // ----- Wersja 1 -----------
   *  cout << Add(2,3)     << endl;
   *  cout << Add(2.6,3.2) << endl;  // wywolanie szablonu max<double> (dedukcja typu argumentów)
   *  cout << Add(2,13)    << endl;  // wywolanie szablonu max<int> (dedukcja typu argumentów)
   *  cout << Add(2,14)    << endl;  // wywolanie szablonu max<double> (bez dedukcji typu)
   * //---------------------------- */
}
