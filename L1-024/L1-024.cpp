// L1-024.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int D;
	cin >> D;
	if (D + 2 > 7)
	{
		D = D + 2 - 7;
	}
	else
	{
		D += 2;
	}
	cout << D << endl;
	//system("pause");
    return 0;
}

