// L2-002.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
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
	node other;
	other.next = 0;
	while (p.next != -1)
	{
		
		if (exist[abs(a[p.next].key)] == false)
		{
			exist[abs(a[p.next].key)] = true;
		}
		else
		{
			b[other.next].key = a[p.next].key;
			b[other.next].next = a[p.next].next;
			cout << b[other.next].key << "  " << b[other.next].next;
			a[p.next].key = a[a[p.next].next].key;
			a[p.next].next = a[a[p.next].next].next;
			cout << a[p.next].key << "  " << a[p.next].next;
			other.next = b[other.next].next;

		}
		p.next = a[p.next].next;
	}
	
	p.next = head.next;
	other.next = 0;
	while (p.next != -1)
	{
		cout << p.next <<" " <<  a[p.next].key  << " "<< a[p.next].next << endl;
		p.next = a[p.next].next;
	}
	while (other.next != -1)
	{
		cout << other.next << " " << b[other.next].key << " " << b[other.next].next << endl;
		other.next = b[other.next].next;
	}


	system("pause");
    return 0;
}

