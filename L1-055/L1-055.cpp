// L1-055.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int Pa, Pb;
	int a, b, c;
	int ap=0,bp = 0;
	cin >> Pa >> Pb >> a >> b >> c;
	if (a == 0)
	{
		ap++;
	}
	if (a == 1)
	{
		bp++;
	}
	if (b == 0)
	{
		ap++;
	}
	if (b == 1)
	{
		bp++;
	}
	if (c == 0)
	{
		ap++;
	}
	if (c == 1)
	{
		bp++;
	}
	if (Pa > Pb && (ap >=1) ||(Pa < Pb && ap == 3))
	{
		cout << "The winner is a: " << Pa << " + " << ap << endl;
	}
	
	else if (Pa < Pb && bp >= 1 || (Pa > Pb && bp == 3))
	{
		cout << "The winner is b : " << Pb << " + " << bp << endl;
	}
	
	//system("pause");
    return 0;
}

