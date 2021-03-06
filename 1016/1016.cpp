// 1016.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>  
#include "iostream"
#include<string.h>  
#include<algorithm>  
using namespace std;
int fee[25] = { 0 };
struct record {
	char name[25];
	int mon, day, hour, minute;
	char state[10];
}cord[1010];
bool cmp(record a, record b) {
	if (strcmp(a.name, b.name) != 0) return strcmp(a.name, b.name)<0;
	else if (a.day != b.day) return a.day<b.day;
	else if (a.hour != b.hour) return a.hour<b.hour;
	else return a.minute<b.minute;
}
double money(record a, record b) {
	record t = a;
	int money = 0;
	while (t.day<b.day || t.hour<b.hour || t.minute<b.minute) {
		money = money + fee[t.hour];
		t.minute++;
		if (t.minute == 60) { t.hour++; t.minute = 0; }
		if (t.hour == 60) { t.day++; t.hour = 0; }
	}
	return (double)money / 100;
}
int main() {
	int i, n, flag = 0, outname = 0;
	double totalmoney = 0.0;
	for (i = 0; i<24; i++)cin >> fee[i];  //输入  
	cin >> n;
	char a;
	for (i = 0; i<n; i++) {
		cin >> cord[i].name >> a >> cord[i].mon >> a >> cord[i].day >> a >> cord[i].hour >> a >> cord[i].minute >> a >> cord[i].state;
	}

	sort(cord, cord + n, cmp);//排序  

	for (i = 0; i<n; i++) {//输出  
		if (strcmp(cord[i].name, cord[i - 1].name) != 0) { totalmoney = 0; outname = 1; flag = 0; }
		if (strcmp(cord[i].state, "on-line") == 0) { flag = 1; }
		if (strcmp(cord[i].state, "off-line") == 0 && strcmp(cord[i].name, cord[i - 1].name) == 0 && flag == 1) {
			if (outname == 1) { printf("%s %02d\n", cord[i].name, cord[i].mon);  outname = 0; }
			printf("%02d:%02d:%02d %02d:%02d:%02d %d ", cord[i - 1].day, cord[i - 1].hour, cord[i - 1].minute, cord[i].day, cord[i].hour, cord[i].minute,
				cord[i].minute - cord[i - 1].minute + 60 * (cord[i].hour - cord[i - 1].hour) + 1440 * (cord[i].day - cord[i - 1].day));
			printf("$%.02lf\n", money(cord[i - 1], cord[i]));
			totalmoney += money(cord[i - 1], cord[i]);
			flag = 0;
		}
		if (strcmp(cord[i].name, cord[i + 1].name) != 0 && totalmoney != 0)
			printf("Total amount: $%0.2lf\n", totalmoney);

	}
	system("pause");
	return 0;
}
