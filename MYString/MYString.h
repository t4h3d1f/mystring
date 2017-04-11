#pragma once
class MYString
{
public:
	MYString();
	MYString(char*);
	int MYString::length();
	int MYString::capacity();
	char* MYString::c_str();
	~MYString();
private:
	int len = 0;
	int cap = 20;
	char* str;
};
