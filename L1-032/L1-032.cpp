// L1-032.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;


int main()
{
	int n;
	char ch;
	string line;
	char a;
	scanf("%d %c ", &n, &ch);
	   getline(cin, line);
		int len = line.size();

		if (len < n)
		{
			int ge = n - len;
			for (int i = 0; i < ge; i++)
			{
				cout << ch;
			}
			cout << line << endl;
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				cout << line[len + i - n];
			}
			cout << endl;
		}
		
	
	

	//system("pause");

    return 0;
}

