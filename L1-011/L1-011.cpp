// L1-011.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string line;
	string uline;
	getline(cin, line);
	getline(cin, uline);
	for (int i = 0; i < uline.size(); i++)
	{
		for (int j = 0; j < line.size(); j++)
		{
			if (uline[i] == line[j])
			{
				line.erase(j, 1);
			}
		}
	}
	cout << line << endl;
	//system("pause");
    return 0;
}

