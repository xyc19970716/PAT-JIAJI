// L1-40.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	char ch;
	double num;
	while (n--)
	{
		cin >> ch >> num;
		if (ch == 'M')
		{
			cout << fixed << setprecision(2) << num / 1.09 << endl;
		}
		else if (ch == 'F')
		{
			cout << fixed << setprecision(2) << num * 1.09 << endl;
		}
	}
	//system("pause");
    return 0;
}

