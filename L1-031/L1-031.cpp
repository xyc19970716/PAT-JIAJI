// L1-031.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>  
#include<cmath>  
using namespace std;
int n, a, b, c;

int main() {
	cin >> n;
	while (n--) {
		cin >> a >> b;
		c = (a - 100)*1.8;//标准体重   

		if (abs(b - c)<(c*0.1)) {
			printf("You are wan mei!\n");
		}
		if ((abs(b - c) >= (c*0.1)) && b<c) {
			printf("You are tai shou le!\n");
		}
		if ((abs(b - c) >= (c*0.1)) && b>c) {
			printf("You are tai pang le!\n");
		}
	}

	return 0;
}

