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
#include<fstream>
#include<vector>
#include<iomanip>

using namespace std;

vector<MYString> strVec(100);


int main()
{
	//strVec.reserve(20);
	ifstream inFile;
	inFile.open("infile2.txt");
	if (inFile.is_open())
	{

		int index = 0;
		while (!inFile.eof())
		{
			//if ((index + 1) == strVec.capacity())
				//strVec.resize(index + 20);
			//strVec.push_back(MYString());
			strVec[index].read(inFile);
			index++;
		}
		inFile.close();
		strVec.resize(index);
	}
	else
	{
		cout << "Error reading file\n";
		system("pause");
		return 1;
	}
	for (int i = 0; i < strVec.size(); i++)
	{
		for (int j = 1; j < strVec.size(); j++)
		{
			if (strVec[j - 1].compareTo(strVec[j])> 0)
			{
				MYString tempStr = *new MYString;
				tempStr.setEqualTo(strVec[j]);
				strVec[j].setEqualTo(strVec[j - 1]);
				strVec[j - 1].setEqualTo(tempStr);
			}
		}
	}
	cout << setw(10);
	for (int i = 0; i < strVec.size(); i++)
	{
		/*for (int j = i; (j < i+7) && ((j+1) != strVec.size()); j++)
		{*/
		strVec[i].write(cout);
		//}
		if((i%7 == 0) && (i != 0))
			cout << endl;
	}
	cout << endl;
	system("pause");
}

