// L1-039.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string line;
	getchar();
	getline(cin, line);
	char a[100][100];
	int ge = (line.size() / n) + 1;
	int gege = 0;
	for (int i = ge - 1; i >= 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			if (gege >= line.size())
			{
				a[i][j] = ' ';
			}
			else
			{
				a[i][j] = line[gege++];
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < ge; j++)
		{
			cout << a[j][i];

		}
		cout << endl;
	}

	system("pause");
    return 0;
}

