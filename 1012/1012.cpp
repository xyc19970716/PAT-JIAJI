// 1012.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "iostream"
#include <string>  
#include <algorithm> 
#include<iomanip>
#include <stack>
#include <cstdio>
#include <cstring> 
using namespace std;

struct Student
{
	char id[6];
	int C;
	int M;
	int E;
	int A;
	char total;
}student[2000];
int main()
{
	int N;
	int M;
	cin >> N >> M;
	int temp1 = 0, temp2 = 0, temp3 = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> student[i].id >> student[i].C >> student[i].M >> student[i].E;
		student[i].A = (student[i].C + student[i].M + student[i].E) / 3;
		student[i].total = ' ';
		if (student[i].C > temp1)
		{
			temp1 = student[i].C;
			student[i].total = 'C';
			if (i > 0)
			{
				student[i - 1].total = ' ';
			}
		}

		if (student[i].M > temp2)
		{
			temp1 = student[i].M;
			student[i].total = 'M';
			if (i > 0)
			{
				student[i - 1].total = ' ';
			}
		}

		if (student[i].E > temp3)
		{
			temp1 = student[i].E;
			student[i].total = 'E';
			if (i > 0)
			{
				student[i - 1].total = ' ';
			}
		}

	}


    return 0;
}

