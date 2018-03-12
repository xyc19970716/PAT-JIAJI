// 1008.cpp: 定义控制台应用程序的入口点。
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
	int N;
	int now = 0;
	int next;
	int total = 0;
	cin >> N;
	while (N--)
	{
		cin >> next;
		if (next > now)
		{
			total += (next - now) * 6 + 5;
		}
		else
		{
			total += (now - next) * 4 + 5;
		}
		now = next;

	}

	printf("%d\n", total);
    return 0;
}

