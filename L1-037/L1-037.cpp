// L1-037.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	if (b == 0)
	{
		cout << (int)a << '/' << (int)b << '=' << "Error" << endl;
	}
	else
	{
	cout << (int)a << '/';
	if (b < 0)
	{
		cout << '(' << (int)b << ')' << '=';
	}
	else
	{
		cout << (int)b << '=';
	}
	cout << fixed << setprecision(2) << a / b << endl;
	}
	
	//system("pause");
    return 0;
}

