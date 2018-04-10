// L1-023.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string line;
	cin >> line;
	int g = 0;
	int p = 0;
	int l = 0;
	int t = 0;
	for (int i = 0; i < line.size(); i++)
	{
		if (line[i] == 'G' || line[i] == 'g')
		{
			g++;
		}
		else if (line[i] == 'P' || line[i] == 'p')
		{
			p++;
		}
		else if (line[i] == 'L' || line[i] == 'l')
		{
			l++;
		}
		else if (line[i] == 'T' || line[i] == 't')
		{
			t++;
		}
	}
	while (g || p || l || t)
	{
		if (g)
		{
			cout << 'G';
			g--;
		}
		if (p)
		{
			cout << 'P';
			p--;
		}
		if (l)
		{
			cout << 'L';
			l--;
		}
		if (t)
		{
			cout << 'T';
			t--;
		}
	}
	cout << endl;
	//system("pause");
    return 0;
}

