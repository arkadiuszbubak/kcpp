/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Konwersje w C++
 * v0.01
 */

#include <iostream>
#include <string>
#include <vector>
#include <stdint.h>
#include <math.h>

using namespace std;

string hextobin(const string &s){ ///Konwersja zmiennej hex to bin
    string out;
    for(auto i: s){
        uint8_t n;
        if(i <= '9' and i >= '0')
            n = i - '0';
        else
            n = 10 + i - 'A';
        for(int8_t j = 3; j >= 0; --j)
            out.push_back((n & (1<<j))? '1':'0');
    }

    return out;
}

string bintohex(const string &s){ ///Konwersja zmiennej bin to hex
    string out;
    for(uint i = 0; i < s.size(); i += 4){
        int8_t n = 0;
        for(uint j = i; j < i + 4; ++j){
            n <<= 1;
            if(s[j] == '1')
                n |= 1;
        }

        if(n<=9)
            out.push_back('0' + n);
        else
            out.push_back('A' + n - 10);
    }

    return out;
}


unsigned long hextodec(string hex) { ///Konwersja zmiennej hex to dec
    unsigned long result = 0;
    for (unsigned int i=0; i<hex.length(); i++) {
        if (hex[i]>=48 && hex[i]<=57)
        {
            result += (hex[i]-48)*pow(16,hex.length()-i-1);
        } else if (hex[i]>=65 && hex[i]<=70) {
            result += (hex[i]-55)*pow(16,hex.length( )-i-1);
        } else if (hex[i]>=97 && hex[i]<=102) {
            result += (hex[i]-87)*pow(16,hex.length()-i-1);
        }
    }
    return result;
}


int main(){

    string s[] = {"0x7ffeca8c8c58", "0x7ffc5ffa893c", "0x7ffc5ffa8940"};
    cout << hextobin(s[0]) << endl;
    cout << hextobin(s[1]) << endl;
    cout << hextobin(s[2]) << endl;

    cout << hextodec(s[0]) << endl;
    cout << hextodec(s[1]) << endl;
    cout << hextodec(s[2]) << endl;

    return 0;
}


