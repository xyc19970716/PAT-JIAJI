// L1-017.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string num;
	cin >> num;
	int ge = 0;
	float a = 1;
	float b = 1;
	int wei = num.size();
	if (num[0] == '-')
	{
		a = 1.5;
		wei = num.size() - 1;
	}
	if (num[num.size() - 1] == '0' || num[num.size() - 1] == '2' || num[num.size() - 1] == '4' || num[num.size() - 1] == '6' || num[num.size() - 1] == '8')
	{
		b = 2;
	}
	for (int i = 0; i < num.size(); i++)
	{
		if (num[i] == '2')
		{
			ge++;
		}
	}
	
	
	cout << setiosflags(ios::fixed) << setprecision(2) << (ge*1.0 / wei*1.0) * a * b * 100 << "%" << endl;
	//system("pause");
    return 0;
}

