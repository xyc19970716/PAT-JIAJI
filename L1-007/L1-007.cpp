// L1-007.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string num;
	cin >> num;
	for (int i = 0; i < num.size(); i++)
	{

		switch (num[i])
		{
		case '-':
			cout << "fu"; break;
		case '0':
			cout << "ling"; break;
		case '1':
			cout << "yi"; break;
		case '2':
			cout << "er"; break;
		case '3':
			cout << "san"; break;
		case '4':
			cout << "si"; break;
		case '5':
			cout << "wu"; break;
		case '6':
			cout << "liu"; break;
		case '7':
			cout << "qi"; break;
		case '8':
			cout << "ba"; break;
		case '9':
			cout << "jiu"; break;

		}

		if (i < num.size() - 1)
		{
			cout << " ";
		}
		else
		{
			cout << endl;
		}
	}
    return 0;
}

