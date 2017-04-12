#include "MYString.h"
#include<iostream>

MYString::MYString()
{
	len = 0;
	cap = 20;
	str = new char[20];
	str[0] = '\0';
}

MYString::MYString(char* in)
{
	while (in[len] != '\0')
	{
		len++;
	}
	len++;
	cap = ((len / 20) + 1)*20;
	str = new char[cap];
	for (int i = 0; i < len; i++)
	{
		str[i] = in[i];
		
	}
}

int MYString::length()
{
	return len;
};

int MYString::capacity()
{
	return cap;
}

char MYString::at(int index)
{
	if ((index > cap)&&(index >= 0))
		return '\0';
	char iChar =  str[index] ;
	return iChar;
}
 char* MYString::c_str()
{
	return str;
}

 void MYString::setEqualTo(MYString& argStr)
 {
	 delete str;
	 len = argStr.length();
	 cap = argStr.capacity();
	 str = new char[cap];
	 for (int i = 0; i < len; i++)
	 {
		 str[i] = argStr.at(i);
	 }
 }

 void MYString::write(std::ostream& ostr)
 {
	 for (int i = 0; i < len; i++)
	 {
		 ostr << str[i];
	 }
 }

 bool MYString::read(std::istream& istr)
 {
	 char* readBuf = new char[100];
	 int i = 0;
	 while (readBuf[i-1] != '\0')
	 {
		 istr >> readBuf[i];
		 i++;
	 }
	 len = i;
	 cap = ((len / 20) + 1) * 20;
	 str = new char[cap];
	 for (int j = 0; j < len; j++)
	 {
		 str[j] = readBuf[j];
	 }
	 delete readBuf;
	 return true;
 }

 int MYString::compareTo(MYString& argStr)
 {

 }

MYString::~MYString()
{
}
