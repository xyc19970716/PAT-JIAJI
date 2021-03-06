// 1003.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>  
#include <cstring>  
#include <algorithm> 
#include<iomanip> 
using namespace std;
const int INF = 0x3f3f3f3f;
int main() {

	int N, M, C1, C2;
	int c1, c2, L;
	int Distance[505];
	int map[505][505];
	int book[505];
	int u;
	int MIN;
	int teams[505];
	int pathCount[505];
	int amount[505];

	cin >> N;
	cin >> M;
	cin >> C1;
	cin >> C2;

	for (int i = 0; i < N; i++)
	{
		cin >> teams[i];//初始化救援队

	}

	for (int i = 0; i < N; i++)
	{
		book[i] = pathCount[i] = amount[i] = 0; // 初始化book为Distance数组都没有访问过//要算的路数和救援队数
		for (int j = 0; j < N; j++)
		{
			if (i == j)
			{
				map[i][j] = 0;
			}
			else
			{
				map[i][j] = INF;
			}
		}
	}

	for (int i = 0; i < M; i++)
	{
		cin >> c1 >> c2 >> L;
		map[c1][c2] = L; //读入地图：c1到c2多长
		map[c2][c1] = L; //????????????????? 
	}

	book[C1] = 1;	//C1城市看过勒
	pathCount[C1] = 1;	//
	amount[C1] = teams[C1]; //
	for (int i = 0; i < N; i++)
	{
		Distance[i] = map[C1][i]; //读入开始C1邻边城市的距离
		if (Distance[i] != INF && i != C1)
		{
			amount[i] = amount[C1] + teams[i];//初始化C1到达邻边城市后的总救援队
			pathCount[i] = 1; // C1到达邻边城市条数
		}
	}

	

	for (int i = 0; i < N - 1; i++)
	{
		MIN = INF;
		for (int j = 0; j < N; j++)
		{
			if (book[j] == 0 && Distance[j] < MIN) // 找到最短的邻边城市
			{
				MIN = Distance[j];
				u = j;
			}
		}
		book[u] = 1;
		for (int k = 0; k < N; k++)
		{
			
				if (book[k] == 0 && Distance[k] > Distance[u] + map[u][k]) // 找支路
				{
					Distance[k] = Distance[u] + map[u][k]; // 短的支路给它
					amount[k] = amount[u] + teams[k]; // 加
					pathCount[k] = pathCount[u]; // 一条路
				}
				else if (book[k] == 0 && Distance[k] == Distance[u] + map[u][k]) // 一样
				{
					pathCount[k] += pathCount[u];  // 增加从u到k的路径数量
					if (amount[k] < amount[u] + teams[k])
					{
						amount[k] = amount[u] + teams[k];  // 取大的那个
					}
				}
			
		}
	}

	printf("%d %d\n", pathCount[C2], amount[C2]);

	return 0;
}

