// Program 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MYString.h"
#include<iostream>

using namespace std;

int main()
{
	MYString str1, str2("batman");
	MYString str3("12345678901234567890123456789012345678901234567890");
	cout << str1.c_str() << " ";
	cout << str1.length() << ":";
	cout << str1.capacity() << endl << endl;
	cout << str2.c_str() << " ";
	cout << str2.length() << ":";
	cout << str2.capacity() << endl << endl;
	cout << str3.c_str() << " ";
	cout << str3.length() << ":";
	cout << str3.capacity() << endl << endl;
	system("pause");
}

