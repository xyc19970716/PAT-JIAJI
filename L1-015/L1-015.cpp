// L1-015.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	char ch;
	int m;
	cin >> n >> ch;
	if (n % 2 == 0)
	{
		m = n / 2;
	}
	else
	{
		m = int(n / 2) + 1;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << ch;
		}
		
		cout << endl;
		
		
	}
	//system("pause");
    return 0;
}

