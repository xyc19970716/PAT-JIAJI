// L1-005.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
struct Student {
	string no;
	int s;
	int k;
}stud[1000];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> stud[i].no >> stud[i].s >> stud[i].k;
	}

	int m;
	int b;
	cin >> m;
	for (int i = 0; i < m; i++)
	{

		cin >> b;
		for (int j = 0; j < n; j++)
		{
			if (stud[j].s == b)
			{
				cout << stud[j].no << " " << stud[j].k << endl;
				break;
			}
		}
	}
    return 0;
}

