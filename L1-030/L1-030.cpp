// L1-030.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct student
{
	int sex;
	string name;
	int select = 0;
}stud[50];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> stud[i].sex >> stud[i].name;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			if (stud[i].sex + stud[j].sex == 1 && stud[i].select == 0 && stud[j].select == 0)
			{
				cout << stud[i].name << " " << stud[j].name << endl;
				stud[i].select = 1;
				stud[j].select = 1;
				break;
			}
		}
	}
	//system("pause");
    return 0;
}

