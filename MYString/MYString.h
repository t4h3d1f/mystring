#pragma once
#include<iostream>
class MYString
{
public:
	MYString();
	MYString(char*);
	int MYString::length();
	int MYString::capacity();
	char MYString::at(int index);
	char* MYString::c_str();
	void MYString::setEqualTo(MYString& argStr);
	void MYString::write(std::ostream& ostr);
	bool MYString::read(std::istream& istr);
	~MYString();
private:
	int len = 0;
	int cap = 20;
	char* str;
};
