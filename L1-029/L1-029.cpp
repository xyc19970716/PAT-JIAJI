// L1-029.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int h;
	cin >> h;
	cout << fixed << setprecision(1) << (h - 100) * 1.8 << endl;
	//system("pause");
    return 0;
}

