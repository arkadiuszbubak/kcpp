/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Strumienie w C++
 * v0.01
 */

#include <iostream>
#include <unistd.h>
using namespace std;

int main(){

    for(int i = 0; i < 10; i++){
        cout << i << endl;
        sleep(3);
    }

    return 0;
}

