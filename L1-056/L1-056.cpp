// L1-056.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int num;
}stud[10000];
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> stud[i].name >> stud[i].num;
		sum += stud[i].num;
	}
	int average = sum / (2 * n) ;
	int shu = 100;
	int who = 0;
	for (int i = 0; i < n; i++)
	{
		if (abs(stud[i].num - average) <= shu)
		{
			shu = abs(stud[i].num - average);
			who = i;
		}
	}

	cout << (int)average << " " << stud[who].name << endl;
	//system("pause");
    return 0;
}

