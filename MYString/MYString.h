#pragma once
#include<iostream>
class MYString
{
public:
	MYString();
	MYString(const char*);
	int MYString::length();
	int MYString::capacity();
	char MYString::at(int index);
	char* MYString::c_str();
	void MYString::setEqualTo(const MYString &argStr);
	void MYString::write(std::ostream& ostr);
	bool MYString::read(std::istream& istr);
	int MYString::compareTo(const MYString& argStr);
	~MYString();
private:
	int len = 0;
	int cap = 20;
	char* str;
};
