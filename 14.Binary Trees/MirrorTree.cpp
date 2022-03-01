#include<iostream>
#include<queue>
#include"BinaryTree.h"
using namespace std;

BinaryTreeNode<int> *takeinputLevelWise(){
	cout << "Enter root data " << endl;
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
		cin >> leftdata;
		if(leftdata != -1){
			BinaryTreeNode<int> *leftnode = new BinaryTreeNode<int> (leftdata);
			pendingnodes.push(leftnode);
			front->left = leftnode;
		}
		
		cout << "Enter right child of " << front->data << endl;
		int rightdata;
		cin >> rightdata;
		if(rightdata != -1){
			BinaryTreeNode<int> *rightnode = new BinaryTreeNode<int> (rightdata);
			pendingnodes.push(rightnode);
			front->right = rightnode;
		}
	}
	return root;
}

void printLevelWise(BinaryTreeNode<int> *root){
	queue<BinaryTreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	
	while(pendingnodes.size() != 0){
		BinaryTreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout << front->data << ": ";
		if(front->left != NULL){
			cout << "L " << front->left->data << ", ";
			pendingnodes.push(front->left);
		}
		if(front->right != NULL){
			cout << "R " << front->right->data;
			pendingnodes.push(front->right);
		}
		cout << endl;
	}
}

void MirrorTree(BinaryTreeNode<int> *root){
	if(root == NULL){
		return;
	}
	MirrorTree(root->left);
	MirrorTree(root->right);
	if((root->left != NULL) && (root->right != NULL)){
		BinaryTreeNode<int> *temp = root->left;
		root->left = root->right;
		root->right = temp;
	}
}
//1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
int main(){
	BinaryTreeNode<int> *root = takeinputLevelWise();
	printLevelWise(root);
	MirrorTree(root);
	printLevelWise(root);
}
