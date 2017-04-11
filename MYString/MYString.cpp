#include "MYString.h"



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
 char* MYString::c_str()
{
	return str;
}

MYString::~MYString()
{
}
