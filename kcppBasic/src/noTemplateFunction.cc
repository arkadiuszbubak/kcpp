/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.05.15
 * \brief no Template w C++
 * v0.01
 */

#include <iostream>
using namespace std;


/* // ----- Wersja 2 -----------
 * int AddInt(int t1, int t2) {
 *   return t1 + t2;
 * }
 *
 * float AddFloat(float t1, float t2) {
 *   return t1 + t2;
 * }
 * //---------------------------- */



// ----- Wersja 1 -----------
int Add(int t1, int t2) {
  return t1 + t2;
}

float Add(float t1, float t2) {
  return t1 + t2;
}
/* double Add(double t1, double t2) {
 *   return t1 + t2;
 * } */
//----------------------------


int main() {


  /* // ----- Wersja 2 -----------
   * cout << AddInt(2,3)       << endl;
   * cout << AddFloat(2.6,3.2) << endl;  
   * cout << AddInt(2,13)      << endl;  
   * cout << AddFloat(2,14)    << endl; 
   * //--------------------------- */

  // ----- Wersja 1 -----------
  cout << Add(2,3)     << endl;
  //cout << Add(2.6,3.2) << endl;
  cout << Add(2,13)    << endl;
  cout << Add(2,14)    << endl;  
  //----------------------------
  

  /* cout <<"Int size:    "<< sizeof(int) << endl;
   * cout <<"Float size:  "<< sizeof(float) << endl;
   * cout <<"Double size: "<< sizeof(double) << endl; */
}
