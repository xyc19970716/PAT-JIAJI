// L2-002.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

struct node {
	int key;
	int next;
}a[100000];
int main()
{
	bool exist[100000];
	int x[100000], y[100000];
	node head;
	int n;
	cin >> head.next >> n;
	int address, key, next;
	for (int i = 0; i < n; i++)
	{
		cin >> address >>key >>next;
		a[address].key = key;
		a[address].next = next;
	}
	node p;
	p.next = head.next;
	node other;
	other.next = 0;

	node aup;
	int xstart = 0;
	int ystart = 0;
	while (p.next != -1)
	{
		
		if (exist[abs(a[p.next].key)] == false)
		{
			exist[abs(a[p.next].key)] = true;
			x[xstart++] = a[p.next].next;
		}
		else
		{
			y[ystart++] = a[p.next].next;

		}
		p.next = a[p.next].next;
	}
	
	p.next = head.next;
	other.next = 0;
	cout << p.next << " " << a[p.next].key << " ";
	for (int i = 0; i < xstart; i++)
	{
		cout << a[i].next << endl;
		cout << a[i].next << " " << a[a[i].next].key;
	}
	cout << "-1" << endl;
	
	cout << other.next << " " << a[other.next].key << " ";
	for (int i = 0; i < ystart; i++)
	{
		cout << a[i].next << endl;
		cout << a[i].next << " " << a[a[i].next].key;
	}
	cout << "-1" << endl;


	system("pause");
    return 0;
}

