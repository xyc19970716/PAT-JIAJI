// L1-022.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;



int main()
{
	int n;
	int a = 0; 
	int b = 0;
	int num;
	
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num % 2 == 0)
		{
			b++;
		}
		else
		{
			a++;
		}
	}
	cout << a << " " << b << endl;
    return 0;
}

