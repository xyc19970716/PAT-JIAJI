// 1013.cpp: 定义控制台应用程序的入口点。
//并查集

#include "stdafx.h"
#include "iostream"
#include <string>  
#include <algorithm> 
#include<iomanip>
#include <stack>
#include <cstdio>
#include <cstring> 
using namespace std;
#define MAX 1005
int mapx[MAX * MAX][2];
int pre[MAX];

int Find(int x)
{
	return pre[x] == x ? x : pre[x] = Find(pre[x]);
}

void Union(int x, int y)
{
	x = Find(x);
	y = Find(y);
	if (x == y)
	{
		return;
	}
	pre[y] = x;
}

int main()
{
	int n, m, k, a, summ;
	memset(mapx, 0, sizeof(mapx));
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++)
	{
		cin >> mapx[i][0] >> mapx[i][1];
	}
	for (; k--; )
	{
		cin >> a;
		for (int i = 0; i <= n; i++)
		{
			pre[i] = i;
		}
		for (int i = 0; i < m; i++)
		{
			if (mapx[i][0] != a && mapx[i][1] != a)
			{
				Union(mapx[i][0], mapx[i][1]);
			}
		}
		summ = 0;
		for (int i = 1; i <= n; i++)
		{
			if (pre[i] == i && i!= a)
			{
				++summ;
			}
		}
		printf("%d\n", summ - 1);
	}
	
    return 0;
}

