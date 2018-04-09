// L1-002.cpp: 定义控制台应用程序的入口点。
// 2 8 18 32
// 1 4 9  16
   
// 1 7 17 31
// 3*2 5*2 7*2

/*
1 *
2 * 1
3 * 2
4 * 3
5 * 4
6 * 5
7 * * *
	*
  * * *
8 * * *
	*
  * * * 1
.
。
。
17 *****
	***
	 *
	***
   *****

*/
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	char ch;
	cin >> n;
	cin >> ch;

	int hang;
	hang = sqrt((n + 1) / 2);
	int ge = hang * 2 - 1;
	for (int i = 0; i < hang; i++)
	{
		int black = i;
		while (black--)
		{
			cout << " ";
		}
		for (int j = 0; j < ge; j++)
		{
			cout << ch;
		}
		cout << endl;
		ge -= 2;
		if (ge < 0)
		{
			break;
		}
	}
	ge = 3;
	for (int i = 1; i < hang; i++)
	{
		int black = hang - 1 - i;
		while (black--)
		{
			cout << " ";
		}
		for (int j = 0; j < ge; j++)
		{
			cout << ch;
		}
		cout << endl;
		ge += 2;
		if (ge > hang * 2 - 1)
		{
			break;
		}

	}
	cout << n - (hang * hang * 2 - 1) << endl;
	//system("pause");
    return 0;
}

