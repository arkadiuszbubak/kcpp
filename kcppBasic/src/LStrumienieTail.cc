/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Strumienie w C++
 * v0.01
 */

#include <iostream>
#include <unistd.h>
using namespace std;

// ./a.out > plik.txt
// tail -f plik.txt

int main() {

  for (int i = 0; i < 100; i++) {
    cout << "Cout\t" << i << endl;
    cerr << "Cerr\t" << i << endl;
    clog << "Clog\t" << i << endl;
    cout << "----------------" << endl;
    sleep(1);
  }

  return 0;
}
