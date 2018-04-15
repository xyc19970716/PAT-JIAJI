// L1-054.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch;
	int n;
	char zi[100][100];

	cin >> ch >> n;
	getchar();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			zi[i][j] = getchar();
		}
		
		if (i != n - 1)
		{
			getchar();
		}
		
	}
	int ge = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (zi[i][j] == zi[n-1 - i][n-1 - j])
			{
				ge++;
			}
		}
	}
	
	if (ge == n * n)
	{
		cout << "bu yong dao le" << endl;
	}
	
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			if (zi[i][j] != ' ')
			{
				cout << ch;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	//system("pause");
    return 0;
}

