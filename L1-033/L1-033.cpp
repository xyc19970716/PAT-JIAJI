// L1-033.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int y, n;
	int count = -1;
	char a[4];
	cin >> y >> n;
	for (int i = y; i < 3001; i++)
	{
		count++;
		int j = 0;
		int shu = i;
		while (shu)
		{
			char ch = shu % 10 + '0';
			a[j] = ch;
			shu /= 10;
			j++;
		}
		if (j < 4)
		{
			for (int i = j; i < 4; i++)
			{
				a[i] = '0';
			} 
		}
		int b = 0;
		for (int i = 0; i < 4; i++) // 4 6  / 3 5 / 2 4 3 / 0
		{
			for (int j = i + 1; j < 4; j++)
			{
				if (a[i] == a[j])
				{
					b++; // 1123  0012      0011 0001 0111 
				}
			}
		}
		if (b == 0 && n == 4)
		{
			break;
		}
		if (b == 1 && n == 3)
		{
			break;
		}
		if ( (b == 2 || b ==3) && n == 2)
		{
			break;
		}
		if (b == 6 && n == 1)
		{
			break;
		}
		
	}
	cout << count << " ";
	for (int i = 3; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << endl;

	//system("pause");
    return 0;
}

