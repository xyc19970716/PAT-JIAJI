// 1007.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include <string>  
#include <algorithm> 
#include<iomanip>
#include <stack>
#include <cstdio>
using namespace std;

int main()
{
	int K;
	int a[10001];
	int sum = -1;
	int start = 0;
	int end = 0;
	cin >> K;
	
	for (int i = 0; i < K; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < K; i++)
	{
		
		int temp = 0;
		for (int j = i; j < K; j++)
		{
			temp += a[j];
			if (sum < temp)
			{
				sum = temp;
				start = i;
				end = j;
			}
		}

	}
	if (sum < 0)
	{
		printf("0 %d %d\n", a[0], a[K-1]);
	}
	else
	{
		printf("%d %d %d\n", sum, a[start], a[end]);
	}
	
    return 0;
}

