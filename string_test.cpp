/***************************************************
*      FileName: string_test.cpp
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-05 16:51:36
*      LastModified: 2019-06-05 16:57:21
****************************************************/


#include <iostream>
#include "string.h"

using namespace std;

int main()
{
	String s1("hello");
	String s2("c++!");

	String s3(s2);
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;

	s3 = s1;
	cout << "s3: " << s3 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s1: " << s1 << endl;

	return 0;
}
