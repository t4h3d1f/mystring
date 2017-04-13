// Program 2.cpp : Defines the entry point for the console application.
////
//Author: Thoomas Allen
//Section: S
//Program name: Program 2
//Description:
////

#include "stdafx.h"
#include "MYString.h"
#include<iostream>
#include<vector>

using namespace std;

vector<MYString> strVec[7];

int main()
{
	MYString str1, str2("batman");
	MYString str4("robin");
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
	MYString str5;
	str5.read(cin);
	str5.write(cout);
	cout <<  " "<<str5.length()<<":"<<str5.capacity()<< endl;
	str5.read(cin);
	str5.write(cout);
	cout << " " << str5.length() <<  ":" << str5.capacity() << endl;
	str5.read(cin);
	str5.write(cout);
	cout << " " << str5.length() <<  ":" << str5.capacity() << endl;
	str3.setEqualTo(str3);
	cout << "comparing str2 to str4 (batman to robin) " << str2.compareTo(str4)<<endl;
	cout << "now comparing robin to batman " << str4.compareTo(str2) << endl;
	cout << "comparing input to batman " << str2.compareTo(str5) << endl;
	system("pause");
}

