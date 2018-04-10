// L1-016.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int w[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
char M[11] = { '1','0','X','9','8','7','6','5','4','3','2' };

int main()
{
	int n;
	string num;
	int ge = 0;
	
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		int Z = 0;int u = 0;
		for (int j = 0; j < num.size() - 1; j++)
		{
			int a = num[j] - '0';
			
			if (a >= 10)
			{
				u = 1;
				break;
			}
			Z += a * w[j];
		}
		if (u == 1 || num[17] != M[Z%11])
		{
			cout << num << endl;
			
		}
		else
		{
			ge++;
		}
		
	}
	if (ge == n)
	{
		cout << "All passed" << endl;
	}
    return 0;
}

