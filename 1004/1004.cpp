// 1004.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>  
#include <cstring>  
#include <algorithm> 
#include<iomanip> 
using namespace std;
const int INF = 0x3f3f3f3f;

struct node {
	int data;
	node* lchild;
	node* rchild;

};
node* root = NULL;

node* newNode(int v) {
	node* Node = new node;
	Node->data = v;
	Node->lchild = Node->rchild = NULL;
	return Node;
}

void search(node* root, int x, int newdata) {

	if (root == NULL) {
		return;//递归边界
	}
	if (root->data == x) {
		root->data = newdata;
	}

	search(root->lchild, x, newdata);
	search(root->rchild, x, newdata);

}

void insert(node* &root, int x) {
	if (root == NULL) {
		root = newNode(x);
		return;
	}
	insert(root->lchild, x);
}

node* Create(int data[], int n) {
	node* root = NULL;
	for (int i = 0; i < n; i++) {
		insert(root, data[i]);
	}
	return root;
}
int main() {

	int N, M;


	cin >> N;
	cin >> M;
	

	
	return 0;
}

