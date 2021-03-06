// 1005.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>  
#include <string>  
#include <algorithm> 
#include<iomanip>
#include <stack>
using namespace std;
string getString(int n)
{
	switch (n)
	{
	case 0: return "zero"; break;
	case 1: return "one"; break;
	case 2:return "two"; break;
	case 3:return "three"; break;
	case 4:return "four"; break;
	case 5:return "five"; break;
	case 6:return "six"; break;
	case 7:return "seven"; break;
	case 8:return "eight"; break;
	case 9:return "nine"; break;

	}
}

int main()
{
	string str;
	string::iterator it;
	stack<int> s;
	bool flag = false;
	int sum = 0;
	cin >> str;

	for (it = str.begin(); it != str.end(); it++)
	{
		sum += (*it) - '0';
	}
	while (sum) {
		s.push(sum % 10);
		sum /= 10;
	}

	if (s.empty()) {
		cout << "zero";
	}

	while (!s.empty()) {
		if (flag) {
			cout << " ";
		}
		else
		{
			flag = true;
		}
		cout << getString(s.top());
		s.pop();
	}

	cout << endl;

	

    return 0;
}

