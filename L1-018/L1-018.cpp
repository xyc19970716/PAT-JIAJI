// L1-018.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string time;
	cin >> time;
	int a = time[0];
	int b = time[1];
	int c = time[3];
	int d = time[4];

	
	if (a < 49)
	{
		cout << "Only " << time << ".  Too early to Dang." << endl;
	}
	else if (a == 49 && b <= 50)
	{
		cout << "Only " << time << ".  Too early to Dang." << endl;
	}
	else if (a == 49 && b == 50 && (c > 48 || d > 48))
	{
		cout << "Dang" << endl;
	}
	else if (a == 49 && b == 51 && (c == 48 && d == 48))
	{
		cout << "Dang" << endl;
	}
	else if (a == 49 && b == 51 && (c > 48 || d > 48))
	{
		cout << "DangDang" << endl;
	}
	else if (a == 49 && b == 52 && (c == 48 && d == 48))
	{
		cout << "DangDang" << endl;
	}
	else if (a == 49 && b == 52 && (c > 48 || d > 48))
	{
		cout << "DangDangDang" << endl;
	}
	else if (a == 49 && b == 53 && (c == 48 && d == 48))
	{
		cout << "DangDangDang" << endl;
	}
	else if (a == 49 && b == 53 && (c > 48 || d > 48))
	{
		cout << "DangDangDangDang" << endl;
	}
	else if (a == 49 && b == 54 && (c == 48 && d == 48))
	{
		cout << "DangDangDangDang" << endl;
	}
	else if (a == 49 && b == 54 && (c > 48 || d > 48))
	{
		cout << "DangDangDangDangDang" << endl;

	}
	else if (a == 49 && b == 55 && (c == 48 && d == 48))
	{
		cout << "DangDangDangDangDang" << endl;

	}
	else if (a == 49 && b == 55 && (c > 48 || d > 48))
	{
		cout << "DangDangDangDangDangDang" << endl;
	}
	else if (a == 49 && b == 56 && (c == 48 && d == 48))
	{
		cout << "DangDangDangDangDangDang" << endl;
	}
	else if (a == 49 && b == 56 && (c > 48 || d > 48))
	{
		cout << "DangDangDangDangDangDangDang" << endl;
	}
	else if (a == 49 && b == 57 && (c == 48 && d == 48))
	{
		cout << "DangDangDangDangDangDangDang" << endl;
	}
	else if (a == 49 && b == 57 && (c > 48 || d > 48))
	{
		cout << "DangDangDangDangDangDangDangDang" << endl;
	}
	else if (a == 50 && b == 48 && (c == 48 && d == 48))
	{
		cout << "DangDangDangDangDangDangDangDang" << endl;
	}
	else if (a == 50 && b == 48 && (c > 48 || d > 48))
	{
		cout << "DangDangDangDangDangDangDangDangDang" << endl;

	}
	else if (a == 50 && b == 49 && (c == 48 && d == 48))
	{
		cout << "DangDangDangDangDangDangDangDangDang" << endl;

	}
	else if (a == 50 && b == 49 && (c >= 48 || d >= 48))
	{
		cout << "DangDangDangDangDangDangDangDangDangDang" << endl;
	}
	else if (a == 50 && b == 50 && (c == 48 && d == 48))
	{
		cout << "DangDangDangDangDangDangDangDangDangDang" << endl;
	}
	else if (a == 50 && b == 50 && (c >= 48 || d >= 48))
	{
		cout << "DangDangDangDangDangDangDangDangDangDangDang" << endl;
	}
	else if (a == 50 && b == 51 && (c == 48 && d == 48))
	{
		cout << "DangDangDangDangDangDangDangDangDangDangDang" << endl;
	}
	else if (a == 50 && b == 51 && (c >= 48 || d >= 48))
	{
		cout << "DangDangDangDangDangDangDangDangDangDangDangDang" << endl;
	}
	else
	{
		cout << "DangDangDangDangDangDangDangDangDangDangDangDang" << endl;
	}



	//system("pause");
    return 0;
}

