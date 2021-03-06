// 1009.cpp: 定义控制台应用程序的入口点。
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
	int K;
	float Array1[1001];
	float Array2[1001];
	float result[2001];
	float number;
	int loc;
	memset(Array1, 0, sizeof(Array1));
	memset(Array2, 0, sizeof(Array2));
	memset(result, 0, sizeof(result));
	cin >> K;

	for (int i = 0; i < K; i++)
	{
		cin >> loc;
		cin >> number;
		Array1[loc] += number;
	}

	cin >> K;

	for (int j = 0; j < K; j++)
	{
		cin >> loc;
		cin >> number;
		Array2[loc] += number;

	}

	for (int m = 0; m < 1001; m++)
	{
		for (int n = 0; n < 1001; n++)
		{
			result[m + n] += Array1[m] * Array2[n];
		}
	}

	int length = 0;
	for (int i = 0; i <= 2000; i++) {
		if (result[i] != 0) {
			length++;
		}
	}

	cout << length;

	for (int i = 2000; i >= 0; i--)
	{
		if (result[i] != 0.0)
		{
			cout << fixed << setprecision(1);
			cout << " " << i << " " << result[i];
		}
	}
	cout << endl;
    return 0;
}

