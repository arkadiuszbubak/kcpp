#include <iostream>
#include <cstdlib>  // dla rand()
#include <ctime>    // dla time()
using namespace std;

int main() {
    srand(time(0));
    int wylosowana = rand() % 100 + 1; // liczba od 1 do 100
    int proba, licznik = 0;

    cout << "Zgadnij liczbe (1-100):" << endl;

    while (true) {
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "Za malo! Probuj dalej." << endl;
        } else if (proba > wylosowana) {
            cout << "Za duzo! Probuj dalej." << endl;
        } else {
            cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
            break;  // przerywa pętlę
        }
    }

    return 0;
}
