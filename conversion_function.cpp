/***************************************************
*      FileName: conversion_function.cpp
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-13 17:34:19
*      LastModified: 2019-06-13 17:38:46
****************************************************/

#include <iostream>

using namespace std;

class Fraction
{
public:
	Fraction(int num, int den=1)
		: m_numerator(num), m_denominator(den) { }
	operator double() const {
		return (double) m_numerator / m_denominator;
	}
private:
	int m_numerator; //分子
	int m_denominator; //分母
};


int main()
{
	Fraction f(3, 5);
	double d = 4 + f; //调用operator double
	cout << "d=" << d << endl;

	return 0;
}
