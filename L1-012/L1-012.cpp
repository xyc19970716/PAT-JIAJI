// L1-012.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << "2^" << n << " = " << (int)pow(2.0, n * 1.0) << endl;
    return 0;
}

