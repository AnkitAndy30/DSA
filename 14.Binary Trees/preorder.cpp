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

void preorder(BinaryTreeNode<int> *root){
	if(root == NULL){
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

int main(){
	BinaryTreeNode<int> *root = takeInputLevelWise();
	preorder(root);
}
