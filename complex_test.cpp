/***************************************************
*      FileName: complex_test.cpp
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-05 15:40:45
*      LastModified: 2019-06-05 16:25:46
****************************************************/

#include <iostream>
#include "complex.h"

using namespace std;

ostream&
operator << (ostream& os, const complex& x)
{
	return os << '(' << real(x) << ',' << imag(x) << ')';
}

int main()
{
	complex c1(2, 1);
	complex c2(4, 0);

	cout << "c1: " << c1 << endl;
	cout << "c2: " << c2 << endl;

	cout << "+: " << c1 + c2 << endl;
	cout << "-: " << c1 - c2 << endl;
	cout << "*: " << c1 * c2 << endl;
	cout << "/: " << c1 / 2 << endl;

	cout << "conj: " << conj(c1) << endl;
	cout << "norm: " << norm(c1) << endl;
	cout << "polar: " << polar(10, 4) << endl;

	cout << "+=: " << (c1 += c2) << endl;
	cout << "==: " << (c1 == c2) << endl;
	cout << "!=: " << (c1 != c2) << endl;
	cout << "++: " << +c2 << endl;
	cout << "--: " << -c2 << endl;

	cout << "&+d: " << (c2 - 2) << endl;
	cout << "d+&: " << (5 + c2) << endl;

	return 0;
}

