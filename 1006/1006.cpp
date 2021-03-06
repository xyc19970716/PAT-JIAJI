// 1006.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>  
#include <string>  
#include <algorithm>  
#include <vector>  
using namespace std;
struct info {
	string ID_number;
	string Sign_in_time;
	string Sign_out_time;
};
bool unlock(info lhs, info rhs) {
	return lhs.Sign_in_time<rhs.Sign_in_time;
}
bool lock(info lhs, info rhs) {
	return lhs.Sign_out_time>rhs.Sign_out_time;
}
int main(int argc, char **argv) {
	info I;
	string ID_number, Sign_in_time, Sign_out_time;
	string unlock_ID, lock_ID;
	vector<info> vi;
	int N;
	cin >> N;
	for (int i = 0; i<N; i++) {
		cin >> ID_number >> Sign_in_time >> Sign_out_time;
		I.ID_number = ID_number; I.Sign_in_time = Sign_in_time; I.Sign_out_time = Sign_out_time;
		vi.push_back(I);
	}
	std::sort(vi.begin(), vi.end(), unlock);
	unlock_ID = (*vi.begin()).ID_number;
	std::sort(vi.begin(), vi.end(), lock);
	lock_ID = (*vi.begin()).ID_number;
	cout << unlock_ID << " " << lock_ID << endl;
	return 0;
}

/*
#include <iostream>  
#include <string>  
#include <algorithm> 
#include<iomanip>
#include <stack>
#include <cstdio>
using namespace std;
struct records
{
	char ID_number[15];
	int Sign_in_time;
	int Sign_out_time;
}records[1000];
int main()
{
	int M;
	int SigninMin = 60 * 60 * 24;
	int SignoutMax = 0;
	int whoEarly;
	int whoLate;
	char temp[9];
	char temp1[9];
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> records[i].ID_number;

		cin >> temp;
		records[i].Sign_in_time = (temp[7] - '0') + (temp[6] - '0') * 10 + 60 * ((temp[4] - '0') + (temp[3] - '0') * 10) + 60 * ((temp[1] - '0') + (temp[0] - '0') * 10);
		if (records[i].Sign_in_time < SigninMin)
		{
			SigninMin = records[i].Sign_in_time;
			whoEarly = i;
		}

		cin >> temp1;
		records[i].Sign_out_time = (temp[7] - '0') + (temp[6] - '0') * 10 + 60 * ((temp[4] - '0') + (temp[3] - '0') * 10) + 60 * ((temp[1] - '0') + (temp[0] - '0') * 10);
		if (records[i].Sign_out_time > SignoutMax)
		{
			SignoutMax = records[i].Sign_out_time;
			whoLate = i;
		}
	}

	printf("%s %s", records[whoEarly].ID_number, records[whoLate].ID_number);
	return 0;
}*/