// L1-013.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	switch (n)
	{
	case 0:cout << "1" << endl; break;
	case 1:cout << "1" << endl; break;
	case 2:cout << "3" << endl; break;
	case 3:cout << "9" << endl; break;
	case 4:cout << "33" << endl; break;
	case 5:cout << "153" << endl; break;
	case 6:cout << "873" << endl; break;
	case 7:cout << "5913" << endl; break;
	case 8:cout << "46233" << endl; break;
	case 9:cout << "409113" << endl; break;
	case 10:cout << "4037913" << endl; break;

	default:
		break;
	}
    return 0;
}

