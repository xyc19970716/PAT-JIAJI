// 1065.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include <string>  
#include <algorithm> 
#include<iomanip>
#include <stack>
#include <cstdio>
#include <cstring> 
#include <cmath>
using namespace std;

int main()
{
	long long a, b, c;

	int n;
	cin >> n;
	bool flag;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		long long ans = a + b; ///////////////////////////////////////
		cout << "Case #" << i << ":" << " ";
		if (a > 0 && b > 0 && ans <= 0) //正数溢出
		{
			flag = true;
		}
		else if (a < 0 && b < 0 && ans >= 0) // 负数溢出
		{
			flag = false;
		}
		else 
		{
			flag = (ans > c);
		}
		
		if (flag)
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
	}
	
    return 0;
}

