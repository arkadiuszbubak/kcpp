/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Strumienie w C++
 * v0.01
 * Example from https://commons.wikimedia.org/wiki/File:XOR_texture.png
*/

#include <fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("xor.ppm");
    file << "P2 256 256 255\n";
    for (int i = 0; i < 256; i++)
        for (int j = 0; j < 256; j++)
            file << (i ^ j) << ' ';
    file.close();
    return 0;
}
