#include<iostream>
#include<queue>
#include"BinaryTree.h"
#include<climits>
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
		cout << "Enter right child of front " << front->data << endl;
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

pair<int,int> maxminvalueTree(BinaryTreeNode<int> *root){
	if(root == NULL){
		pair<int,int> p;
		p.first = INT_MAX;
		p.second = INT_MIN;
		return p;
	}
	pair<int,int> maxminvl = maxminvalueTree(root->left);
	pair<int,int> maxminvr = maxminvalueTree(root->right);
	int lmin = maxminvl.first;
	int lmax = maxminvl.second;
	int rmin = maxminvr.first;
	int rmax = maxminvr.second;
	pair<int,int> fminmax;
	fminmax.first = min(lmin,min(root->data,rmin));
	fminmax.second = max(lmax,max(rmax,root->data));
	return fminmax;
}

int main(){
	BinaryTreeNode<int> *root = takeInputLevelWise();
	pair<int,int> p = maxminvalueTree(root);
	cout << "Minimum Value :- " << p.first << endl;
	cout << "Maximum Value :- " << p.second << endl;
}
