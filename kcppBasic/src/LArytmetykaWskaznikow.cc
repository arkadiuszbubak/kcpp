/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.18
 * \brief Arytmetyka wskaznikow w C++
 * v0.02
 */

#include <iostream>
using namespace std;

int main() {
	int tab[] = {11,22,33,44,55}, i = 3, *p, *q;

	p = &tab[0] + 3;
	cout << "*p     = " << *p << endl;

	p = p - 2;
	cout << "*p     = " << *p << endl;

	q = tab;
	cout << "*(q+2) = " << *(q+2) << endl;
	cout << "q[2]   = " << q[2]   << endl;

	cout << "q[i]   = " << q[i] << endl;
	cout << "i[q]   = " << i[q] << endl;   //<-- Proszę to wyjaśnić
	i++;
	cout << "*(i+q)   = " << *(i+q) << endl;

/*   Zadanie
 *    Co robia ponizsze operacje? Napisac program ktory pokazuje ich dzialanie.
 *    p++;
 *    ++p;
 *    ++*p;
 *    ++(*p);
 *    ++*(p);
 *    *p++;
 *    (*p)++;
 *    *(p)++;
 *    *++p;
 *    *(++p);
 *  */

	return 0;
}
