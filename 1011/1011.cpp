// 1011.cpp: 定义控制台应用程序的入口点。
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


int main()
{
	float M;
	int first;
	float firstMoney;
	int second;
	float secondMoney;
	int third;
	float thirdMoney;
	float temp = 0;
	int w = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> M;
		if (M > temp)
		{
			temp = M;
			first = i;
		}
	}
	firstMoney = temp;
	temp = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> M;
		if (M > temp)
		{
			temp = M;
			second = i;
		}
	}
	secondMoney = temp;
	temp = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> M;
		if (M > temp)
		{
			temp = M;
			third = i;
		}
	}
	thirdMoney = temp;
	temp = 0;

	if (first == 0)
	{
		printf("W ");
		w++;
	}
	else if (first == 1)
	{
		printf("T ");
	}
	else 
	{
		printf("L ");
	}

	if (second == 0)
	{
		printf("W ");
		w++;
	}
	else if (second == 1)
	{
		printf("T ");
	}
	else
	{
		printf("L ");
	}

	if (third == 0)
	{
		printf("W ");
		w++;
	}
	else if (third == 1)
	{
		printf("T ");
	}
	else
	{
		printf("L ");
	}

	cout << fixed << setprecision(2);
	cout << (firstMoney * secondMoney * thirdMoney * 0.65 - w) * 2 << endl;
	
    return 0;
}

