#include<iostream>
#include<queue>
#include"BinaryTree.h"
using namespace std;

BinaryTreeNode<int> *takeInputLevelWise(){
	cout << "Enter root data" << endl;
	int rootData;
	cin >> rootData;
	BinaryTreeNode<int> *root = new BinaryTreeNode<int> (rootData);
	
	queue<BinaryTreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	
	while(pendingnodes.size() != 0){
		BinaryTreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout << "Enter left child of " << front->data << endl;
		int leftdata;
		cin >>leftdata;
		if(leftdata != -1){
			BinaryTreeNode<int> *leftchild = new BinaryTreeNode<int> (leftdata);
			pendingnodes.push(leftchild);
			front->left = leftchild;
		}
		cout << "Enter right child of " << front->data << endl;
		int rightdata;
		cin >>rightdata;
		if(rightdata != -1){
			BinaryTreeNode<int> *rightchild = new BinaryTreeNode<int> (rightdata);
			pendingnodes.push(rightchild);
			front->right = rightchild;
		}		
	}
	return root;
}


pair<int,int> treeDiameter(BinaryTreeNode<int> *root){
	if(root == NULL){
		pair<int,int> p;
		p.first = 0;
		p.second = 0;
		return p;
	}
	pair<int,int> leftdh = treeDiameter(root->left);
	pair<int,int> rightdh = treeDiameter(root->right);
	int lefth = leftdh.first;
	int leftd = leftdh.second;
	int righth = rightdh.first;
	int rightd = rightdh.second;
	pair<int,int> findh;
	findh.first = 1 + max(lefth,righth);
	findh.second = max(leftd,max(lefth+righth,rightd));
	return findh;
}

// 1 2 3 4 5 -1 -1 6 -1 -1 7 8 -1 -1 9 -1 -1 -1 -1

int main(){
	BinaryTreeNode<int> *root = takeInputLevelWise();
	pair<int,int> p = treeDiameter(root);
	cout << "Tree Height :- " << p.first << endl;
	cout << "Tree Diameter :- " << p.second << endl;
}
