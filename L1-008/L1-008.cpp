// L1-008.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	int count = 0;
	for (int i = A; i <= B; i++)
	{
		cout << setiosflags(ios::right) << setw(5) << i;
		count++;
		
		if (count == 5 || i == B)
		{
			count = 0;
			cout << endl;
		}
	}
	int sum = 0;
	 
	for (int i = A; i <= B; i++)
	{
		sum += i;
	}
	cout << "Sum = " << sum << endl;
	//system("pause");
    return 0;
}

