// L2-002.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct node {
	int key;
	int next;
}a[100000],b[100000];
int main()
{
	bool exist[100000];
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
	while (p.next != -1)
	{
		cout << a[p.next].key << " ";
		p.next = a[p.next].next;
	}
	system("pause");
    return 0;
}

