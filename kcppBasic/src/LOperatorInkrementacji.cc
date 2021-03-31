/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Operator inkrementacji w C++
 * v0.02 2021.03.12
 */

#include <iostream>
using namespace std;

int main() {

    int a = 5;
    cout << a << endl;
    cout  <<  ++a  <<  endl; //!< preinkrementacja
    cout  <<  a++  <<  endl; //!< postinkrementacja
    cout  <<  a  <<  endl;


    // ----- Bez roznicy ----------------------------
    cout <<"-----------"<< endl;
    for(int k = 1; k < 5; k++){
        cout << k << endl;
    }

    cout <<"-----------"<< endl;
    for(int j = 1; j < 5; ++j){
        cout << j << endl;
    }

    cout <<"-----------"<< endl;

    // ----- Z roznica -------------------------------
    int x = 10;
    /** Najpierw zostanie zwiększona wartość zmiennej x o jeden, a następnie zostanie użyta wartość 11 */
    int y = ++x;
    cout << "(x, y)\t"<< x <<"\t"<< y << endl; //!< x = 11; y = 11
    //printf( "x = %d; y = %d\n", x, y );

    x = 10;
    /** Najpierw zostanie użyta wartość 10, a następnie zostanie zwiększonwa wartość o 1 */
    y = x++;
    cout << "(x, y)\t"<< x <<"\t"<< y << endl; //!< x = 11; y = 10


    int k = 0;
    for(int i = 0; i<1000000000; i++){
      k++;
    }

    return 0;
}
