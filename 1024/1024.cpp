// 1024.cpp: 定义控制台应用程序的入口点。
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
	char num[100];
	int number[100];
	int number1[100];
	int sum[100];
	int numlen;
	int K;
	
	memset(number, 0, sizeof(number));
	memset(number1, 0, sizeof(number1));
	memset(sum, 0, sizeof(sum));

	cin >> num;
	numlen = strlen(num);
	cin >> K;
	for (int i = 0; i < numlen; i++)
	{
		number[numlen - i - 1] = num[i] - '0';
		number1[i] = number[numlen - i - 1];

	}

	while (K) {
		K--;
		int a = 0;

		while (number[a] != 0)
		{
			sum[a] = (number[a] + number1[a]) % 10;
			number[a + 1] += (number[a] + number1[a]) / 10;
			a++;
		}

		int i = 0;

		for (i = 0; i < a; i++) {
			if (sum[i] == sum[a - i - 1])
			{
				break;
			}
		}
		if (i == a)
		{
			
			break;
		}

		int b = 0;
		while (sum[b] != 0) {
			number[b] = sum[a - b - 1];
			number1[b] = sum[b];
			b++;
		}

	}
	


	


	for (int i = 0; i < numlen+1; i++)
	{
		cout << number[i];
	}
	cout << endl;

	for (int i = 0; i < numlen+1; i++)
	{
		cout << number1[i];
	}
	cout << endl;

	for (int i = 0; i < 100; i++)
	{
		cout << sum[i];
	}
	cout << endl;
	system("pause");
    return 0;
}

