// 1002.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>  
#include <cstring>  
#include <algorithm> 
#include<iomanip> 
using namespace std;

int main() {

	int num1, num2;
	float Array[1001];
	int loc;
	float polynomial;
		cin >> num1;
		memset(Array, 0, sizeof(Array));

		for (int i = 0; i < num1; i++) {
			cin >> loc >> polynomial;
			Array[loc] += polynomial;
		}

		cin >> num2;

		for (int i = 0; i < num2; i++)
		{
			cin >> loc >> polynomial;
			Array[loc] += polynomial;
		}

		int length = 0;
		for (int i = 0; i <=1000; i++) {
			if (Array[i] != 0) {
				length++;
			}
		}

		cout << length;
		
		for (int i = 1000; i >= 0; i--) {
			if (Array[i] != 0.0)
			{
				cout << fixed << setprecision(1);
				cout << ' '<< i ;
				cout << ' '<< Array[i] ;
				
			}
		}
		cout << endl;
		//system("pause");

		



	return 0;
}



