// L1-041.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
using namespace std;

int main()
{
	int n;
	int i = 0;
	int flag = 0;
	while(scanf("%d", &n)!= EOF)
	//while (cin >> n)
	{
		if (flag == 0)
		{
			i++;
		}
		
		if (n == 250)
		{
			flag = 1;
		}
	}
	cout << i << endl;
	//system("pause");
    return 0;
}
