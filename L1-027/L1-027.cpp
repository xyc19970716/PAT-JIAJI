// L1-027.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string num;
	cin >> num;
	int a[10];
	int ge = 0;
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < num.size(); j++)
		{
			int b = num[j] - '0';
			if (b == i)
			{
				a[ge] = b;
				ge++;
				break;
			}
		}
	}
	cout << "int[] arr = new int[]{";
	for (int i = 0; i < ge; i++)
	{
		char ch = a[i] + '0';
		cout << ch;
		if (i != ge - 1)
		{
			cout << ",";
		}
		
	}
	cout << "};" << endl;

	char c[11];
	int shu = 0;
	for (int i = 0; i < num.size(); i++)
	{
		int d = num[i] - '0';
		for (int j = 0; j < ge; j++)
		{
			if (a[j] == d)
			{
				char chq = j + '0';
				c[shu] = chq;
				shu++;
				break;
			}
		}
	}
	cout << "int[] index = new int[]{";
	for (int i = 0; i < 11; i++)
	{
		cout << c[i];
		if (i != 10)
		{
			cout << ",";
		}
	}
	cout << "};" << endl;
	//system("pause");
    return 0;
}

