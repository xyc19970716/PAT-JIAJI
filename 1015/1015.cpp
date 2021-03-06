// 1015.cpp: 定义控制台应用程序的入口点。
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
/*
bool isPrimes(int x)
{
	int i;
	
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			break;
		}
	}
	if (i >= x)
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
	
}

int main()
{
	int N;
	int D;
	int a[1000];
	int count = 0;
	
	while (cin >> N)
	{
		if (N < 0)
		{
			break;
		}
		cin >> D;
		while (N)
		{
			a[count] = N % D;
			N /= D;
			count++;
		}
		int m = 0;
		
		for (int i = count - 1; i >= 0; i--)
		{
			int temp = 1;
			for (int j = 0; j < count - 1 - i; j++)
			{
				temp = temp * D;
			}
			m += a[i] * temp;
		}
	
		if (isPrimes(N) && isPrimes(m))
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
		m = 0;
		count = 0;
	}
    return 0;
}
*/

#include<stdio.h>  
int isPrime(int n) {
	int i;
	if (n<2) return 0;
	for (i = 2; i*i <= n; i++) {
		if (n%i == 0) return 0;
	}
	return 1;
}
int change(int n, int d) {
	int i, j, b[100], cnt = 0;
	while (n) {
		b[cnt] = n % d;
		cnt++;
		n = n / d;
	}
	int ans = 0;
	for (i = cnt - 1; i >= 0; i--) {
		int tmp = 1;
		for (j = 0; j<cnt - 1 - i; j++) {
			tmp = tmp * d;
		}
		ans = ans + b[i] * tmp;
	}
	return ans;
}
int main() {
	int i, j, n, d;
	while (cin >> n) {
		if (n<0) break;
		cin >> d;
		int rn = change(n, d);
		if (isPrime(n) && isPrime(rn))
			printf("Yes\n"); \
		else
			printf("No\n");

	}
	return 0;
}