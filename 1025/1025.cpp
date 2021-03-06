// 1025.cpp: 定义控制台应用程序的入口点。
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

struct records{
	char number[14];
	int score;
	int location;
	int totalrank;
	int locationrank;
} record[30005];


bool cmp (records a, records b){
	if (a.score != b.score)return a.score > b.score;
	
    else  return strcmp(a.number, b.number) < 0;
}

bool cmp1(records a, records b) {
	if (a.location != b.location)return a.location < b.location;
	return a.score > b.score;
	
}

int main()
{
	int N;
	int K;
	int count = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> K;
		
		for (int j = count; j < K + count; j++)
		{
			cin >> record[j].number >> record[j].score;
			record[j].location = i + 1;
			
		}
		count += K ;
	}

	sort(record, record + count, cmp1);

	int num = 0;

	for (int i = 0; i < count; i++)
	{
		if (record[i].location != record[i - 1].location)
		{
			num = 0;
		}
		if (record[i].score == record[i - 1].score && num != 0)
		{
			record[i].locationrank = record[i - 1].locationrank;
			num++;
		}
		else
		{
			record[i].locationrank = num + 1;
			num++;
		}
	}

	sort(record, record + count, cmp);

	for (int i = 0; i < count; i++)
	{
		if (record[i].score == record[i - 1].score && i != 0)
		{
			record[i].totalrank = record[i - 1].totalrank;
		}
		else
		{
			record[i].totalrank = i + 1;
		}
		
	}

	cout << count << endl;
	for (int i = 0; i < count; i++)
	{
		cout << record[i].number << " "<< record[i].totalrank << " " << record[i].location  << " " << record[i].locationrank << endl;
	}
	//system("pause");
    return 0;
}

