// L1-048.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int A[101][101], B[101][101],C[101][101];
	int Ra, Ca, Rb, Cb;
	cin >> Ra >> Ca;
	for (int i = 0; i < Ra; i++)
	{
		for (int j = 0; j < Ca; j++)
		{
			cin >> A[i][j];
		}
	}
	cin >> Rb >> Cb;
	for (int i = 0; i < Rb; i++)
	{
		for (int j = 0; j < Cb; j++)
		{
			cin >> B[i][j];
		}
	}

	
	if (Ca != Rb)
	{
		cout << "Error: " << Ca << "!= " << Rb << endl;
	}
	else if (Ca == Rb == 0)
	{
		cout << "0" << endl;
	}
	else
	{
		
		for (int i = 0; i < Ra; i++)
		{
			for (int j = 0; j < Cb; j++)
			{
				int sum = 0;
				for (int k = 0; k < Ca; k++)
				{
					sum += A[i][k] * B[k][j];
				}
				C[i][j] = sum;

			}
		}
		cout << Ra << " " << Cb << endl;
		for (int i = 0; i < Ra; i++)
		{
			for (int j = 0; j < Cb; j++)
			{
				cout << C[i][j];
				if (j != Cb - 1)
				{
					cout << " ";
				}
				else
				{
					cout << endl;
				}
			}
		}
	
 	}
	
	//system("pause");
    return 0;
}

