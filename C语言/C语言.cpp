// C语言.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
 
#include <iostream>  
#include <string>  
#include <algorithm> 
using namespace std;

int main() {

	int num1, num2;
	int sum;
	while (cin >> num1 >> num2) {
		sum = num1 + num2;

		bool flag = false;
		if (sum < 0) {
			sum = -sum;
			flag = true;
		}
		if (sum == 0) {
			cout << '0' << endl;
		}
		else {
			string str;
			int i = 1;
			while (sum) {
				char ch = '0' + sum % 10;
				sum /= 10;

				if (i % 4 == 0) {
					str.push_back(',');
					i = 1;
				}


				str.push_back(ch);
				i++;
			}
			reverse(str.begin(), str.end());

			if (flag) {
				cout << '-';

			}
			cout << str << endl;
		}

	}
	

	return 0;
}
		


